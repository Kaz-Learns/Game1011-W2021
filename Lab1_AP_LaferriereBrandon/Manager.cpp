#include "Manager.h"

Manager::Manager()
{
	maxSize = 4;
	currentSize = 0;
	platformList = new Platform[maxSize];
}

Manager::~Manager()
{
	delete[] platformList;
}

void Manager::Insert()
{
	if (currentSize == maxSize)
	{
		Grow();
	}
	platformList[currentSize++].Load()
}

void Manager::Display()
{
}
