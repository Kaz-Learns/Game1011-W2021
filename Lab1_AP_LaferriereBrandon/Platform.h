#pragma once

#include <iostream>
#include <string>
using namespace std;
class Platform
{
private:
	string m_platName;
	string m_platManu;
	int m_size = 5;
	Games* gamesArr;

public:

	Platform()
	{
		m_platName = "";
		m_platManu = "";
	}
	Platform(string name, string manufacture)
	{
		this->m_platName = name;
		this->m_platManu = manufacture;
		this->gamesArr = nullptr;

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


};




