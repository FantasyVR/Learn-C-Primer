#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
	vector<int> vi = {}/*{1,2,3,4,5,6,7,8,9};*/;
	int va1 = vi.at(0);
	int va2 = vi[0];
	int va3 = vi.front();
	int va4 = *(vi.begin());
	int va5 = vi.back();
	int va6 = *(--vi.end());
	cout<<"At: "<<va1<<endl;
	cout<<"Index: "<<va2<<endl;
	cout<<"Front: "<<va3<<endl;
	cout<<"Begin: "<<va4<<endl;
	cout<<"Back: "<<va5<<endl;
	cout<<"End: "<<va6<<endl;

	return 0;
}
