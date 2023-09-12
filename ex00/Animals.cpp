#include "Animals.hpp"

Animal::Animal(){
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::~Animal(){
	std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal(const Animal &animal){
	std::cout << "Animal copy constructor called" << std::endl;
	*this = animal;
}

Animal &Animal::operator=(const Animal &animal){
	std::cout << "Animal assignation operator called" << std::endl;
	this->type = animal.type;
	return *this;
}

std::string Animal::getType() const{
	return this->type;
}

void Animal::makeSound() const{
	std::cout << "Animal sound" << std::endl;
}

Dog::Dog(){
	std::cout << "Dog default constructor called" << std::endl;
	this->type = "Dog";
}

Dog::~Dog(){
	std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(const Dog &dog){
	std::cout << "Dog copy constructor called" << std::endl;
	*this = dog;
}

Dog &Dog::operator=(const Dog &dog){
	std::cout << "Dog assignation operator called" << std::endl;
	this->type = dog.type;
	return *this;
}

void Dog::makeSound() const{
	std::cout << "Dog sound" << std::endl;
}

Cat::Cat(){
	std::cout << "Cat default constructor called" << std::endl;
	this->type = "Cat";
}

Cat::~Cat(){
	std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(const Cat &cat){
	std::cout << "Cat copy constructor called" << std::endl;
	*this = cat;
}

Cat &Cat::operator=(const Cat &cat){
	std::cout << "Cat assignation operator called" << std::endl;
	this->type = cat.type;
	return *this;
}

void Cat::makeSound() const{
	std::cout << "Cat sound" << std::endl;
}