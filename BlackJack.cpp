//Input output stream
#include <iostream>
//Data types imports
#include <string>
#include <array>
//Time library for rng
#include <time.h>
//Threading and chrono for sleep functionality
#include <chrono>
#include <thread>


using namespace std;







//Global variables
int x, y;
string currentCard[2];
string deck[520][2];

int dealIteration = 0;


//string playerHands[2][20];
string playerHand[20];

string dealerHand[20];

/*

Player Class

*/


class Player
{
public:

	int capital;
	int startingCapital;

	string decision;

	bool insurance;
	int insuranceAmt;

	bool busted = false;
	bool doubleDown;
	int handTotal = 0;
	int aceModifier = 0;


	void calcHand()
	{
		handTotal = 0;
		for (int i = 0; i < 20; i += 2)
		{
			if (playerHand[i] == "Ace")
			{
				handTotal += 11;
			}

			if (playerHand[i] == "King")
			{
				handTotal += 10;
			}

			if (playerHand[i] == "Queen")
			{
				handTotal += 10;
			}

			if (playerHand[i] == "Jack")
			{
				handTotal += 10;
			}

			if (playerHand[i] == "10")
			{
				handTotal += 10;
			}

			if (playerHand[i] == "9")
			{
				handTotal += 9;
			}

			if (playerHand[i] == "8")
			{
				handTotal += 8;
			}

			if (playerHand[i] == "7")
			{
				handTotal += 7;
			}

			if (playerHand[i] == "6")
			{
				handTotal += 6;
			}

			if (playerHand[i] == "5")
			{
				handTotal += 5;
			}

			if (playerHand[i] == "4")
			{
				handTotal += 4;
			}

			if (playerHand[i] == "3")
			{
				handTotal += 3;
			}

			if (playerHand[i] == "2")
			{
				handTotal += 2;
			}

		}
		handTotal = handTotal - aceModifier;

	}

	void displayHand()
	{
		cout << "Your hand:\n";

		for (int i = 0; i < 20; i += 2)
		{
			if (playerHand[i] != "" && playerHand[i + 1] != "")
			{
				cout << playerHand[i] << " " << playerHand[i + 1] << endl;
			}
		}

	}
};



/*

Dealer Class

*/



class Dealer
{
public:
	//Object Variables
	int capital;
	int startingCapital;

	string decision;

	bool insurance;
	int insuranceAmt;

	bool busted = false;
	bool doubleDown;

	int handTotal = 0;
	int aceModifier = 0;

	void dialogue()
	{
		cout << "hello" << endl;
	}

	//Shuffling dialogue
	void shuffleCountdown()
	{
		for (int i = 3; i>0; --i) {
			cout << "Shuffling...\n";
			//Sleep for 1 second...
			this_thread::sleep_for(std::chrono::seconds(1));
		}
	}

	void payout()
	{

	}


	void calcHand()
	{

	}


	void bustCheck()
	{

	}


	void seventeenCheck()
	{

	}


	void evalWinner()
	{

	}

	void evalSplit()
	{

	}


	void createCard()
	{
		x = generateRandomNumber(13);
		y = generateRandomNumber(4);

		getCard(x, y);
	}

	void createDeck()
	{
		for (int i = 0; i < 520; i++)
		{
			createCard();
			deck[i][0] = currentCard[0];
			deck[i][1] = currentCard[1];
		}
	}

