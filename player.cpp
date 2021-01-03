//player.h
#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
#include "node.h"
#include "edge.h"
#include "graph.h"
using namespace std;
//Player is singleton?

/*	private:
	Node* location;
	vector <Edge*> edges;
	string* name;
	Moves* movesAvailable;
	public:
	Player(Node* initLocation, string* initName); //set location, then derive edges form location
	void Move();
	void Exit(); //DO LATER
	void Restart();	//DO LATER
*/

Player::Player(Node* initLocation, string* initName)
{
	if (initLocation != nullptr)
	{
		location = initLocation;
		movesAvailable->setLocation(location);
	}
	else
	{
		//error message, null location
		//run deconstructor
	}
	if (initName != nullptr && initName->size() > 0)
	{
		name = initName;
	}
	else
	{
		//error message, null or empty name
		//run deconstructor
	}
};

void Player::Move(string* name)
{
	if (movesAvailable->isValidMove(name))
	{
		//move to name...
		location = movesAvailable->getMoveNode();
		//print new location name
	}
};


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
