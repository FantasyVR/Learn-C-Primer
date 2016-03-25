#include <iostream>
#include <string>

using namespace std;

class Date{
public:
	Date(string &date);
	void print(){cout<<"Year: "<<year<<" "<<"Month: "<<month<<" "<<"Day: "<<day<<endl;}
private:
	unsigned int year;
	unsigned int month;
	unsigned int day;
};
Date::Date(string &date)
{
	if(string::npos != date.find_first_of("/"))
	{
		size_t pos = date.find_first_of("/");
		string str = date;
		month = stoul(str.substr(0,pos));
		size_t pos1 = str.find_first_of("/",pos+1);
		day = stoul(str.substr(pos+1,pos1-pos-1));
		year= stoul(str.substr(pos1+1,str.size()));
	}
	if(string::npos != date.find_first_of(" ")||date.find_first_of(",")!=string::npos)
	{
		string s = date;
		if(s.find("Jan") < s.size()) month = 1;	
		if(s.find("Feb") < s.size()) month = 2;	
		if(s.find("Mar") < s.size()) month = 3;	
		if(s.find("Apr") < s.size()) month = 4;	
		if(s.find("May") < s.size()) month = 5;	
		if(s.find("Jun") < s.size()) month = 6;	
		if(s.find("Jul") < s.size()) month = 7;	
		if(s.find("Aut") < s.size()) month = 8;	
		if(s.find("Sep") < s.size()) month = 9;	
		if(s.find("Oct") < s.size()) month = 10;	
		if(s.find("Nov") < s.size()) month = 11;	
		if(s.find("Dec") < s.size()) month = 12;	
		if(string::npos != date.find_first_of(" "))
			{
				day = stoul(s.substr(s.find_first_of("123456789"),s.find_first_of(" ")-s.find_first_of("123456789")));
				year = stoul(s.substr(s.find_last_of(" ")+1,4));
			}
		if(string::npos != date.find_first_of(","))
			{
				day = stoul(s.substr(s.find_first_of("123456789"),s.find_first_of(",")-s.find_first_of("123456789")));
				year = stoul(s.substr(s.find_last_of(" ")+1,4));
			}


	}
}


int main()
{
	string str1 = "Jan 10 1990";
	string str2 = "December 1, 2016";
	string str3 = "12/20/1999";
	Date da(str1);
	Date da1(str2);
	Date da2(str3);


	da.print();
	da1.print();
	da2.print();


	return 0;
}
