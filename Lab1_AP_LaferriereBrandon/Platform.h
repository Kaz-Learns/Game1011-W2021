#pragma once

#include <iostream>
#include <string>
using namespace std;
class Platform
{
private:
	string m_platName;
	string m_platManu;
	int m_size = 0;
	string m_platGames[];
	
public:
	string getPlatName()
	{
		return m_platName;
	}
	void setPlatName(string platName)
	{
		m_platName = platName;
	}
	string getPlatManu()
	{
		return m_platManu;
	}
	void setPlatManu(string platManu)
	{
		m_platManu = platManu;
	}
	string getPlatGames();
	{
		
	}
	void setPlatGames(string platGames[])
	{
		for (int i = 0; i > m_size; i++)
		{
			m_platGames[i] = platGames[i];
		}
		
	}

};

