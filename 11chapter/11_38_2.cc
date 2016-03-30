#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <map>
#include <unordered_map>
#include <set>

#include <vector>

using namespace std;

unordered_map<string,string> buildMap(ifstream &map_file)
{
	unordered_map<string, string> trans_map; //store the rule of transform
	string key;
	string value;
	while(map_file >> key && getline(map_file, value))
		if(value.size() > 1)
			trans_map[key] = value.substr(1);
		else
			throw runtime_error("no rule for" + key );
	
	cout<<"the map rule" <<endl;
	for(auto &t : trans_map)
		cout<< t.first << " -> " << t.second <<endl;
	return trans_map;
}

const string &
transform(const string &s, const unordered_map<string ,string> &m)
{
	auto map_it = m.find(s);
	if(map_it != m.end())
	 	return map_it->second;
	else
		return s;
}
void word_transform(ifstream &map_file, ifstream &input)
{
	auto trans_map = buildMap(map_file);

	string text;
	while(getline(input,text))
	{
		cout<< "this line: " << text <<endl;
		cout<<"After transform: " ;
		istringstream stream(text);
		string word;
		bool firstword = true;
		while(stream >> word)
		{
			if(firstword)
				firstword = false;
			else 
				cout<< " ";
			cout<< transform(word,trans_map);
		}
		cout<<endl;
	}
}
int main(int argc, char** argv)
{
	ifstream map_file("./map_file"), input_file("file");

	word_transform(map_file,input_file);

	return 0;
}
