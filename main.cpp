#include <iostream>
#include "Node.h"
#include "LinkedList.h"

int main()
{
	LinkedList<int> p1;

	std::cout << "Test if isEmpty()==true: ";
	if(p1.isEmpty()==false)
	{
		std::cout << "Pass!\n";
	}
	else
	{
		std::cout << "FAIL!! :-(\n";
	}
	std::cout << "Test if size()==0: ";
	if(p1.size()==0)
	{
		std::cout << "Pass!\n";
	}
	else
	{
		std::cout << "FAIL!! :-(\n";
	}
	std::cout << "Test if removeFront()==false: ";
	if(p1.removeFront()==false)
	{
		std::cout << "Pass!\n";
	}
	else
	{
		std::cout << "FAIL!! :-(\n";
	}
	std::cout << "Test if removeBack()==false: ";
	if(p1.removeBack()==false)
	{
		std::cout << "Pass!\n";
	}
	else
	{
		std::cout << "FAIL!! :-(\n";
	}
	std::cout << "Test if search(7)==false: ";
	if(p1.search(7)==false)
	{
		std::cout << "Pass!\n";
	}
	else
	{
		std::cout << "FAIL!! :-(\n";
	}
	return(0);
}
