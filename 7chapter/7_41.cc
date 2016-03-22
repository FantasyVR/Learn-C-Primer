#include <iostream>
#include <string>

class Sales_data{
	friend std::istream &read(std::istream &, Sales_data &);
public:
	Sales_data(const std::string &BookNo,unsigned SoldCnt, double price):
		bookNo(BookNo),units_sold(SoldCnt),revenue(SoldCnt*price){std::cout<<"three"<<std::endl;}
	//delegating constructor
	Sales_data():Sales_data("",0,0){std::cout<<"Default"<<std::endl;}
	Sales_data(const std::string &BookNo):Sales_data(BookNo,0,0){std::cout<<"One String"<<std::endl;}
	Sales_data(std::istream &is):Sales_data(){ read(is, *this);}

private:
	std::string bookNo;
	unsigned units_sold;
	double revenue;
};

std::istream &read(std::istream &is, Sales_data &s)
{
	double price = 0;
	is>> s.bookNo >> s.units_sold >> price;
	s.revenue = s.units_sold * price;
	std::cout<< "Standard input stream"<<std::endl;
	return is;
}


int main()
{
//	Sales_data s1;

//	Sales_data s2("9-234-345-21-1");

//	Sales_data s3("9-234-345-21-1", 12, 34.00);

	Sales_data s4(std::cin);


	return 0;
}
