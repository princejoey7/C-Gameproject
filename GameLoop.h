#pragma once

#include "Player.h"
#include "PlayerOptions.h"

class Game {
private:
	Player m_player;

	void WelcomePlayer(Player& player);
	void GivePlayerOption();
	void GetPlayerInput(std::string& playerInput);
	PlayerOptions EvaluateInput(std::string& playerInput);
public:
	bool RunGame();
};

