#include <iostream>
#include <vector>
using namespace std;

inline int fun(int a,int b);

using fp = int(*)(int a,int b);
//using pFun1 = decltype(fun)*;
//using pFun3 = int (int a,int b);
//typedef decltype(fun) fp;
//typedef decltype(fun) *ff;
//typedef int (*pFun2)(int a,int b);


inline int ladd(int a,int b){return a+b;}
inline int lsub(int a,int b){return a-b;}
inline int lmul(int a,int b){return a*b;}
inline int ldiv(int a,int b){return a/b;}

std::vector<fp> vec{ladd,lsub,lmul,ldiv};

int main(){
		//for(auto t: vec)
		//	cout<< f(6,2) <<endl;
		for(auto it=vec.cbegin(); it!= vec.cend(); it++)
			cout<< (*it)(6, 2) <<endl;
		return 0;
}
