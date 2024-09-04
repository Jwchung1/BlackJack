#include "BlackjackManager.h"
#include <iostream>
using namespace std;

void BlackjackManager::PlayGame(Player& player)
{
	cout << "\n\n";
	cout << "####### Black Jack #######\n";
	int playerSelection;
	while (true)
	{	
		ShowInterface(player, playerSelection);
		ChangeState(playerSelection);
		// µ¦ ¼ÅÇÃ

		// ÀÔÀå·á º£ÆÃ
		
		// 
	}
}

void BlackjackManager::ShowInterface(const Player& player, int& playerSelection)
{
	cout << "###############################################################\n";
	cout << "Round: " << mRoundNum << "\n";
	cout << "\n";

	switch (mGameState) {
	case BlackjackGameState::Bet:
		cout << "Enter the amount to BET...\n";
		break;
	case BlackjackGameState::Action:
		cout << "Press below keys to ACTION...\n";
		cout << "[1: Stand]  [2: Hit]  [3: Double Down]  [4: Split]  [5: Surrender]\n";
		break;
	}
	
	cout << "\n";
	cout << "\n";
	cout << "\n";
	cout << "\n";
	cout << "\n";
	cout << "Credit: " << player.getCredit() << "\n";
	cout << "###############################################################\n";
	cout << "Your Decision: ";
	cin >> playerSelection;
}

void BlackjackManager::ChangeState(const int& playerSelection)
{
	switch (mGameState) {
	case BlackjackGameState::Bet:
		break;
	case BlackjackGameState::Action:
		break;
	}
}
