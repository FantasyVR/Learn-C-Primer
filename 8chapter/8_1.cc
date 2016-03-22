#include <iostream>
#include <string>

std::istream& readPrint(std::istream &is)
{
	std::string str;
	while(!is.eof() && is >> str)
		std::cout<< str << std::endl;
	
	is.clear();
	return is;
}

int main()
{
	std::string str;
	readPrint(std::cin);// >> str;

	return 0;
}
