//moves.h
#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
#include "node.h"
#include "edge.h"
#include "graph.h"
using namespace std;

#ifndef __MOVES_H_INCLUDED__
#define __MOVES_H_INCLUDED__
class Moves
{
	private:
	Node* moveNode;
	Node* location;
	vector <Node*> moves;
	public:
	Moves();
	void setLocation(Node* loc);
	bool isValidMove(string* name);
	Node* getMoveNode();
};
#endif

/*
Class Move
Singleton
Contains a list of available moves
In class player
Methods
void setLocation(location)
- if vector <Node*> moves->size() > 0 then remove all items.
- search through all edges in edgelist
- if edge contains this, then add !this in edge to vector <Node*> moves;
bool isValidMove(name)
- if name is in vector <Node*> moves, then return true;
- also, set the node with the name, to Node* moveNode;
Node* getMoveNode()
- returns moveNode;
*/
