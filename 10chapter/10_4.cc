#include <numeric>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<double> vi = {1.23, 12.12, 34.54, 89,34};
	//double sum = accumulate(vi.begin(),vi.end(),0.0);
	double sum = accumulate(vi.begin(),vi.end(),0);

	cout<< sum << endl;

	return 0;
}
