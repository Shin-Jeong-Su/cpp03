#include "ScavTrap.hpp"

ScavTrap::ScavTrap():ClapTrap()
{
    std::cout<<"ClapTrap "<<_name<<" is constructed by a default constructor\n";
}
ScavTrap:: ScavTrap(const std::string paramName):ClapTrap(paramName){}
ScavTrap:: ScavTrap(const ScavTrap& rhs){}

ScavTrap:: ~ScavTrap(){}

void    ScavTrap::attack(const std::string& target)
{

}
void    ScavTrap::guardGate()
{
    std::cout<<"ScavTrap "<<_name<<" attacks "<<target<<", causing "<<_attackDamage<<" points of damage!\n";
}

ScavTrap&   ScavTrap::operator=(const ScavTrap& rhs)
{

}