#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;
struct PersonInfo{
	string name;
	vector<string> phones;
};
int main(int argc,char **argv)
{
	string line, word;
	vector<PersonInfo> people;
	ifstream in(argv[1]);
	istringstream record;

	while(getline(in,line))
	{
		PersonInfo info;
		record.clear(); //this statement is important
		record.str(line);
		record >> info.name;
		while(record >> word)
			info.phones.push_back(word);

		people.push_back(info);
	}
	
	for(auto &t: people)
	{
		cout<< t.name<<" ";
		for(auto &f:t.phones)
			cout<< f << " ";
		cout<<endl;
	}
	return 0;
}
