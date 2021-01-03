//edge.h
#include <iostream>	//USED
#include <cstdlib> 	//is this still needed?
#include <cstring> 	//is this still needed?
#include <vector> 	//USED
#include <string> 	//USED
#include "node.h"
using namespace std;
//Edges are bidirectional pathways between two Nodes.
//Therefore, each edge must contain two Nodes.
#ifndef __EDGE_H_INCLUDED__
#define __EDGE_H_INCLUDED__
class Edge
{
	private:
	Node* node[2];
	public:
	Edge(Node* a, Node* b);
	Node** getEdge();
	Node* getNode(int a);
	bool contains(Node* a);
	void CoutEdge();
	string* toString(string* out);
};
#endif
