
#include <iostream>	//USED
#include <cstdlib> 	//is this still needed?
#include <cstring> 	//is this still needed?
#include <vector> 	//USED
#include <string> 	//USED
#include "node.h"
	Node::Node(string* t)
	{
		title = t;
		//cout << "Node: " << title << endl;
		isNext = false;
		//In this constructor, don't create an array for list. 
	}
	string* Node::getTitle()
	{
		return title;
	}
	void Node::setNext(Node* node)
	{
		next = node;
		isNext = true;
		cout << "'" << *title << "' set '" << (*(*node).getTitle()) << "' as next in list." << endl;
	}
	Node* Node::getNext()
	{
		return this->next;
	}
	void Node::getChain(string* out)
	{
		//concat title
		*out += *title;
		//if next then 
		if (isNext)
		{
			string breaker = *out + ", ";
			//:concat breaker
			//:call next
			next->getChain(out);
		}
	}

	int Node::getChainlen()
	{
		int len = title->size() + 2;
		if (isNext)
		{
			len += next->getChainlen();
		}
		return len;
	}
