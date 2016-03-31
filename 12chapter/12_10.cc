#include <iostream>
#include <memory>
#include <vector>
#include <string>

void process(std::shared_ptr<int> ptr)
{
	std::cout<< "inside the process function:"<<ptr.use_count()<<std::endl;
}

int main()
{
	std::shared_ptr<int> p(new int(42));

	process(std::shared_ptr<int> (p));


	std::cout<< p.use_count() << std::endl;
	auto q = p;
	std::cout<< p.use_count() <<std::endl;
	std::cout<<"the int p now points to is: "<< *p << std::endl;

	return 0;
}
