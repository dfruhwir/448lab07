#include <iostream>
#include <vector>
#include <string>
#include "Node.h"
#include "LinkedList.h"

int main()
{
	LinkedList<int> p1;
	LinkedList<int> p2;
	LinkedList<int> p3;
	int temp;
	int temp2;
	std::vector<int> v;
	std::string list = "";

	std::cout << "Test if toVector() returns null list for initial list:    ";
	v=p1.toVector();
	for(int x=0;x<v.size();x+=1)
	{
		list = list + std::to_string(v[x]) + ",";
	}
	if(list == "")
	{
		std::cout << "Pass!\n";
	}
	else
	{
		std::cout << "FAIL!! :-(\n";
	}
	std::cout << "Test if isEmpty()==true for initial list:                 ";
	if(p1.isEmpty()==true)
	{
		std::cout << "Pass!\n";
	}
	else
	{
		std::cout << "FAIL!! :-(\n";
	}
	std::cout << "Test if size()==0 for initial list:                       ";
	temp = p1.size();
	if(temp==0)
	{
		std::cout << "Pass!\n";
	}
	else
	{
		std::cout << "FAIL!! :-( Has size()==" << temp << "\n";
	}
	std::cout << "Test if removeFront()==false for initial list:            ";
	if(p1.removeFront()==false)
	{
		std::cout << "Pass!\n";
	}
	else
	{
		std::cout << "FAIL!! :-(\n";
	}
	std::cout << "Test if removeBack()==false for initial list:             ";
	if(p1.removeBack()==false)
	{
		std::cout << "Pass!\n";
	}
	else
	{
		std::cout << "FAIL!! :-(\n";
	}
	std::cout << "Test if search(7)==false for initial list:                ";
	if(p1.search(7)==false)
	{
		std::cout << "Pass!\n";
	}
	else
	{
		std::cout << "FAIL!! :-(\n";
	}
	std::cout << "Test if addFront(5) works for empty list using toVector:  ";
	p1.addFront(5);
	v=p1.toVector();
	list = "";
	for(int x=0;x<v.size();x+=1)
	{
		list = list + std::to_string(v[x]) + ",";
	}
	if(list == "5,")
	{
		std::cout << "Pass!\n";
	}
	else
	{
		std::cout << "FAIL!! :-(\n";
	}
	std::cout << "Test if isEmpty()==false:                                 ";
	if(p1.isEmpty()==false)
	{
		std::cout << "Pass!\n";
	}
	else
	{
		std::cout << "FAIL!! :-(\n";
	}
	std::cout << "Test if size() increased by 1 for addFront:               ";
	temp2 = p1.size();
	if((temp2-temp)==1)
	{
		std::cout << "Pass!\n";
	}
	else
	{
		std::cout << "FAIL!! :-( Has size increase by " << (temp2-temp) << "\n";
	}
	std::cout << "Test if removeFront()==true for list of size 1:           ";
	if(p1.removeFront()==true)
	{
		std::cout << "Pass!\n";
	}
	else
	{
		std::cout << "FAIL!! :-(\n";
	}
	std::cout << "Test if list is empty using toVector:                     ";
	v=p1.toVector();
	list = "";
	for(int x=0;x<v.size();x+=1)
	{
		list = list + std::to_string(v[x]) + ",";
	}
	if(list == "")
	{
		std::cout << "Pass!\n";
	}
	else
	{
		std::cout << "FAIL!! :-(\n";
	}
	std::cout << "Test if addBack(5) works for empty list using toVector:   ";
	//Switch to p2 in case problems have arisen
	p2.addBack(5);
	v=p2.toVector();
	list = "";
	for(int x=0;x<v.size();x+=1)
	{
		list = list + std::to_string(v[x]) + ",";
	}
	if(list == "5,")
	{
		std::cout << "Pass!\n";
	}
	else
	{
		std::cout << "FAIL!! :-(\n";
	}
	std::cout << "Test if size() increased by 1 for addBack:                ";
	temp2 = p2.size();
	if((temp2-temp)==1)
	{
		std::cout << "Pass!\n";
	}
	else
	{
		std::cout << "FAIL!! :-( Has size increase by " << (temp2-temp) << "\n";
	}
	std::cout << "Test if removeBack()==true for list of size 1:            ";
	if(p2.removeFront()==true)
	{
		std::cout << "Pass!\n";
	}
	else
	{
		std::cout << "FAIL!! :-(\n";
	}
	std::cout << "Test if list is empty using toVector:                     ";
	v=p2.toVector();
	list = "";
	for(int x=0;x<v.size();x+=1)
	{
		list = list + std::to_string(v[x]) + ",";
	}
	if(list == "")
	{
		std::cout << "Pass!\n";
	}
	else
	{
		std::cout << "FAIL!! :-(\n";
	}
	return(0);
}
