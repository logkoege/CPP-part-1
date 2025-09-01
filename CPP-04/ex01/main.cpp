#include "Dog.hpp"
#include "Cat.hpp"

int main() {
	int size = 4;
	Animal* animals[size];

	std::cout << "\n--- animal tab creation ---\n" << std::endl;
	for (int i = 0; i < size; i++) 
	{
		if (i < size / 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}

	std::cout << "\n--- Sounds ---\n" << std::endl;

	for (int i = 0; i < size; i++)
		animals[i]->makeSound();

	std::cout << "\n--- Deletion ---\n" << std::endl;
	for (int i = 0; i < size; i++)
		delete animals[i];

	std::cout << "\n--- Deep copy test ---\n" << std::endl;
	Dog basic;
	Dog copy (basic);
	Dog assign;
	assign = basic;
}
