#include "AMateria.hpp"

AMateria::AMateria(std::string const & type){
	this->_type = type;
	std::cout << "AMateria constructor called" << std::endl;
}

AMateria::~AMateria() {
	std::cout << "AMateria destructor called" << std::endl;
}

AMateria::AMateria(const AMateria &copy) {
	std::cout << "AMateria copy constructor called" << std::endl;
	*this = copy;
}

AMateria &AMateria::operator=(const AMateria &copy) {
	std::cout << "AMateria assignation operator called" << std::endl;
	if (this != &copy)
		this->_type = copy._type;
	return (*this);
}

std::string const & AMateria::getName() const {
	return (this->_type);
}

void AMateria::use(ICharacter& target) {
	std::cout << "-- shoots an ice bolt at " << target.getName() << " --" << std::endl;
}
