#include <iostream>
#include <string>
#include "Platform.h"
using namespace std;




int main()
{
	
	Platform* platforms[4];
	platforms[0] = new Platform("Playstation 5","Sony", Playstation);
	platforms[1] = new Platform("Xbox X", "Microsoft");
	platforms[2] = new Platform("Switch", "Nintendo");
	platforms[3] = new Platform("PC", "Various");

	platforms[0]->setGame(Playstation);
	


	


}

