#pragma once
#include <iostream>
#include "Platform.h"

class Manager
{
private:
	int maxSize;
	int	currentSize;
	Platform* platformList;

public:
	Manager();
	~Manager();
	void Insert();
	void Display();
};

