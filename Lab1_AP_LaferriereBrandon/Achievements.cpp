#include "Achievements.h"
#include <iostream>
#include <string>
#include "Game.h"

Achievements::Achievements()
{
	strcpy_s(m_aTitle, " ");
	strcpy_s(m_aDiscription, " ");
	score = 0;
}

//Achievements::~Achievements()
//{
//
//}

void Achievements::LoadAchieve()
{
	cout << "\nWrite Achievement title then enter: ";
	cin.getline(m_aTitle , 20);		// Gets a name; discards newline.

	cout << "\nWrite short discription of Achievement then enter: ";
	cin.getline(m_aDiscription, 20);	// Gets a phone; discards newline.

	cout << "\nEnter the score of the Achievement: ";
	cin >> score;
}

void Achievements::ShowAchieve()
{
	int i;

	cout << m_aTitle;			// Display title
	for (i = strlen(m_aTitle) + 1; i < 20; i++)
		cout.put(' ');

	cout <<m_aDiscription;		// Display discription.
	for (i = strlen(m_aDiscription) + 1; i < 20; i++)
		cout.put(' ');

	cout << score;			// Display score.
	cout << '\n';
}

