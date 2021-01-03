#include <iostream>	//USED
#include <cstdlib> 	//is this still needed?
#include <cstring> 	//is this still needed?
#include <vector> 	//USED
#include <string> 	//USED
#include "node.h"
#include "edge.h"
using namespace std;
//Edges are bidirectional pathways between two Nodes.
//Therefore, each edge must contain two Nodes.
	Edge::Edge(Node* a, Node* b)
	{
		node[0] = a;
		node[1] = b;
	}
	Node** Edge::getEdge()
	{
		return node;
	}
	Node* Edge::getNode(int a)
	{
		if (a == 0){return node[0];}
		else if (a == 1){return node[1];}
	}
	bool Edge::contains(Node* a)
	{
		if (a == node[0] || a == node[1])
		{
			return true;
		}
	}
	void Edge::CoutEdge()
	{
		cout << "Edge {" << (*(node[0]->getTitle())) << "} and {" << (*(node[1]->getTitle())) << "}" << endl;
	}
	string* Edge::toString(string* out) 	
	{
		*out = "Edge{" + (*(node[0]->getTitle())) + "} and {" + (*(node[1]->getTitle())) + "}\n";
		return out;
	}
