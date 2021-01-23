#include <iostream>
#include <string>
#include "Platform.h"



bool mainLoop = true;


int main()
{
	if (mainLoop = true)
	{
		Platform* platforms = new Platform[4];

		platforms[0].setName("Playstation 5");
		platforms[0].setManu("Sony");

		platforms[1].setName("Xbox X");
		platforms[1].setManu("Microsoft");

		platforms[2].setName("Switch");
		platforms[2].setManu("Nintendo");

		platforms[3].setName("PC");
		platforms[3].setManu("Various");

		platforms[0].Load();
		platforms[0].Show();
		
		
	}

	
	

	

	return 0;
}

