#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap()
:ClapTrap("noName", 100, 50, 20){
    std::cout<<"ScavTrap(): "<<_name<<"\n";
}

ScavTrap:: ScavTrap(const std::string name)
:ClapTrap(name, 100, 50, 20){
    std::cout<<"ScavTrap(name): "<<_name<<"\n";
}

ScavTrap:: ScavTrap(const ScavTrap& rhs)
:ClapTrap(rhs._name, rhs._hitPoint, rhs._energyPoint, rhs._attackDamage){
    std::cout<<"ScavTrap(rhs): "<<_name<<"\n";
}

ScavTrap:: ~ScavTrap(){
    std::cout<<"~ScavTrap(): "<<_name<<"\n";
}

void    ScavTrap::attack(const std::string& target){
    if (!_checkCanDoSomething())
        return ;
    _energyPoint--;
    std::cout<<"ScavTrap "<<_name<<" attacks "<<target;
    std::cout<<", causing "<<_attackDamage<<" points of damage!\n";

}
void    ScavTrap::guardGate(){
    if (!_checkCanDoSomething())
        return ;
    _energyPoint--;
    std::cout<<"ScavTrap "<<_name<<" is now in gate keeper mode\n";
}

ScavTrap&   ScavTrap::operator=(const ScavTrap& rhs){
    std::cout<<"ScavTrap::operator=(const ScavTrap&): "<< _name<<"\n";
    _name = rhs._name;
    _hitPoint = rhs._hitPoint;
    _energyPoint = rhs._energyPoint;
    _attackDamage = rhs._attackDamage;
    return (*this);
}

bool    ScavTrap::_checkCanDoSomething() const{
    if (!_hitPoint){
        std::cout<<"ScavTrap "<<_name<<" can't do anything ";
        std::cout<<"becuase It has zero hit point\n";
        return (false);
    }
    if (!_energyPoint){
        std::cout<<"ClapTrap "<<_name<<" can't do anything ";
        std::cout<<"becuase It has zero energy point\n";
        return (false);
    }
    return (true);
}