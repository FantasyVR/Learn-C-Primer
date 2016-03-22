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
	std::istream &is = readPrint(std::cin);// >> str; 

	std::cout<< is.rdstate() <<std::endl;
	return 0;
}
