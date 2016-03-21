#include <string>

class Person{
	std::string const& getName() const{ return Name;}
	std::string const& getAdd() const {return Address;}

	std::string Name;
	std::string Address;
};
