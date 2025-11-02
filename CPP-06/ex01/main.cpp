#include "Data.hpp"
#include <iostream>
#include "Serializer.hpp"

int main()
{
	Data data;
	data.age = 20;
	data.name = "Logan";

	std::cout << "addr value                  : " << &data << std::endl;

	uintptr_t raw = Serializer::serialize(&data);
	std::cout << "convert to int value        : " << raw << std::endl;

	Data* ptr = Serializer::deserialize(raw);
	std::cout << "convert back to addr value  : " << ptr << std::endl;
	std::cout << "Data Nom                    : " << data.name <<std::endl;
	std::cout << "Data Âge                    : " << data.age << std::endl;
	std::cout << "Ptr Nom                     : " << ptr->name << std::endl;
	std::cout << "Ptr Âge                     : " << ptr->age << std::endl;
}