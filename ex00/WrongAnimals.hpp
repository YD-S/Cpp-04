#ifndef WRONGANIMALS_HPP
#define WRONGANIMALS_HPP
#include <iostream>
#include <string>


class WrongAnimal{
public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal &animal);
	virtual ~WrongAnimal();
	WrongAnimal &operator=(const WrongAnimal &animal);
	virtual void makeSound() const;
	std::string getType() const;
protected:
	std::string type;
};

class WrongDog: public WrongAnimal{
public:
	WrongDog();
	WrongDog(const WrongDog &dog);
	~WrongDog();
	WrongDog &operator=(const WrongDog &dog);
	void makeSound() const;
};

class WrongCat: public WrongAnimal{
public:
	WrongCat();
	WrongCat(const WrongCat &cat);
	~WrongCat();
	WrongCat &operator=(const WrongCat &cat);
	void makeSound() const;
};
#endif