	//Determine the value of a card using a nested switch algorithm
	//Note: suit is of unimportance in typical game of blackjack
	void getCard(int x, int y)
	{
		switch (x)
		{

		case 1:
			switch (y)
			{
			case 1:
				currentCard[0] = "Ace";
				currentCard[1] = "Spades";
				break;
			case 2:
				currentCard[0] = "Ace";
				currentCard[1] = "Clubs";
				break;
			case 3:
				currentCard[0] = "Ace";
				currentCard[1] = "Hearts";
				break;
			case 4:
				currentCard[0] = "Ace";
				currentCard[1] = "Diamonds";
				break;
			}
			break;

		case 2:
			switch (y)
			{
			case 1:
				currentCard[0] = "2";
				currentCard[1] = "Spades";
				break;
			case 2:
				currentCard[0] = "2";
				currentCard[1] = "Clubs";
				break;
			case 3:
				currentCard[0] = "2";
				currentCard[1] = "Hearts";
				break;
			case 4:
				currentCard[0] = "2";
				currentCard[1] = "Diamonds";
				break;
			}
			break;

		case 3:
			switch (y)
			{
			case 1:
				currentCard[0] = "3";
				currentCard[1] = "Spades";
				break;
			case 2:
				currentCard[0] = "3";
				currentCard[1] = "Clubs";
				break;
			case 3:
				currentCard[0] = "3";
				currentCard[1] = "Hearts";
				break;
			case 4:
				currentCard[0] = "3";
				currentCard[1] = "Diamonds";
				break;
			}
			break;
		case 4:
			switch (y)
			{
			case 1:
				currentCard[0] = "4";
				currentCard[1] = "Spades";
				break;
			case 2:
				currentCard[0] = "4";
				currentCard[1] = "Clubs";
				break;
			case 3:
				currentCard[0] = "4";
				currentCard[1] = "Hearts";
				break;
			case 4:
				currentCard[0] = "4";
				currentCard[1] = "Diamonds";
				break;
			}
			break;
		case 5:
			switch (y)
			{
			case 1:
				currentCard[0] = "5";
				currentCard[1] = "Spades";
				break;
			case 2:
				currentCard[0] = "5";
				currentCard[1] = "Clubs";
				break;
			case 3:
				currentCard[0] = "5";
				currentCard[1] = "Hearts";
				break;
			case 4:
				currentCard[0] = "5";
				currentCard[1] = "Diamonds";
				break;
			}
			break;

		case 6:
			switch (y)
			{
			case 1:
				currentCard[0] = "6";
				currentCard[1] = "Spades";
				break;
			case 2:
				currentCard[0] = "6";
				currentCard[1] = "Clubs";
				break;
			case 3:
				currentCard[0] = "6";
				currentCard[1] = "Hearts";
				break;
			case 4:
				currentCard[0] = "6";
				currentCard[1] = "Diamonds";
				break;
			}
			break;

		case 7:
			switch (y)
			{
			case 1:
				currentCard[0] = "7";
				currentCard[1] = "Spades";
				break;
			case 2:
				currentCard[0] = "7";
				currentCard[1] = "Clubs";
				break;
			case 3:
				currentCard[0] = "7";
				currentCard[1] = "Hearts";
				break;
			case 4:
				currentCard[0] = "7";
				currentCard[1] = "Diamonds";
				break;
			}
			break;

		case 8:
			switch (y)
			{
			case 1:
				currentCard[0] = "8";
				currentCard[1] = "Spades";
				break;
			case 2:
				currentCard[0] = "8";
				currentCard[1] = "Clubs";
				break;
			case 3:
				currentCard[0] = "8";
				currentCard[1] = "Hearts";
				break;
			case 4:
				currentCard[0] = "8";
				currentCard[1] = "Diamonds";
				break;
			}
			break;

		case 9:
			switch (y)
			{
			case 1:
				currentCard[0] = "9";
				currentCard[1] = "Spades";
				break;
			case 2:
				currentCard[0] = "9";
				currentCard[1] = "Clubs";
				break;
			case 3:
				currentCard[0] = "9";
				currentCard[1] = "Hearts";
				break;
			case 4:
				currentCard[0] = "9";
				currentCard[1] = "Diamonds";
				break;
			}
			break;

		case 10:
			switch (y)
			{
			case 1:
				currentCard[0] = "10";
				currentCard[1] = "Spades";
				break;
			case 2:
				currentCard[0] = "10";
				currentCard[1] = "Clubs";
				break;
			case 3:
				currentCard[0] = "10";
				currentCard[1] = "Hearts";
				break;
			case 4:
				currentCard[0] = "10";
				currentCard[1] = "Diamonds";
				break;
			}
			break;

		case 11:
			switch (y)
			{
			case 1:
				currentCard[0] = "Jack";
				currentCard[1] = "Spades";
				break;
			case 2:
				currentCard[0] = "Jack";
				currentCard[1] = "Clubs";
				break;
			case 3:
				currentCard[0] = "Jack";
				currentCard[1] = "Hearts";
				break;
			case 4:
				currentCard[0] = "Jack";
				currentCard[1] = "Diamonds";
				break;
			}
			break;

		case 12:
			switch (y)
			{
			case 1:
				currentCard[0] = "Queen";
				currentCard[1] = "Spades";
				break;
			case 2:
				currentCard[0] = "Queen";
				currentCard[1] = "Spades";
				break;
			case 3:
				currentCard[0] = "Queen";
				currentCard[1] = "Spades";
				break;
			case 4:
				currentCard[0] = "Queen";
				currentCard[1] = "Spades";
				break;
			}
			break;

		case 13:
			switch (y)
			{
			case 1:
				currentCard[0] = "King";
				currentCard[1] = "Spades";
				break;
			case 2:
				currentCard[0] = "King";
				currentCard[1] = "Clubs";
				break;
			case 3:
				currentCard[0] = "King";
				currentCard[1] = "Hearts";
				break;
			case 4:
				currentCard[0] = "King";
				currentCard[1] = "Diamonds";
				break;
			}
			break;
			//There should be no other card so default not set here purposely...
			//Jokers are not implemented as a card
		}
	}

