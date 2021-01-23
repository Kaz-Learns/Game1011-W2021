#include <iostream>
#include <cstring>
#include "Game.h"

Game::Game()
{
	strcpy_s(m_gName, " name ");
	strcpy_s(m_gPublisher, " pub ");
	strcpy_s(m_gDeveloper, " dev ");
	m_pAchievement = new Achievements[size];
}

Game::~Game()
{
	delete[] m_pAchievement;
}

void Game::LoadGame()
{
	cout << "\nWrite game name followed by enter: ";
	cin.getline(m_gName, 20);		// Gets a name; discards newline.

	cout << "\nWrite game publisher followed by enter: ";
	cin.getline(m_gPublisher, 20);	// Gets a phone; discards newline.

	cout << "\nWrite game developer followed by enter: ";
	cin.getline(m_gDeveloper, 20);

}

void Game::ShowGame() const
{
	int i;

	cout <<  m_gName;
	for (i = strlen(m_gName) + 1; i < 20; i++)
		cout.put(' ');

	cout <<  m_gPublisher;		// Display phone number.
	for (i = strlen(m_gPublisher) + 1; i < 20; i++)
		cout.put(' ');

	cout <<  m_gDeveloper;			// Display address.
	for (i = strlen(m_gDeveloper) + 1; i < 20; i++)
		cout.put(' ');
	cout << '\n';
}



