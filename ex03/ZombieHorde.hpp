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
		std::string randomChump(void);
		std::string randomType(void);

	private:
		Zombie *_zombie;
		std::string _type;
		std::string _name;
		static std::string _namelist[5];
		static std::string _typelist[5];
};

#endif
