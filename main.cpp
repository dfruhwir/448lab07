#include <iostream>
#include <vector>
#include <string>
#include "Node.h"
#include "LinkedList.h"

int main()
{
	LinkedList<int> p0;
	LinkedList<int> p1;
	LinkedList<int> p2;
	LinkedList<int> p3;
	LinkedList<int> p4;
	LinkedList<int> p5;
	LinkedList<int> p6;
	LinkedList<int> p7;
	LinkedList<int> p8;
	LinkedList<int> p9;
	LinkedList<int> p10;
	LinkedList<int> p11;
	LinkedList<int> p12;

	int temp;
	int temp2;
	std::vector<int> v;
	std::string list = "";
	std::string list2 = "";
	bool a_front = true;
	bool a_front1 = true;
	bool a_back = true;
	bool a_back1 = true;
	bool s = false;

	std::cout << "toVector() returns null list for initial list:    ";
	v=p0.toVector();
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
		std::cout << "FAIL!! :-( Initial values are " << list << "\n";
	}
	std::cout << "isEmpty()==true for initial list:                 ";
	if(p0.isEmpty()==true)
	{
		std::cout << "Pass!\n";
	}
	else
	{
		std::cout << "FAIL!! :-(\n";
	}
	std::cout << "isEmpty() does not affect initial list:           ";
	v=p0.toVector();
	list2 = "";
	for(int x=0;x<v.size();x+=1)
	{
		list2 = list2 + std::to_string(v[x]) + ",";
	}
	if(list == list2)
	{
		std::cout << "Pass!\n";
	}	
	else
	{
		std::cout << "FAIL!! :-( list should stay " << list << " but is " << list2 << "\n";
	}
	std::cout << "isEmpty() doesn't affect size on empty list:      ";
	temp = p0.size();
	s = p0.isEmpty();
	temp2 = p0.size();
	if(temp == temp2)
	{
		std::cout << "Pass!\n";
	}
	else
	{
		std::cout << "FAIL!! :-( Has size increase by " << (temp2-temp) << "\n";
	}
	//Switch to p1 in case problems have arisen
	std::cout << "size()==0 for initial list:                       ";
	v=p1.toVector();
	list = "";
	for(int x=0;x<v.size();x+=1)
	{
		list = list + std::to_string(v[x]) + ",";
	}
	temp2 = p1.size();
	if(temp2==0)
	{
		std::cout << "Pass!\n";
	}
	else
	{
		std::cout << "FAIL!! :-( Has size()==" << temp2 << "\n";
	}
	std::cout << "size() does not change initial list:              ";
	v=p1.toVector();
	list2 = "";
	for(int x=0;x<v.size();x+=1)
	{
		list2 = list2 + std::to_string(v[x]) + ",";
	}
	if(list == list2)
	{
		std::cout << "Pass!\n";
	}	
	else
	{
		std::cout << "FAIL!! :-( list should stay " << list << " but is " << list2 << "\n";
	}
	std::cout << "size() does not increase size for initial list:   ";
	temp = p1.size();
	if(temp==temp2)
	{
		std::cout << "Pass!\n";
	}
	else
	{
		std::cout << "FAIL!! :-( Has size increase by " << (temp-temp2) << "\n";
	}
	std::cout << "removeFront()==false for initial list:            ";
	if(p1.removeFront()==false)
	{
		std::cout << "Pass!\n";
	}
	else
	{
		std::cout << "FAIL!! :-(\n";
	}
	std::cout << "size does not change for removeFront()==false:    ";
	temp2 = p1.size();
	if(temp==temp2)
	{
		std::cout << "Pass!\n";
	}
	else
	{
		std::cout << "FAIL!! :-( Has size decrease by " << (temp-temp2) << "\n";
	}
	std::cout << "removeBack()==false for initial list:             ";
	if(p1.removeBack()==false)
	{
		std::cout << "Pass!\n";
	}
	else
	{
		std::cout << "FAIL!! :-(\n";
	}
	std::cout << "size does not change for removeFront()==false:    ";
	temp = p1.size();
	if(temp==temp2)
	{
		std::cout << "Pass!\n";
	}
	else
	{
		std::cout << "FAIL!! :-( Has size decrease by " << (temp2-temp) << "\n";
	}
	std::cout << "search(7)==false for initial list:                ";
	if(p1.search(7)==false)
	{
		std::cout << "Pass!\n";
	}
	else
	{
		std::cout << "FAIL!! :-(\n";
	}
	std::cout << "addFront(5) works for empty list using toVector:  ";
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
		std::cout << "FAIL!! :-( list should be 5, but is " << list << "\n";
		//Tell code not to use addFront for empty list
		a_front1 = false;
	}
	std::cout << "size() increased by 1 for addFront on empty list: ";
	temp2 = p1.size();
	if((temp2-temp)==1)
	{
		std::cout << "Pass!\n";
	}
	else
	{
		std::cout << "FAIL!! :-( Has size increase by " << (temp2-temp) << "\n";
	}

	//Switch to p2 in case problems have arisen
	std::cout << "addBack(5) works for empty list using toVector:   ";
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
		std::cout << "FAIL!! :-( list should be 5, but is " << list << "\n";
		//Tell code not to use addBack on empty list
		a_back1 = false;
	}
	std::cout << "size() increased by 1 for addBack on empty list:  ";
	temp2 = p2.size();
	if((temp2-temp)==1)
	{
		std::cout << "Pass!\n";
	}
	else
	{
		std::cout << "FAIL!! :-( Has size increase by " << (temp2-temp) << "\n";
	}
	//Switch to p3 in case problems have arisen
	std::cout << "removeFront()==true for list of size 1:           ";
	//Add a node depending on what works
	if(a_front1 = true)
	{
		p3.addFront(5);
	}
	else if(a_back1 = true)
	{
		p3.addBack(5);
	}
	else
	{
		std::cout << "Rest of test will not work due to addFront() and addBack() not working on empty list\n";
	}
	//Attempt removal
	temp2 = p3.size();
	if(p3.removeFront()==true)
	{
		std::cout << "Pass!\n";
	}
	else
	{
		std::cout << "FAIL!! :-(\n";
	}
	std::cout << "list is empty using toVector:                     ";
	v=p3.toVector();
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
	std::cout << "size() decreased by 1 for removeFront on size=1:  ";
	temp = p3.size();
	if((temp2-temp)==1)
	{
		std::cout << "Pass!\n";
	}
	else
	{
		std::cout << "FAIL!! :-( Has size decrease by " << (temp2-temp) << "\n";
	}
	//Switch to p4 in case problems have arisen
	std::cout << "removeBack()==true for list of size 1:            ";
	//Add a node depending on what works
	if(a_front1 == true)
	{
		p4.addFront(5);
	}
	else if(a_back1 == true)
	{
		p4.addBack(5);
	}
	//Attempt removal
	temp2 = p4.size();
	if(p4.removeFront()==true)
	{
		std::cout << "Pass!\n";
	}
	else
	{
		std::cout << "FAIL!! :-(\n";
	}
	std::cout << "list is empty using toVector:                     ";
	v=p4.toVector();
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
	std::cout << "size() decreased by 1 for removeBack on size=1:   ";
	temp = p4.size();
	if((temp2-temp)==1)
	{
		std::cout << "Pass!\n";
	}
	else
	{
		std::cout << "FAIL!! :-( Has size decrease by " << (temp2-temp) << "\n";
	}

	//Switch to p5 in case problems have arisen
	std::cout << "addBack() pushes to back:                         ";
	//Add a node depending on what works
	if(a_front1 == true)
	{
		p5.addFront(5);
	}
	else if(a_back1 == true)
	{
		p5.addBack(5);
	}
	p5.addBack(6);
	p5.addBack(7);
	v=p5.toVector();
	list = "";
	for(int x=0;x<v.size();x+=1)
	{
		list = list + std::to_string(v[x]) + ",";
	}
	if(list == "5,6,7,")
	{
		std::cout << "Pass!\n";
	}
	else
	{
		std::cout << "FAIL!! :-( addBack(5) addBack(6) addBack(7) should make 5,6,7, but makes " << list << "\n";
		//Tell code not to use addBack
		a_back = false;
	}
	std::cout << "size() increased by 1 for addBack:                ";
	temp = p5.size();
	p5.addBack(8);
	temp2 = p5.size();
	if((temp2-temp)==1)
	{
		std::cout << "Pass!\n";
	}
	else
	{
		std::cout << "FAIL!! :-( Has size increase by " << (temp2-temp) << "\n";
	}	

	//Switch to p6 in case problems have arisen
	std::cout << "addFront() pushes to front:                       ";
	//Add a node depending on what works
	if(a_front1 == true)
	{
		p6.addFront(5);
	}
	else if(a_back1 == true)
	{
		p6.addBack(5);
	}
	p6.addFront(6);
	p6.addFront(7);
	v=p6.toVector();
	list = "";
	for(int x=0;x<v.size();x+=1)
	{
		list = list + std::to_string(v[x]) + ",";
	}
	if(list == "7,6,5,")
	{
		std::cout << "Pass!\n";
	}
	else
	{
		std::cout << "FAIL!! :-( addFront(5) addFront(6) addFront(7) should make 7,6,5, but makes " << list << "\n";
		//Tell code not to use addFront
		a_front = false;
	}
	std::cout << "size() increased by 1 for addFront:               ";
	temp = p6.size();
	p6.addFront(8);
	temp2 = p6.size();
	if((temp2-temp)==1)
	{
		std::cout << "Pass!\n";
	}
	else
	{
		std::cout << "FAIL!! :-( Has size increase by " << (temp2-temp) << "\n";
	}

	//Switch to p7 in case problems have arisen
	//Test searches
	//Add nodes depending on what works
	if(a_front1 == true)
	{
		p7.addFront(5);
	}
	else if(a_back1 == true)
	{
		p7.addBack(5);
	}
	if(a_front == true)
	{
		p7.addFront(7);
		p7.addFront(5);
		p7.addFront(2);
		v=p7.toVector();
		list = "";
		for(int x=0;x<v.size();x+=1)
		{
			list = list + std::to_string(v[x]) + ",";
		}
		std::cout << "search returns false for list w/o the #:          ";
		if(p7.search(8) == false)
		{
			std::cout << "Pass!\n";
		}
		else
		{
			std::cout << "FAIL!! :-(\n";
		}
		std::cout << "search didn't change list:                        ";
		v=p7.toVector();
		list2 = "";
		for(int x=0;x<v.size();x+=1)
		{
			list2 = list2 + std::to_string(v[x]) + ",";
		}
		if(list == list2)
		{
			std::cout << "Pass!\n";
		}
		else
		{
			std::cout << "FAIL!! :-( list should be " << list << " but is " << list2 << "\n";
		}
		std::cout << "search returns true for list w/ the # in middle:  ";
		if(p7.search(7) == true)
		{
			std::cout << "Pass!\n";
		}
		else
		{
			std::cout << "FAIL!! :-(\n";
		}
		std::cout << "search didn't change list:                        ";
		v=p7.toVector();
		list = "";
		for(int x=0;x<v.size();x+=1)
		{
			list = list + std::to_string(v[x]) + ",";
		}
		if(list == list2)
		{
			std::cout << "Pass!\n";
		}
		else
		{
			std::cout << "FAIL!! :-( list should be " << list2 << " but is " << list << "\n";
		}
		std::cout << "search returns true for list w/ 2 the #:          ";
		if(p7.search(5) == true)
		{
			std::cout << "Pass!\n";
		}
		else
		{
			std::cout << "FAIL!! :-(\n";
		}
		std::cout << "search didn't change list:                        ";
		v=p7.toVector();
		list2 = "";
		for(int x=0;x<v.size();x+=1)
		{
			list2 = list2 + std::to_string(v[x]) + ",";
		}
		if(list == list2)
		{
			std::cout << "Pass!\n";
		}
		else
		{
			std::cout << "FAIL!! :-( list should be " << list << " but is " << list2 << "\n";
		}
	}
	else if(a_back == true)
	{
		p7.addBack(7);
		p7.addBack(2);
		p7.addBack(7);
		v=p7.toVector();
		list = "";
		for(int x=0;x<v.size();x+=1)
		{
			list = list + std::to_string(v[x]) + ",";
		}
		std::cout << "search returns false for list w/o the #:          ";
		if(p7.search(8) == false)
		{
			std::cout << "Pass!\n";
		}
		else
		{
			std::cout << "FAIL!! :-(\n";
		}
		std::cout << "search didn't change list:                        ";
		v=p7.toVector();
		list2 = "";
		for(int x=0;x<v.size();x+=1)
		{
			list2 = list2 + std::to_string(v[x]) + ",";
		}
		if(list == list2)
		{
			std::cout << "Pass!\n";
		}
		else
		{
			std::cout << "FAIL!! :-( list should be " << list << " but is " << list2 << "\n";
		}
		std::cout << "search returns true for list w/ the # in middle:  ";
		if(p7.search(2) == true)
		{
			std::cout << "Pass!\n";
		}
		else
		{
			std::cout << "FAIL!! :-(\n";
		}
		std::cout << "search didn't change list:                        ";
		v=p7.toVector();
		list = "";
		for(int x=0;x<v.size();x+=1)
		{
			list = list + std::to_string(v[x]) + ",";
		}
		if(list == list2)
		{
			std::cout << "Pass!\n";
		}
		else
		{
			std::cout << "FAIL!! :-( list should be " << list2 << " but is " << list << "\n";
		}
		std::cout << "search returns false for list w/ 2 the #:         ";
		if(p7.search(7) == true)
		{
			std::cout << "Pass!\n";
		}
		else
		{
			std::cout << "FAIL!! :-(\n";
		}
		std::cout << "search didn't change list:                        ";
		v=p7.toVector();
		list2 = "";
		for(int x=0;x<v.size();x+=1)
		{
			list2 = list2 + std::to_string(v[x]) + ",";
		}
		if(list == list2)
		{
			std::cout << "Pass!\n";
		}
		else
		{
			std::cout << "FAIL!! :-( list should be " << list << " but is " << list2 << "\n";
		}
		
	}
	else
	{
		std::cout << "Rest of test will not work due to addFront() and addBack() not working\n";
	}
	//Switch to p8 in case of problems
	std::cout << "size() does not affect list:                      ";
	//Add nodes depending on what works
	if(a_front1 == true)
	{
		p8.addFront(5);
	}
	else if(a_back1 == true)
	{
		p8.addBack(5);
	}
	if(a_front == true)
	{
		p8.addFront(6);
		p8.addFront(7);
	}
	else if(a_back == true)
	{
		p8.addBack(6);
		p8.addBack(7);
	}
	v=p8.toVector();
	list = "";
	for(int x=0;x<v.size();x+=1)
	{
		list = list + std::to_string(v[x]) + ",";
	}
	temp = p8.size();
	v=p8.toVector();
	list2 = "";
	for(int x=0;x<v.size();x+=1)
	{
		list2 = list2 + std::to_string(v[x]) + ",";
	}
	if(list == list2)
	{
		std::cout << "Pass!\n";
	}
	else
	{
		std::cout << "FAIL!! :-( list should be " << list << " but is " << list2 << "\n";
	}
	std::cout << "size() does not affect size for non-empty list    ";
	temp2 = p8.size();
	if(temp==temp2)
	{
		std::cout << "Pass!\n";
	}
	else
	{
		std::cout << "FAIL!! :-( Has size increase by " << (temp2-temp) << "\n";
	}	
	//Switch to p9 in case of problems
	std::cout << "removeBack() returns true on big list:            ";
	//Add nodes depending on what works
	if(a_front1 == true)
	{
		p9.addFront(5);
	}
	else if(a_back1 == true)
	{
		p9.addBack(5);
	}
	if(a_front == true)
	{
		p9.addFront(6);
		p9.addFront(7);
		temp = p9.size();
		if(p9.removeBack() == true)
		{
			std::cout << "Pass!\n";
		}
		else
		{
			std::cout << "FAIL!! :-(\n";
		}
		std::cout << "removeBack() removes back:                        ";
		v=p9.toVector();
		list = "";
		for(int x=0;x<v.size();x+=1)
		{
			list = list + std::to_string(v[x]) + ",";
		}
		if(list == "7,6,")
		{
			std::cout << "Pass!\n";
		}	
		else
		{
			std::cout << "FAIL!! :-( 7,6,5, list should turn to 7,6, but is " << list << "\n";
		}
		std::cout << "size() decreased by 1 for removeBack:             ";
		temp2 = p9.size();
		if((temp-temp2)==1)
		{
			std::cout << "Pass!\n";
		}
		else
		{
			std::cout << "FAIL!! :-( Has size decrease by " << (temp-temp2) << "\n";
		}
	}
	else if(a_back == true)
	{
		p9.addBack(6);
		p9.addBack(7);
		temp = p9.size();
		if(p9.removeBack() == true)
		{
			std::cout << "Pass!\n";
		}
		else
		{
			std::cout << "FAIL!! :-(\n";
		}
		std::cout << "removeBack() removes back:                        ";
		v=p9.toVector();
		list = "";
		for(int x=0;x<v.size();x+=1)
		{
			list = list + std::to_string(v[x]) + ",";
		}
		if(list == "5,6,")
		{
			std::cout << "Pass!\n";
		}	
		else
		{
			std::cout << "FAIL!! :-( 5,6,7, list should turn to 5,6, but is " << list << "\n";
		}
		std::cout << "size() decreased by 1 for removeBack:             ";
		temp2 = p9.size();
		if((temp-temp2)==1)
		{
			std::cout << "Pass!\n";
		}
		else
		{
			std::cout << "FAIL!! :-( Has size decrease by " << (temp-temp2) << "\n";
		}
	}	
	//Switch to p10 in case problems have arisen
	std::cout << "removeFront() returns true on big list:           ";
	//Add nodes depending on what works
	if(a_front1 == true)
	{
		p10.addFront(5);
	}
	else if(a_back1 == true)
	{
		p10.addBack(5);
	}
	if(a_front == true)
	{
		p10.addFront(6);
		p10.addFront(7);
		temp = p10.size();
		if(p10.removeFront() == true)
		{
			std::cout << "Pass!\n";
		}
		else
		{
			std::cout << "FAIL!! :-(\n";
		}
		std::cout << "removeFront() removes front:                      ";
		v=p10.toVector();
		list = "";
		for(int x=0;x<v.size();x+=1)
		{
			list = list + std::to_string(v[x]) + ",";
		}
		if(list == "6,5,")
		{
			std::cout << "Pass!\n";
		}	
		else
		{
			std::cout << "FAIL!! :-( 7,6,5 list should turn to 6,5, but is " << list << "\n";
		}
		std::cout << "size() decreased by 1 for removeFront:            ";
		temp2 = p10.size();
		if((temp-temp2)==1)
		{
			std::cout << "Pass!\n";
		}
		else
		{
			std::cout << "FAIL!! :-( Has size decrease by " << (temp-temp2) << "\n";
		}
	}
	else if(a_back == true)
	{
		p10.addBack(6);
		p10.addBack(7);
		temp = p10.size();
		if(p10.removeFront() == true)
		{
			std::cout << "Pass!\n";
		}
		else
		{
			std::cout << "FAIL!! :-(\n";
		}
		std::cout << "removeFront() removes front:                      ";
		v=p10.toVector();
		list = "";
		for(int x=0;x<v.size();x+=1)
		{
			list = list + std::to_string(v[x]) + ",";
		}
		if(list == "6,7,")
		{
			std::cout << "Pass!\n";
		}	
		else
		{
			std::cout << "FAIL!! :-( 5,6,7, list should turn to 6,7, but is " << list << "\n";
		}
		std::cout << "size() decreased by 1 for removeFront:            ";
		temp2 = p10.size();
		if((temp-temp2)==1)
		{
			std::cout << "Pass!\n";
		}
		else
		{
			std::cout << "FAIL!! :-( Has size decrease by " << (temp-temp2) << "\n";
		}
	}
	//Switch to p11 in case problems have arisen
	std::cout << "isEmpty() returns false on non-empty list:        ";
	//Add nodes depending on what works
	if(a_front1 == true)
	{
		p11.addFront(5);
	}
	else if(a_back1 == true)
	{
		p11.addBack(5);
	}
	if(a_front == true)
	{
		p11.addFront(6);
		p11.addFront(7);
		v=p11.toVector();
		list = "";
		for(int x=0;x<v.size();x+=1)
		{
			list = list + std::to_string(v[x]) + ",";
		}
		if(p11.isEmpty() == false)
		{
			std::cout << "Pass!\n";
		}
		else
		{
			std::cout << "FAIL!! :-(\n";
		}
		std::cout << "isEmpty() does not affect list:                   ";
		v=p11.toVector();
		list2 = "";
		for(int x=0;x<v.size();x+=1)
		{
			list2 = list2 + std::to_string(v[x]) + ",";
		}
		if(list == list2)
		{
			std::cout << "Pass!\n";
		}	
		else
		{
			std::cout << "FAIL!! :-( list should stay " << list << " but is " << list2 << "\n";
		}
		std::cout << "isEmpty() doesn't affect size on non-empty list:  ";
		temp = p11.size();
		s = p11.isEmpty();
		temp2 = p11.size();
		if(temp == temp2)
		{
			std::cout << "Pass!\n";
		}
		else
		{
			std::cout << "FAIL!! :-( Has size increase by " << (temp2-temp) << "\n";
		}
	}
	else if(a_back == true)
	{
		p11.addBack(6);
		p11.addBack(7);
		v=p11.toVector();
		list = "";
		for(int x=0;x<v.size();x+=1)
		{
			list = list + std::to_string(v[x]) + ",";
		}
		if(p11.isEmpty() == false)
		{
			std::cout << "Pass!\n";
		}
		else
		{
			std::cout << "FAIL!! :-(\n";
		}
		std::cout << "isEmpty() does not affect list:                   ";
		v=p11.toVector();
		list2 = "";
		for(int x=0;x<v.size();x+=1)
		{
			list2 = list2 + std::to_string(v[x]) + ",";
		}
		if(list == list2)
		{
			std::cout << "Pass!\n";
		}	
		else
		{
			std::cout << "FAIL!! :-( list should stay " << list << " but is " << list2 << "\n";
		}
		std::cout << "isEmpty() doesn't affect size on non-empty list:  ";
		temp = p11.size();
		s = p11.isEmpty();
		temp2 = p11.size();
		if(temp == temp2)
		{
			std::cout << "Pass!\n";
		}
		else
		{
			std::cout << "FAIL!! :-( Has size increase by " << (temp2-temp) << "\n";
		}
	}
	return(0);
}
