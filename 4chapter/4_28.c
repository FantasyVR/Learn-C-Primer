#include <iostream>

using namespace std;

int main()
{
	cout <<"int:"<<sizeof(int)<<endl;
	cout <<"unsigned int:"<<sizeof(unsigned int)<<endl;
	cout <<"char:"<<sizeof(char)<<endl;
	cout <<"double:"<<sizeof(double)<<endl;
	cout <<"float:"<<sizeof(float)<<endl;
	cout <<"bool:"<<sizeof(bool)<<endl;
	cout <<"long long:"<<sizeof(long long)<<endl;
	cout <<"long int:"<<sizeof(long int)<<endl;
	cout <<"short:"<<sizeof(short)<<endl;
	cout <<"void: nullptr_t:"<<sizeof(std::nullptr_t)<<"bytes"<<endl;
	cout <<"int8_t:"<<sizeof(int8_t)<<endl;
return 0;
}
