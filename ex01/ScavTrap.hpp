#pragma once
#ifndef __SCAVTRAP_H__
#define __SCAVTRAP_H__

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(const std::string name);
        ScavTrap(const ScavTrap& rhs);

        ~ScavTrap();

        void    attack(const std::string& target);
        void    guardGate();

        ScavTrap&   operator=(const ScavTrap& rhs);
    private:
        bool    _checkCanDoSomething() const override;
};
#endif