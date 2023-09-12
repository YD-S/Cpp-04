#include "ice_cure.hpp"

ice::ice() : AMateria("ice") {
	std::cout << "ice constructor called" << std::endl;
}

ice::~ice() {
	std::cout << "ice destructor called" << std::endl;
}

ice::ice(const ice &copy) : AMateria(copy) {
	std::cout << "ice copy constructor called" << std::endl;
	*this = copy;
}

ice &ice::operator=(const ice &copy) {
	std::cout << "ice assignation operator called" << std::endl;
	if (this != &copy)
		this->_type = copy._type;
	return (*this);
}

AMateria* ice::clone() const {
	return (new ice(*this));
}

void ice::use(ICharacter& target) {
	std::cout << "-- shoots an ice bolt at " << target.getName() << " --" << std::endl;
}

cure::cure() : AMateria("cure") {
	std::cout << "cure constructor called" << std::endl;
}

cure::~cure() {
	std::cout << "cure destructor called" << std::endl;
}

cure::cure(const cure &copy) : AMateria(copy) {
	std::cout << "cure copy constructor called" << std::endl;
	*this = copy;
}

cure &cure::operator=(const cure &copy) {
	std::cout << "cure assignation operator called" << std::endl;
	if (this != &copy)
		this->_type = copy._type;
	return (*this);
}

AMateria* cure::clone() const {
	return (new cure(*this));
}

void cure::use(ICharacter& target) {
	std::cout << "-- heals " << target.getName() << "'s wounds --" << std::endl;
}
