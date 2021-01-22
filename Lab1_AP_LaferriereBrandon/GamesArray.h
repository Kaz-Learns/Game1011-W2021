#pragma once
#include <iostream>
#include <string>
#include "Platform.h"
#include "Achievements.h"

class GamesArray
{
private:
	string m_gName;
	string m_gPublisher;
	string m_gDeveloper;
	const int size = 10;
	AchievementsArray* m_pAchievement[];

public:

	void setName(string name)
	{
		m_gName = name;
	}
	void setPub(string publisher)
	{
		m_gPublisher = publisher;
	}
	void setDev(string dev)
	{
		m_gDeveloper = dev;
	}
	void setAchievement(AchievementsArray* achievement)
	{
		m_pAchievement[size] = achievement;
	}


};


