#ifndef WEAPON_H
# define WEAPON_H
# include <iostream>
# include <iomanip>
# include <string>

class Weapon{

	public:

		Weapon(const std::string& typeName);
		~Weapon();
		const std::string& getType(void) const;
		bool	setType(const std::string& typeName);
	private:
		std::string type;		 
};

#endif
