#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>
int	main(void)
{
	//ScavTrap constructor test
	// ScavTrap st1;
	ScavTrap st2("st2");
	ScavTrap st3=st2;
	st3.attack("st2");
	/////////////////////////////







	//virtual destructor test
	// ScavTrap *ptrSt2 = new ScavTrap;
	// ClapTrap *adtCt2 = ptrSt2;
	// adtCt2->attack("ct1");
	// delete adtCt2;
	
	/////////////////////////////
	return 0; 
}