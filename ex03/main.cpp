#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
#include <iostream>

int	main(void)
{
	{
	}
	{
		DiamondTrap dt1;
		dt1.whoAmI();

		std::cout<<"\n";
		DiamondTrap dt2("dt2");
		dt2.whoAmI();
		dt2.attack("dt1");
	}
	return 0; 
}