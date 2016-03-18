#include <iostream>
using namespace std;

int main()
{
	int grade;
	while(cin >> grade)
	{
		if(grade >100 || grade< 0)
			cout<< "Wrong grade!"<<endl;
		if(grade > 95)
			cout<< "A++"<<endl;
		else if(grade > 90)
			cout<< " A "<< endl;
		else if (grade > 80)
			cout<< "B" << endl;
		else if (grade >75)
			cout<< "C++" <<endl;
		else if(grade > 70)
			cout<< "C" <<endl;
		else if(grade > 60)
			cout<< "D" << endl;
		else 
			cout<< "F" <<endl;
	}
	return 0;
}
