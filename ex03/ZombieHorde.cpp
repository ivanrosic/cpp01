#include "ZombieHorde.hpp"
#include "Zombie.hpp"
#include <iostream>
#include <string>

std::string ZombieHorde::_namelist[5] = {
	"bob",
	"billy",
	"john",
	"jean-jacques",
	"albert"
};

std::string ZombieHorde::_typelist[5] = {
	"fire",
	"water",
	"frost",
	"poison",
	"dark"
};


ZombieHorde::ZombieHorde( int n ) : _nbzombie(n)
{
	int i = 0;
	int j;
	int k;

	this->_zombie_horde = new Zombie[n];
	while(i < n)
	{
	j = ((time(NULL) + rand()) / 2) % 5;
	k = ((time(NULL) + rand()) / 3) % 5;

		this->_zombie_horde[i].set_type(ZombieHorde::_typelist[j]);
		this->_zombie_horde[i].set_name(ZombieHorde::_namelist[k]);
		i++;
	}
	std::cout << "zombie horde created" << std::endl;
};

ZombieHorde::~ZombieHorde( void )
{
	delete [] this->_zombie_horde;
	std::cout << "zombie horde dead" << std::endl;
}

void ZombieHorde::announce(void) const
{
	int i = 0;
	while(i < this->_nbzombie)
	{
		_zombie_horde[i].announce();
		i++;
	}
}
