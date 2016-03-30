#include <iostream>
#include <string>
#include <map>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::multimap;

int main()
{
	multimap<string, string> authors;
	string name, book;
	while(cin >> name >> book)
		authors.insert({name, book});
	cout<<"before erase"<<endl;
	for(auto &t : authors)
		cout<< t.first << " "<< t.second <<endl;

	auto ret = authors.find(string("An"));

	if(ret != authors.end())
		authors.erase(ret);

	cout<< "After erase"<<endl;
	for(auto &t : authors)
		cout<< t.first << " "<< t.second <<endl;

	return 0;
}
