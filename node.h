//node.h
#include <iostream>	//USED
#include <cstdlib> 	//is this still needed?
#include <cstring> 	//is this still needed?
#include <vector> 	//USED
#include <string> 	//USED
using namespace std;
#ifndef  __NODE_H_INCLUDED__
#define __NODE_H_INCLUDED__
class Node 
{
	private:
	bool isNext;
	string* title;
	Node* next;
	public:
	Node(string* t);
	string* getTitle();
	void setNext(Node* node);
	Node* getNext();
	void getChain(string* out);
	int getChainlen();
};
#endif
