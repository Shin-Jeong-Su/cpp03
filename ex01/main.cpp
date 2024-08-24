#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>
int	main(void)
{
	{
		//default constructor
		ScavTrap st1;
	}
	//parm constructor
	ScavTrap st2("st2");

	//copy constructor
	//ScavTrap st3(st2)
	ScavTrap st3=st2;

	//attack test
	std::cout<<"#attack test\n";
	for(int i=1;i<=51;i++){
		std::cout<<"attack "<<i<<"th tries: ";
		st3.attack("st2");
		//st가 takeDamage했다고 가정. 죽어도 공격 가능하다고 가정.
	}

	//copy operator
	ScavTrap st4;
	st4=st2;

	//guardGate test
	std::cout<<"#guardGate test\n";
	for(int i=1;i<=51;i++){
		std::cout<<"guardGate "<<i<<"th tries: ";
		st4.guardGate();
	}

	//virtual destructor test
	std::cout<<"#\ndestructor test\n";
	ScavTrap *ptrSt2 = new ScavTrap("ptrSt2");
	ClapTrap *adtCt2 = ptrSt2;

	//not virtual method test
	adtCt2->takeDamage(20);

	delete adtCt2;
	return 0; 
}