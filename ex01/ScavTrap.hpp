#pragma once
#ifndef __SCAVTRAP_H__
#define __SCAVTRAP_H__

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(const std::string paramName);
        ScavTrap(const ScavTrap& rhs);

        ~ScavTrap();

        void    guardGate();

        ScavTrap&   operator=(const ScavTrap& rhs);
    private:
};
#endif