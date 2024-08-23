#pragma once
#ifndef __CLAPTRAP_H__
#define __CLAPTRAP_H__

#include <string>

class ClapTrap
{
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(std::string name
                , unsigned int hitPoint
                , unsigned int energyPoint
                , unsigned int attackDamage);
        ClapTrap(ClapTrap& rhs);

        virtual	~ClapTrap();

        virtual void    attack(const std::string& target);
        void            takeDamage(unsigned int amount);
        void            beRepaired(unsigned int amount);

        ClapTrap& operator=(const ClapTrap& rhs);
    protected:
        std::string     _name;
        unsigned int    _hitPoint;
        unsigned int    _energyPoint;
        unsigned int    _attackDamage;

        virtual bool    _checkCanDoSomething() const;
};

#endif