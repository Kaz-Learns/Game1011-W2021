#pragma once
#include <iostream>
#include <string>
#include "Achievements.h"
using namespace std;

class Game
{
private:
	char m_gName[20];
	char m_gPublisher[20];
	char m_gDeveloper[20];
	int size = 5;
	Achievements* m_pAchievement;

public:
	Game();
	~Game();
	void LoadGame();
	void ShowGame();
	


};


