#include "Animals.hpp"

void ft_exit(void){
	system("leaks -q Animals");
}

int main(){
	atexit(ft_exit);
	const Animal* meta = new Animal();
	const Animal* j = new Dog();

	Animal* r = new Cat();
	{
		Dog i = Dog();
		Dog dog = Dog(i);admin
	}

	std::cout << j->getType() << " " << std::endl;
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete j;
	delete r;
	return 0;
}