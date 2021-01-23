#include <iostream>
#include <string>
#include "Platform.h"

using namespace std;

bool mainLoop = true;


int main()
{
	int mainchoice = -1;
	int gameChoice = -1;

	if (mainLoop == true)
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

		cout << "Press 1, 2, 3 or 4 " << endl;
		cout << "1 - Playstation 5 " << endl;
		cout << "2 - Xbox X " << endl;
		cout << "3 - Switch " << endl;
		cout << "4 - PC \n" << endl;

		cin >> mainchoice;

		switch (mainchoice)
		{
		case 1:
			platforms[0].Show();
			cout << "Set games? 1 for yes 2 for no\n" << endl;
			cin >> gameChoice;
			if (gameChoice == 1)
			{
				platforms[0].Load();
			}
			else
			{
				cout << "See you later" << endl;
			}
			break;
		case 2:
			platforms[1].Show();
			cout << "Set games? 1 for yes 2 for no" << endl;
			cin >> gameChoice;
			if (gameChoice == 1)
			{
				platforms[1].Load();
			}
			else
			{
				cout << "See you later" << endl;
			}
			break;
		case 3:
			platforms[2].Show();
			cout << "Set games? 1 for yes 2 for no" << endl;
			cin >> gameChoice;
			if (gameChoice == 1)
			{
				platforms[2].Load();
			}
			else
			{
				cout << "See you later" << endl;
			}
			break;
		case 4:
			platforms[3].Show();
			cout << "Set games? 1 for yes 2 for no" << endl;
			cin >> gameChoice;
			if (gameChoice == 1)
			{
				platforms[3].Load();
			}
			else
			{
				cout << "See you later" << endl;
			}
			break;
		default:
			platforms[0].Show();
			cout << "Set games? 1 for yes 2 for no" << endl;
			cin >> gameChoice;
			if (gameChoice == 1)
			{
				platforms[0].Load();
			}
			else
			{
				cout << "See you later" << endl;
			}
			
			break;
		}

		
	}

	
	

	

	return 0;
}

