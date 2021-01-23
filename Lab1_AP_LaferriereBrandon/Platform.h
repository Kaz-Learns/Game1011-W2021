#pragma once

#include <iostream>
#include <string>
#include "Game.h"

using namespace std;

class Platform
{
private:
	string m_platName;
	string m_platManu;
	int size = 5;
	Game *m_gamesArr;
public:
	Platform();
	~Platform();
	void Load();
	void Show();
	void setName(string name);
	void setManu(string manu);

};




