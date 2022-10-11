#include "Cat.hpp"
#include "Dog.hpp"
#include "AAnimal.hpp"
#include "Brain.hpp"


# define NBR_ANIMAL 10

int	main(void)
{	
	//const AAnimal *meta = new AAnimal();
	const AAnimal *j = new Dog();
	const AAnimal *i = new Cat();
	std::cout << std::endl;
	std::cout << "SOUND : " << std::endl;
	std::cout << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	std::cout << std::endl;
	std::cout << std::endl;
	delete i;
	delete j;

	return 0;
}
