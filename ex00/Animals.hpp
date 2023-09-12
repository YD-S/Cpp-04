#ifndef ANIMALS_HPP
#define ANIMALS_HPP
#include <iostream>
#include <string>
#include "WrongAnimals.hpp"

class Animal{
public:
	Animal();
	Animal(const Animal &animal);
	virtual ~Animal();
	Animal &operator=(const Animal &animal);
	virtual void makeSound() const;
	std::string getType() const;
protected:
	std::string type;
};

class Dog: public Animal{
public:
	Dog();
	Dog(const Dog &dog);
	~Dog();
	Dog &operator=(const Dog &dog);
	void makeSound() const;
};

class Cat: public Animal{
public:
	Cat();
	Cat(const Cat &cat);
	~Cat();
	Cat &operator=(const Cat &cat);
	void makeSound() const;
};
#endif
