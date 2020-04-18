#include <iostream>
#include <string>
#include <ctime> 
#include "Header.h"
#include <cstdlib>

using namespace std;



//this is all my functions



using namespace std;

//function prototypes
string getUserName();
string getChoice();

bool optionConfirmGoRight = true; //
bool optionConfirmFightRat = true; //
bool optionConfirmLeave = true; //
bool optionConfirmCastle = true; // 
bool optionConfirmA = true;
bool optionConfirmB = true;
bool optionConfirmC = true;
bool optionConfirmD = true;




string getUserName()
{
	string userName;
	cout << "\n\n\t\tWhat is your name traveler?";
	getline(cin, userName);
	return userName;
}
string getChoice()
{
	string userOption;
	cout << "\n\n\t\tWhat will you chose to do? ";
	cin >> userOption;

	return userOption;
}
void intro()
{
	cout << "\n\n\t\tBefore you stands a castle tall and prestine. You appear to be in the courtyard \n\t\tdirectly in front of the castle. Behind you is the way out of the courtyard and into \n\t\tthe city. To your right is a fountain and a man in red sitting in a wooden chair next to it... \n\t\t'who is this man?' you wonder.\n\t\t to your left is a gigantic rat it appears that maybe it came up the nearby storm \n\t\tdrain, scary at first however you figure you could fight it and eliminate the pest.\n\n";
}

void A1(string userOption)
{
	cout << "\n\n\t\tYour options are as follows: \n\n" << endl;

	if (optionConfirmGoRight)
	{
		cout << "\t\tApproach man = type 'right'" << endl;
	}
	if (optionConfirmFightRat)
	{
		cout << "\t\tFight rat = type 'fight'" << endl;
	}
	if (optionConfirmLeave)
	{
		cout << "\t\tLeave courtyard = type 'exit'" << endl;
	}
	if (optionConfirmCastle)
	{
		cout << "\t\tEnter castle = type 'castle'" << endl;
	}

	if ((userOption == "right") || (userOption == "Right"))
	{

	}

}
void A2()
{
	cout << "These are your options: " << endl;

	if (optionConfirmA) {
		cout << "\t\t(A)'I am the mightest adventurer!'" << endl;
	}
	if (optionConfirmB) {
		cout << "\t\t(B)'Wait who are you?'" << endl;
	}
	if (optionConfirmC) {
		cout << "\t\t(C)'I don't answer questions'" << endl;
	}
	if (optionConfirmD) {
		cout << "\t\t(D)'Who am I?'" << endl;
	}
}

void goRight(string userName)
{

	cout << "\n\n\t\tYou approach the man sitting in the chair, and he says:\n\n\t\t'Hello my name is Hans! You must be " << userName << "'\n\n\t\t" << endl;
	A2();

	string A2Response;
	string A3Response;
	cin >> A2Response;


	if ((A2Response == "a") || (A2Response == "A"))

	{
		cout << "\n\n\t\tYou say: 'I am the mightest adventurer!'\n\n\t\tTo which Hans replies\n\t\t '5k pl0x'\n\n ";
		cout << "\t\tYour options are : \n\n\t\t(A)Give Hans 5k'\n\t\t(B)'Refuse to give Hans 5k'\n\n";
		cout << "\t\tPlease Choose your option:";
		cin >> A3Response;

		if ((A3Response == "a") || (A3Response == "A"))
		{
			cout << "\n\n\t\tYou proceed to give Hans 5k\n\n\t\tHe is a happy man now!";
			optionConfirmA = false;
			goRight(userName);
			cin >> A2Response;
		}
		else if ((A3Response == "b") || (A3Response == "B"))
		{
			cout << "\n\n\t\tHans is sad, but understands that you are just as poor as he is\n\n" << endl;
			optionConfirmA = false;
			goRight(userName);
			cin >> A2Response;
		}

	}
	else if ((A2Response == "b") || (A2Response == "B"))
	{
		cout << "\n\n\t\tYou say: 'Wait who are you?'\n\n\t\tTo which Hans replies\n\t\t 'I am Hans you have been alive for 1,232,232,254 days 23 hours 5 minutes\n\t\t ";
		optionConfirmB = false;
		goRight(userName);

	}
	else if ((A2Response == "c") || (A2Response == "C"))
	{
		cout << "\t\t'Hmmmmmm... " << userName << " You  should really think before you speak'" << endl;
		optionConfirmC = false;
		goRight(userName);
	}
	else if ((A2Response == "d") || (A2Response == "D"))
	{
		cout << "'You are " << userName << "'" << endl;
		optionConfirmD = false;
		goRight(userName);
	}
	else
	{
		cout << "'Anyways could you maybe kill that rat? " << userName << " And then leave me alone I need some shut eye after this giberish" << endl;
		optionConfirmGoRight = false;
	}
}