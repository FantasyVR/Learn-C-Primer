#include <iostream>
#include <list>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::list;
using std::vector;
using std::end;

int main()
{
	int ia[] = {0,1,1,2,3,5,8,13,21,55,89};
	//init vi and li
	vector<int> vi(ia,end(ia));
	list<int> li(ia,end(ia));
	
	//delete  even value
	for(auto it=vi.begin(); it!=vi.end();)
		if(!(*it&0x1))
			it = vi.erase(it);
		else
			++it;
	//delete odd value
	for(auto it=li.begin(); it!=li.end();)
		if(*it&0x1)
			it = li.erase(it);
		else
			++it;
	
	cout<< "vector: ";
	for(auto it: vi)
		cout<< it << " ";
	cout<<endl;
	cout<< "list: ";
	for(auto it: li)
		cout<< it << " ";
	cout<<endl;

	return 0;
}
