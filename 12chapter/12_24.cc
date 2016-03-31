#include <iostream>
#include <string>
#include <cstring>

int main()
{
	std::string str;
	std::cin >> str;
	std::string::size_type sz = str.size();
	char *cs = new char[sz+1]();

	for(int i=0; i< sz ; i++)
		cs[i] = str[i];

	std::cout<< cs <<std::endl;

	delete [] cs;

	return 0;
}
