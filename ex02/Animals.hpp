#ifndef ANIMALS_HPP
#define ANIMALS_HPP
#include <iostream>
#include "Brain.hpp"
#include <string>

class Animal{
public:
	Animal();
	Animal(const Animal &animal);
	virtual ~Animal();
	Animal &operator=(const Animal &animal);
	virtual void makeSound() const = 0;
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
private:
	Brain *brain;
};

class Cat: public Animal{
public:
	Cat();
	Cat(const Cat &cat);
	~Cat();
	Cat &operator=(const Cat &cat);
	void makeSound() const;
private:
	Brain *brain;
};
#endif
