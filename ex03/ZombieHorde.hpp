#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

#include <string>
#include "Zombie.hpp"

class ZombieHorde
{
	public:
		ZombieHorde(int n);
		~ZombieHorde(void);

		void announce(void) const;

	private:
		int _nbzombie;
		Zombie *_zombie_horde;
		static std::string _namelist[5];
		static std::string _typelist[5];
};

#endif
