//moves.h
#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
#include "node.h"
#include "edge.h"
#include "graph.h"
#include "moves.h"
using namespace std;

void Moves::setLocation(Node* loc)
{
	location = loc;
};
bool Moves::isValidMove(string* name){};
Node* Moves::getMoveNode(){};

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
