//graph.h
#include <iostream>	//USED
#include <cstdlib> 	//is this still needed?
#include <cstring> 	//is this still needed?
#include <vector> 	//USED
#include <string> 	//USED
#include "node.h"
#include "edge.h"
using namespace std;
#ifndef __GRAPH_H_INCLUDED__
#define __GRAPH_H_INCLUDED__
class Graph
{
//Graphs contain Nodes and Edges.
	private:
	vector <Node*> nodeList;
	vector <Edge*> edgeList;
	string* title;
	public:
	Graph();
	Graph(string* t);
	Graph(string* t, vector <Node*> nl);
	void addNode(string* t);
	void addEdge(Node* a, Node* b);
	vector <Node*> getNodeList();
	vector <Edge*> getEdges(Node* in);
	
};
#endif
