#pragma once

#include<iostream>
#include<string>
#include "Platform.h"

using namespace std;

class AchievementsArray
{
private:
	string m_title;
	string m_discription;
	int m_score;

public:
	void setTitle(string title)
	{
		m_title = title;
	}
	void setDiscription(string discription)
	{
		m_discription = discription;
	}
	void setScore(int score)
	{
		m_score = score;
	}

};

