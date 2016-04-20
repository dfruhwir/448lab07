#include <iostream>
#include "Node.h"
#include "LinkedList.h"

int main()
{
	LinkedList<int> p1;

	std::cout << "Test if isEmpty()==true: ";
	if(p1.isEmpty()==false)
	{
		std::cout << "Pass!";
	}
	else
	{
		std::cout << "FAIL!! :-(";
	}
	return(0);
}
