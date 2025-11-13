#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
		Bureaucrat b("Logan", 5);
		Form f("Contrat f", 10, 20);
		b.signForm(f);
		std::cout << f << std::endl;
	}
	catch (const std::exception &e) {
		std::cout << "Erreur : " << e.what() << std::endl;
	}

	try
	{
		Bureaucrat c("lev", 100);
		Form g("Contrat g", 50, 70);
		c.signForm(g);
		std::cout << g << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << "Erreur : " << e.what() << std::endl;
	}

	try
	{
		Bureaucrat d("cesario", 150);
		Form h("Contrat h", 50, 200);
		d.signForm(h);
		std::cout << h << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Bureaucrat e("achille", 0);
		Form i("Contrat i", 50, 20);
		e.signForm(i);
		std::cout << i << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}