	int generateRandomNumber(int size)
	{
		//TODO: create a more random rng using time as the seed

		//randomNum = startingNum + randFunct % size
		int randomN = 1 + rand() % size;
		return randomN;
	}

	//Deal the player a card
	void dealCard()
	{
		playerHand[dealIteration] = deck[dealIteration][0];
		playerHand[dealIteration + 1] = deck[dealIteration][1];
		dealIteration++; dealIteration++;
	}

	void receiveCard()
	{
		dealerHand[dealIteration] = deck[dealIteration][0];
		dealerHand[dealIteration + 1] = deck[dealIteration][1];
		dealIteration++; dealIteration++;
	}

	void displayHand()
	{
		cout << "\nDealer's hand:\n";
		for (int i = 0; i < 20; i += 2)
		{
			if (dealerHand[i] != "" && dealerHand[i + 1] != "")
			{
				cout << dealerHand[i] << " " << dealerHand[i + 1] << endl;
			}

		}
	}


	void calcDealerHand()
	{
		handTotal = 0;
		for (int i = 0; i < 20; i += 2)
		{
			if (dealerHand[i] == "Ace")
			{
				handTotal += 11;
			}

			if (dealerHand[i] == "King")
			{
				handTotal += 10;
			}

			if (dealerHand[i] == "Queen")
			{
				handTotal += 10;
			}

			if (dealerHand[i] == "Jack")
			{
				handTotal += 10;
			}

			if (dealerHand[i] == "10")
			{
				handTotal += 10;
			}

			if (dealerHand[i] == "9")
			{
				handTotal += 9;
			}

			if (dealerHand[i] == "8")
			{
				handTotal += 8;
			}

			if (dealerHand[i] == "7")
			{
				handTotal += 7;
			}

			if (dealerHand[i] == "6")
			{
				handTotal += 6;
			}

			if (dealerHand[i] == "5")
			{
				handTotal += 5;
			}

			if (dealerHand[i] == "4")
			{
				handTotal += 4;
			}

			if (dealerHand[i] == "3")
			{
				handTotal += 3;
			}

			if (dealerHand[i] == "2")
			{
				handTotal += 2;
			}

		}
		handTotal = handTotal - aceModifier;
	}




};

//To uppercase function
void toUpperCase(string& s)
{
	for(int i = 0; i < s.length(); i++)
	{
		s[i] = toupper(s[i]);
	}
}




//Determine action based on user decision
void determineAction(string decision, Player player, Dealer dealer)
{
	toUpperCase(decision);

	if(decision == "HELP")
	{
		cout << "Helping";
	}


	if(decision == "STAY")
	{
		cout << "Staying";
	}

	if(decision == "HIT")
	{
		dealer.dealCard();
		player.displayHand();
		player.calcHand();

		//Display total value of hand
		cout << endl << "Total:" << player.handTotal << endl;
		cout << "\n-----------------" << endl;


		if(player.handTotal > 21)
		{
			cout << "You lose";
		}


	}

	
}




void newGame()
{
	//Use time as a seed for the RNG
	srand(time(NULL));

	//Create a dealer and player object
	Player player;
	Dealer dealer;

	//Create the deck of cards
	dealer.createDeck();

	//Deal 2 cards and display them to the user
	dealer.dealCard();
	dealer.dealCard();
	player.displayHand();

	//Calculate the total value of the player's hand
	player.calcHand();

	//Display total value of hand
	cout << endl << "Total:" << player.handTotal << endl;
	cout << "\n-----------------" << endl;

	//Dealer gets a card and displays hand
	dealer.receiveCard();
	dealer.displayHand();
	dealer.calcDealerHand();
	cout << endl << "Total:" << dealer.handTotal << endl;
	cout << "\n-----------------" << endl;



	//Get user input 
	cout << "What would you like to do? (type \"help\" to list options ))" << endl;
	cin >> player.decision;

	determineAction(player.decision, player, dealer);



}



int main()
{
	newGame();

	return 0;
}



