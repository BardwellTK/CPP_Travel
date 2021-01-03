//graph.cpp
#include <iostream>	//USED
#include <cstdlib> 	//is this still needed?
#include <cstring> 	//is this still needed?
#include <vector> 	//USED
#include <string> 	//USED
#include "node.h"
#include "edge.h"
#include "graph.h"
using namespace std;


	Graph::Graph()
	{
		//set title
		string t = "UNDEFINED";
		title = &t;
	}
	Graph::Graph(string* t)
	{
		//set title
		title = t;
	}
	Graph::Graph(string* t, vector <Node*> nl)
	{
		//set title
		title = t;
		//set nodeList
		nodeList = nl;
	}
	void Graph::addNode(string* t)
	{
		Node* node = new Node(t);
		nodeList.push_back(node);
		cout << "Added Node: " << (*(nodeList.back()->getTitle())) << endl;
	}
	void Graph::addEdge(Node* a, Node* b)
	{
		Edge edge(a,b);
		edgeList.push_back(&edge);
		cout << "Added Edge: " << (*(edge.getNode(0)->getTitle())) << " | " << (*(edge.getNode(1)->getTitle())) << endl;
	}
	vector <Node*> Graph::getNodeList()
	{
		return nodeList;
	}
	vector <Edge*> Graph::getEdges(Node* in)
	{
		vector <Edge*> returnList;
		for (int i=0;i<edgeList.size();i++)
		{
			if (edgeList[i]->contains(in))
			{
				returnList.push_back(edgeList[i]);
			}
		}
		return returnList;
	}
	
