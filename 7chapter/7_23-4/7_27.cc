#include "Screen.h"

int main()
{
	Screen myscreen(5,5, 'X');
	myscreen.move(4,0).set('#').display(std::cout);
	std::cout<<std::endl;

	myscreen.display(std::cout);

	std::cout<<std::endl;

	return 0;
}
