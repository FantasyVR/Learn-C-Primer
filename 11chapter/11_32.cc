#include <iostream>
#include <string>
#include <map>
#include <set>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::map;
using std::set;
using std::multimap;

int main()
{
	multimap<string, string> authors{
			{"Anna", "Catelina"},
			{"Maten","holyshit"},
			{"Anna","wonderful"},
			{"Maten","mylady"},
			{"Maten","yesyoucan"},
			{"JacK","WildAnimal"}
	
			};

	map<string, set<string>> order_authors;
	for(const auto &author : authors)
		order_authors[author.first].insert(author.second);

	for(const auto &author : order_authors)
	{
		cout<< author.first <<": ";
		for(const auto &book : author.second)
			cout<< book << " ";

		cout<< endl;
	}


	return 0;
}
