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
	LinkedList<int> p4;
	LinkedList<int> p5;
	LinkedList<int> p6;
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

	//Switch to p2 in case problems have arisen
	std::cout << "Test if addBack(5) works for empty list using toVector:   ";
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

	//Switch to p3 in case problems have arisen
	std::cout << "Test if addBack() pushes to back:                         ";
	p3.addBack(5);
	p3.addBack(7);
	v=p3.toVector();
	list = "";
	for(int x=0;x<v.size();x+=1)
	{
		list = list + std::to_string(v[x]) + ",";
	}
	if(list == "5,7,")
	{
		std::cout << "Pass!\n";
	}
	else
	{
		std::cout << "FAIL!! :-(\n";
	}

	//Switch to p4 in case problems have arisen
	std::cout << "Test if addFront() pushes to front:                       ";
	p4.addFront(5);
	p4.addFront(7);
	v=p4.toVector();
	list = "";
	for(int x=0;x<v.size();x+=1)
	{
		list = list + std::to_string(v[x]) + ",";
	}
	if(list == "7,5,")
	{
		std::cout << "Pass!\n";
	}
	else
	{
		std::cout << "FAIL!! :-(\n";
	}

	//Switch to p5 in case problems have arisen
	std::cout << "Test if search returns false for list w/o the number:     ";
	p5.addFront(5);
	p5.addFront(7);
	p5.addFront(5);
	p5.addFront(2);
	if(p5.search(8) == false)
	{
		std::cout << "Pass!\n";
	}
	else
	{
		std::cout << "FAIL!! :-(\n";
	}
	std::cout << "Test if search returns true for list w/ 1 of the #:       ";
	if(p5.search(7) == true)
	{
		std::cout << "Pass!\n";
	}
	else
	{
		std::cout << "FAIL!! :-(\n";
	}
	std::cout << "Test if search returns false for list w/ 2 the #:         ";
	if(p5.search(5) == true)
	{
		std::cout << "Pass!\n";
	}
	else
	{
		std::cout << "FAIL!! :-(\n";
	}
	std::cout << "Test if removeBack() removes back:                        ";
	temp = p5.size();
	p5.removeBack();
	v=p5.toVector();
	list = "";
	for(int x=0;x<v.size();x+=1)
	{
		list = list + std::to_string(v[x]) + ",";
	}
	if(list == "2,5,7,")
	{
		std::cout << "Pass!\n";
	}
	else
	{
		std::cout << "FAIL!! :-(\n";
	}
	std::cout << "Test if size() decreased by 1 for removeBack:             ";
	temp2 = p5.size();
	if((temp-temp2)==1)
	{
		std::cout << "Pass!\n";
	}
	else
	{
		std::cout << "FAIL!! :-( Has size decrease by " << (temp-temp2) << "\n";
	}

	//Switch to p6 in case problems have arisen
	std::cout << "Test if removeFront() removes front:                      ";
	p6.addFront(5);
	p6.addFront(7);
	p6.addFront(2);
	temp = p6.size();
	p6.removeFront();
	v=p6.toVector();
	list = "";
	for(int x=0;x<v.size();x+=1)
	{
		list = list + std::to_string(v[x]) + ",";
	}
	if(list == "5,7,")
	{
		std::cout << "Pass!\n";
	}
	else
	{
		std::cout << "FAIL!! :-(\n";
	}
	std::cout << "Test if size() decreased by 1 for removeFront:            ";
	temp2 = p6.size();
	if((temp-temp2)==1)
	{
		std::cout << "Pass!\n";
	}
	else
	{
		std::cout << "FAIL!! :-( Has size decrease by " << (temp-temp2) << "\n";
	}
	return(0);
}
