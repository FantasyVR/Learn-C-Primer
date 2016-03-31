#include <iostream>
#include <string>
#include <cstring>
int main()
{
//dynamiclly allocated array of char
	char *concatenate_string = new char[strlen("hello " "world")+1]();
	strcat(concatenate_string,"hello ");
	strcat(concatenate_string,"world");

	std::cout<< concatenate_string <<std::endl;
//std::string
	std::string str1{"hello "},str2{"world"};
	std::cout<< str1 + str2 <<std::endl;
	
	return 0;
}
