#include <iostream>
#include <string>
#include "Game.h"

Game::Game()
{
	strcpy_s(m_gName, " ");
	strcpy_s(m_gPublisher, " ");
	strcpy_s(m_gDeveloper, " ");
	m_pAchievement = new Achievements[size];
}

Game::~Game()
{
	delete[] m_pAchievement;
}

void Game::LoadGame()
{
	cout << "\nType name, followed by RETURN or ENTER: ";
	cin.getline(m_gName, 20);		// Gets a name; discards newline.

	cout << "\nType phone number, followed by RETURN or ENTER: ";
	cin.getline(m_gPublisher, 20);	// Gets a phone; discards newline.

	cout << "\nType address, followed by RETURN or ENTER: ";
	cin.getline(m_gDeveloper, 20);

}

void Game::ShowGame()
{
	int i;

	cout <<  m_gName;		
	for (i = strlen(m_gName) + 1; i < 20; i++)
		cout.put(' ');

	cout << m_gPublisher;		// Display phone number.
	for (i = strlen(m_gPublisher) + 1; i < 20; i++)
		cout.put(' ');

	cout << m_gDeveloper;			// Display address.
	cout << '\n';
}



