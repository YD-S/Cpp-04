#ifndef AMATERIA_HPP
#define AMATERIA_HPP
#include <iostream>
#include <string>
#include "ICharacter.hpp"

class AMateria{
protected:
	std::string _type;
public:
	AMateria(std::string const & type);
	virtual ~AMateria();
	AMateria(const AMateria &copy);
	AMateria &operator=(const AMateria &copy);
	std::string const & getName() const; //Returns the materia type
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

class IMateriaSource{
public:
	virtual ~IMateriaSource() {}
	virtual void learnMateria(AMateria*) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif //AMATERIA_HPP
