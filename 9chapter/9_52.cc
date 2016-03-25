#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main()
{
	stack<char> stk;
	string exp = "(12+(18*3)/6-5)";
	bool bSeen = false;
	for(const auto &s: exp)
	{
		if(s == '('){bSeen = true; continue;}	
		else if(s == ')') bSeen = false;
		
		if(bSeen) 
			stk.push(s);
	}

	string repstr;
	while( !stk.empty())
	{
		repstr += stk.top();
		stk.pop();
	}

	exp.replace(exp.find("(")+1, repstr.size(), repstr);

	cout<< exp <<endl;

	return 0;
}
