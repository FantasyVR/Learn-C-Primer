#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;
std::vector<std::string> read(std::string &filename)
{
	std::vector<std::string> vec;
	std::ifstream in(filename);

	string buf;
	while(getline(in, buf))
		vec.push_back(buf);

	return vec;
}


int main(int argc, char **argv)
{
	//auto p = argv+1;
	std::string file(argv[1]);
	std::vector<std::string> vec;
	vec = read(file);

	for(auto s: vec)
		std::cout<< s <<std::endl;
	
	return 0;
}
