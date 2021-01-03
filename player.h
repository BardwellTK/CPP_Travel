//player.h
#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
#include "node.h"
#include "edge.h"
#include "graph.h"
using namespace std;

#ifndef __PLAYER_H_INCLUDED__
#define __PLAYER_H_INCLUDED__
class Player
{
	private:
	Node* location;
	vector <Edge*> edges;
	string* name;
	Moves movesAvailable;
	public:
	Player(Node* initLocation, string* initName); //set location, then derive edges form location
	void Move(string* name);
	void Exit(); //exit game 	#implementation later on
	void Restart();	//restart game 	#implementation later on
};
#endif
