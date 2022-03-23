#include "Warlock.hpp"

int main()
{
	Warlock const richard("Richard", "Mistress of Magma");
	richard.introduce();
	std::cout << richard.getName() << " - " << richard.getTitle() << std::endl;

	Warlock* jack = new Warlock("Jack", "the Long");
	jack->introduce();
	jack->setTitle("the Mighty");
	jack->introduce();

	Warlock A("Pynia", "Agressor");
//  Warlock B(A);
//  Warlock B;
//
//  B = A;
//
	delete jack;

	return (0);