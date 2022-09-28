#include "Game.h"
#include "Player.h"
#include "Deck.h"
#include "Hand.h"


using namespace std;
int WIN_WIDTH = 1060, WIN_HEIGHT = 650, WIN_X = 100, WIN_Y = 300;				// Define window size


int main(int argc, char* argv[])
{
	int numPlayers, numDecks, speed;

	srand(unsigned(time(0)));												// random seed
	FsOpenWindow(WIN_X, WIN_Y, WIN_WIDTH, WIN_HEIGHT, 1);					// opengl open window

	if(argc<2){
		speed = 250;
		numPlayers = 5;
		numDecks = 6;
	}
	else{
		speed = atoi(argv[1]);
		numPlayers = atoi(argv[2]);
		numDecks = atoi(argv[3]);
	}

	cout << "Creating game..." << endl;

	Game Simulator(numDecks, numPlayers, speed);							// Begin game with 5 players and 6 decks

	std::cout<<"loaded"<<std::endl;

	while (Simulator.terminate()) {
		//glClear(GL_DEPTH_BUFFER_BIT | GL_COLOR_BUFFER_BIT);					// clear screen
		Simulator.manage();													// run game loop
	}
	
	return 0;

}
