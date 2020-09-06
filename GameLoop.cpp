#include "GameLoop.h"
#include <iostream>

using namespace std;

	void Game::WelcomePlayer(Player& player) {
		cout << "Welcome to Text Adventure game!" << endl << endl;
		cout << "What is your name?" << endl << endl;

		string name;
		cin >> name;
		m_player.setName(name);

		cout << endl << "Hello " << m_player.GetName() << endl;
	}

	void Game::GivePlayerOption() {
		cout << "What Who you like to do? (Enter a corresponding number)" << endl << endl;
		cout << "1. Quit" << endl << endl;
	}

	void Game::GetPlayerInput(string& playerInput) {
		cin >> playerInput;
	}

	PlayerOptions Game::EvaluateInput(string& playerInput) {
		PlayerOptions chosenOption = PlayerOptions::none;

		if (playerInput.compare("1") == 0) {
			cout << "You have chosen to Quit!" << endl << endl;
			chosenOption = PlayerOptions::Quit;
		}
		else {
			cout << "I do not recognise this option!, try again" << endl << endl;
		}
		return chosenOption;
	}


	bool Game::RunGame() {
		bool shouldEnd = false;

		GivePlayerOption();

		string playerInput;
		GetPlayerInput(playerInput);

		shouldEnd = EvaluateInput(playerInput) == PlayerOptions::Quit;
		return !shouldEnd;

	}
