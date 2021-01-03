#include <iostream>	//USED
#include <cstdlib> 	//is this still needed?
#include <cstring> 	//is this still needed?
#include <vector> 	//USED
#include <string> 	//USED
#include "node.h"
#include "edge.h"
#include "graph.h"
using namespace std;

int main()
{
	string a = "London";
	string b = "Cambridge";
	string c = "Birmingham";
	string d = "Manchester";
	
	Graph map;
	map.addNode(&a);
	map.addNode(&b);
	map.addNode(&c);
	map.addNode(&d);
	map.addEdge(map.getNodeList()[0],map.getNodeList()[1]);
	map.addEdge(map.getNodeList()[1],map.getNodeList()[2]);
	vector <Edge*> edgeList;
	edgeList = map.getEdges(map.getNodeList()[1]);
	return 0;
}
