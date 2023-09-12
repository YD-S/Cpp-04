
#ifndef ICE_CURE_HPP
#define ICE_CURE_HPP
#include "AMateria.hpp"
#include "ICharacter.hpp"

class ice: public AMateria{
public:
	ice();
	~ice();
	ice(const ice &copy);
	ice &operator=(const ice &copy);
	virtual AMateria* clone() const;
	void use(ICharacter& target);
};

class cure: public AMateria{
public:
	cure();
	~cure();
	cure(const cure &copy);
	cure &operator=(const cure &copy);
	virtual AMateria* clone() const;
	void use(ICharacter& target);
};


#endif
