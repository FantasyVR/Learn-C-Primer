#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> data{0,1,2,3,4,5,6,7,8,9};
	//for(auto cur = data.begin(); cur!=data.end(); ++cur)
	//	if(*cur%2)
	//		cur = data.insert(cur,*cur),++cur;
	
	auto iter = data.begin();
	while(iter != data.end())
		if(*iter%2)
			iter = data.insert(iter,*iter);
		++iter;
	for(auto i : data)
		cout<< i << " ";
	cout<<endl;

	return 0;
}
