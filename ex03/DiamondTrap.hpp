#ifndef __DIAMONDTRAP_H__
#define __DIAMONDTRAP_H__

#include <string>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: virtual ScavTrap, virtual FragTrap{
	public:
		DiamondTrap();
		DiamondTrap(const std::string& name);
		DiamondTrap(const DiamondTrap& rhs);

		virtual ~DiamondTrap();

		void	whoAmI();

		DiamondTrap&	operator=(const DiamondTrap& rhs);
	private:
        std::string     _name;

        virtual bool    _checkCanDoSomething() const;
};
#endif