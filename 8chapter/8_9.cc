#include <iostream>
#include <string>
#include <sstream>
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
	std::string str = "This is wonderful!";
	
	std::istringstream in(str);
	readPrint(in);// >> str;

	return 0;
}
