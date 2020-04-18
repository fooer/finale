#include <iostream>
#include <string>
#include <ctime> 
#include "Header.h"






//this is for main and main only 


using namespace std;

//function prototypes
string getUserName();

string getChoice2();

int ratHealth = 10;
int humanHealth = 10;
int humanAttack = 0;
int ratAttack = 0;

bool optionConfirmGoRight2 = true; //
bool optionConfirmFightRat2 = true; //
bool optionConfirmLeave2 = true; //
bool optionConfirmCastle2 = true; // 
bool ratKillConfirm = false;
bool confirmLeaveRat = true;
bool confirmFightRat = true;

void intro(); //
void A1(string userName); //
void A2(string userName); //
void goRight(string userName); //
void A1_Modified(string userName);
void fightRat(string userName);
void A4(string userName);
void enterCastle(string userName); 





int main()
{
	// string for user input
	string userInput;

	cout << "\n\n\t\tWelcome to my Lumbridge\n\n" << endl;
	intro();
	string userName = getUserName();
	A1(userName);
	string userOption = getChoice();
	//starts the user option process
	if ((userOption == "right") || (userOption == "Right"))
	{
		goRight(userName);
	}
	if ((userOption == "castle") || (userOption == "Castle"))
	{
		enterCastle(userName);
	}
	if ((userOption == "fight") || (userOption == "Fight"))
	{
		fightRat(userName);
		if (ratKillConfirm == true)
		{

			A4(userName);
			//another string to grab user info because I couldn't use the same one to store both responses 
			string userOption2 = getChoice2();

			if ((userOption2 == "exit") || (userOption2 == "Exit"))
			{
				exit(0);
			}
			if ((userOption2 == "castle") || (userOption2 == "Castle"))
			{
				enterCastle(userName);
			}
		}
		if (ratKillConfirm == false)
		{
			exit(0);
		}
	}

	//if statesments for each possibility 
	if ((userOption == "exit") || ("Exit"))
	{


		exit(0);
	}
	else
	{
		cout << "Everything is working as expected" << endl;


		string userOption = getChoice();

		if ((userOption == "right") || (userOption == "Right"))
		{
			goRight(userName);
		}
		if ((userOption == "fight") || (userOption == "Fight"))
		{
			fightRat(userName);
		}
		if ((userOption == "exit") || ("Exit"))
		{
			exit(0);
		}
	}

	if (ratKillConfirm == true)
	{
		cout << "\n\n\t\tYou may enter the castle after picking up the key!";
	}


	return 0;
}


string getChoice2()
{
	string userOption;
	cout << "\n\n\t\tWhat will you chose to do? ";
	cin >> userOption;

	return userOption;
}

void A1_Modified(string userName)
{
	cout << "\n\n\t\t" << userName << " Your options are as follows: \n\n" << endl;

	if (optionConfirmGoRight2)
	{
		cout << "\t\tApproach man = type 'right'" << endl;
	}
	if (optionConfirmFightRat2)
	{
		cout << "\t\tFight rat = type 'fight'" << endl;
	}
	if (optionConfirmLeave2)
	{
		cout << "\t\tLeave courtyard = type 'exit'" << endl;
	}
	if (optionConfirmCastle2)
	{
		cout << "\t\tEnter castle = type 'castle'" << endl;
	}
	string userInput;
	cout << "\n\n\t\tWhat will you chose to do? ";
	cin >> userInput;
}
void fightRat(string userName)
{
	//i use srand for the fighting mechanics 
	srand(time(0));

	cout << "\n\n\t\tYou look at the rat and notice a key!" << endl;
	cout << "\t\tThat could be the key to enter the castle..." << endl;
	cout << "\n\t\tYour options are as follow" << userName << endl;

	if (confirmFightRat)
	{
		cout << "\n\n\t\t(A) Fight Rat!" << endl;


	}
	if (confirmLeaveRat)
	{
		cout << "\t\t(B) Leave rat..." << endl;
	}
	string ratOption;
	cout << "\n\t\tWhat will you chose to do? " << endl;
	cin >> ratOption;

	if ((ratOption == "a") || (ratOption == "A"))
	{

		//everything is in a do loop and they fight until one kills the other. if the human kills the rat then they get the key and can enter the castle. otherwise they die and start over.
		do
		{

			humanAttack = (rand() % 10 + 1);
			cout << "\t\tYou swing your foot at the rat!" << endl;
			ratHealth = ratHealth - humanAttack;
			cout << "\t\tYou hit a " << humanAttack << endl;
			cout << "\t\tYour health is " << humanHealth << endl;
			cout << "\t\tRats health is " << ratHealth << endl;

			ratAttack = (rand() % 3 + 1);
			cout << "\t\tThe rat attacks you!" << endl;
			humanHealth = humanHealth - ratAttack;
			cout << "\t\tThe rat hit a " << ratAttack << endl;
			cout << "\t\tYour health is " << humanHealth << endl;
			cout << "\t\tRats health is " << ratHealth << endl;


		} while (humanHealth > 0 && ratHealth > 1);
	}

	if (humanHealth <= 0)
	{
		cout << "\t\tRest in peace you fought hard!" << endl;
	}
	else
	{
		cout << "\t\tYou kill the rat and got your key!" << endl;
		cout << "Go to the castle!" << endl;
		ratKillConfirm = true;
	}


}
void A4(string userName)
{
	cout << "\n\n\t\t" << userName << " Your options are as follows: \n\n" << endl;
	cout << "\t\tEnter castle = type 'castle'" << endl;
	cout << "\t\tLeave courtyard = type 'exit'" << endl;

}
void enterCastle(string userName)
{
	if (ratKillConfirm == true)
	{
		cout << " congratz you win" << endl;
	}
	if (ratKillConfirm == false)
	{
		cout << "It appears you need a key! Maybe check out the rat" << endl;
	}

}