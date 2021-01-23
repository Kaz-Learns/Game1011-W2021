#pragma once

#include<iostream>
#include<string>
#include "Platform.h"

using namespace std;

class Achievements
{
private:
	char m_aTitle[20];
	char m_aDiscription[20];
	int score = 0;
	int size = 5;


public:
	Achievements();
	/*~Achievements();*/
	void LoadAchieve();
	void ShowAchieve();

};

