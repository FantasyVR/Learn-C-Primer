#include <iostream>
#include <string>
using namespace std;

struct Person{
	std::string  const& getName() const{ return Name;}
	std::string  const& getAdd() const {return Address;}

	std::string Name;
	std::string Address;
};

std::istream &read(std::istream &is, Person &p)
{
	is >> p.Name >> p.Address;
	return is;
}

std::ostream &print(std::ostream &os, const Person &p)
{
	os << p.Name<< " " << p.Address;
	return os;
}

int main()
{
	Person per;
	while(read(cin,per))
	{
		print(cout,per);	
		cout<< endl;
	}


	return 0;
}
