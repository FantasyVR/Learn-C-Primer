#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Sales_data{
public:
	Sales_data() = default;
	Sales_data(const std::string &s1, unsigned int sells, double price):
		bookNo(s1),units_sold(sells),revenue(sells*price){}
	std::string isbn() const{return bookNo;}
private:
	std::string bookNo;
	unsigned int units_sold = 0;
	double revenue;
};

bool compareIsbn(const Sales_data &s1,const Sales_data &s2)
{
	return s1.isbn() < s2.isbn();
}

int main()
{
	Sales_data s1("fox",12,12.00),s2("red",12,23.00),s3("quick",11,23.00),s4("slow",21,23.00);
	vector<Sales_data> vs{s1, s2, s3, s4};

	sort(vs.begin(), vs.end(), compareIsbn);

	for(auto t : vs)
		cout<< t.isbn() << endl;

	return 0;
}
