#include "WrongAnimals.hpp"

WrongAnimal::WrongAnimal(){
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal(){
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &animal){
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = animal;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &animal){
	std::cout << "WrongAnimal assignation operator called" << std::endl;
	this->type = animal.type;
	return *this;
}

std::string WrongAnimal::getType() const{
	return this->type;
}

void WrongAnimal::makeSound() const{
	std::cout << "WrongAnimal sound" << std::endl;
}

WrongDog::WrongDog(){
	std::cout << "WrongDog default constructor called" << std::endl;
	this->type = "WrongDog";
}

WrongDog::~WrongDog(){
	std::cout << "WrongDog destructor called" << std::endl;
}

WrongDog::WrongDog(const WrongDog &dog){
	std::cout << "WrongDog copy constructor called" << std::endl;
	*this = dog;
}

WrongDog &WrongDog::operator=(const WrongDog &dog){
	std::cout << "WrongDog assignation operator called" << std::endl;
	this->type = dog.type;
	return *this;
}

void WrongDog::makeSound() const{
	std::cout << "WrongDog sound" << std::endl;
}

WrongCat::WrongCat(){
	std::cout << "WrongCat default constructor called" << std::endl;
	this->type = "WrongCat";
}

WrongCat::~WrongCat(){
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &cat){
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = cat;
}

WrongCat &WrongCat::operator=(const WrongCat &cat){
	std::cout << "WrongCat assignation operator called" << std::endl;
	this->type = cat.type;
	return *this;
}

void WrongCat::makeSound() const{
	std::cout << "WrongCat sound" << std::endl;
}