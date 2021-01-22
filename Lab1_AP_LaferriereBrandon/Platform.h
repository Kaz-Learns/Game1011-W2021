#pragma once

#include <iostream>
#include <string>
#include "GamesArray.h"
using namespace std;
class Platform
{
private:
	string m_platName;
	string m_platManu;
	int m_size = 5;
	GamesArray* m_gamesArr[];

public:

	Platform()
	{
		m_platName = "";
		m_platManu = "";
	}
	Platform(string name, string manufacture, GamesArray* gamesArr = nullptr)
	{
		this->m_platName = name;
		this->m_platManu = manufacture;
		m_gamesArr[m_size] = gamesArr;
	}
	~Platform()
	{

	}
	// inline functions
	string getName()
	{
		return m_platName;
	}
	string getManu()
	{
		return m_platManu;
	}
	void setGame(GamesArray* games)
	{
		m_gamesArr[6] = games;
	}


};




