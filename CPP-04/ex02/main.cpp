#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	// AAnimal a; // abstraite

	AAnimal* dog = new Dog();
	AAnimal* cat = new Cat();

	dog->makeSound();
	cat->makeSound();

	delete dog;
	delete cat;

	return 0;
}
