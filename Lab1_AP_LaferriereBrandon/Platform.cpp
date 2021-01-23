#include "Platform.h"
#include <iostream>
#include <string>

using namespace std;

Platform::Platform()
{
	size = 5;
	m_gamesArr = new Game[size];
}

Platform::~Platform()
{
	delete[] m_gamesArr;
}


void Platform::Load()
{
	m_gamesArr[size].LoadGame();
}

void Platform::Show()
{
	cout << "Platform Name: " << m_platName << endl;
	cout << "Platform Manufacturer: " << m_platManu << endl;
	cout << "Platform Games: " << endl;
	for (int i = 0; i < size; i++)
	{
		m_gamesArr[i].ShowGame();
	}
}

void Platform::setName(string name)
{
	m_platName = name;
}

void Platform::setManu(string manu)
{
	m_platManu = manu;
}
