#include "Character.hpp"

Character::Character() {
	this->_name = "default";
	for (int i = 0; i < 4; i++)
		this->_materia[i] = NULL;
}

Character::Character(std::string const &name) {
	this->_name = name;
	for (int i = 0; i < 4; i++)
		this->_materia[i] = NULL;
}

Character::~Character() {
	for (int i = 0; i < 4; i++)
		if (this->_materia[i])
			delete this->_materia[i];
}

Character::Character(const Character &copy) {
	this->_name = copy._name;
	for (int i = 0; i < 4; i++)
		this->_materia[i] = copy._materia[i];
}

Character &Character::operator=(const Character &copy) {
	this->_name = copy._name;
	for (int i = 0; i < 4; i++)
		this->_materia[i] = copy._materia[i];
	return (*this);
}

std::string const &Character::getName() const {
	return (this->_name);
}

void Character::equip(AMateria *materia) {
	for (int i = 0; i < 4; i++) {
		if (!this->_materia[i]) {
			this->_materia[i] = materia;
			break;
		}
	}
}

void Character::unequip(int idx) {
	if (idx < 0 || idx > 3)
		return ;
	this->_materia[idx] = NULL;
}

void Character::use(int idx, ICharacter &target) {
	if (idx < 0 || idx > 3)
		return ;
	if (this->_materia[idx])
		this->_materia[idx]->use(target);
}
