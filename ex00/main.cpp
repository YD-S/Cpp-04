#include "Animals.hpp"

int main(){
	const Animal *animals[10];
	const WrongAnimal *wrongAnimal[10];
	for (int i = 0; i < 10; i++){
		if (i % 2 == 0){
			animals[i] = new Dog();
			wrongAnimal[i] = new WrongDog();
		}
		else{
			animals[i] = new Cat();
			wrongAnimal[i] = new WrongCat();
		}
		std::cout << "-----------------------------------------------------" << std::endl;
		animals[i]->makeSound();
		wrongAnimal[i]->makeSound();
		std::cout << "-----------------------------------------------------" << std::endl;
	}
	for (int i = 0; i < 10; i++){
		delete animals[i];
	}
	return 0;
}