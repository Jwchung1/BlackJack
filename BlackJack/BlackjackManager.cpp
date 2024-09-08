#include "BlackjackManager.h"
#include <iostream>
using namespace std;

void BlackjackManager::PlayGame(Player& player)
{
	cout << "\n\n";
	cout << "####### Black Jack #######\n";
	int playerSelection;
	
	while (true) // 게임 진행
	{	
		ShowInterface(player, playerSelection); // Interface를 보여주고, 플레이어의 선택을 받아옴.
		ChangeState(playerSelection); // 받아온 플레이어의 선택을 기반으로 다음 state를 결정
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
	case BlackjackGameState::Idle:
		mGameState = BlackjackGameState::Bet;
		break;
	case BlackjackGameState::Bet:
		mGameState = BlackjackGameState::ShuffleDeck;
		break;
	case BlackjackGameState::ShuffleDeck:
		mGameState = BlackjackGameState::DistributeCard;
		break;
	case BlackjackGameState::DistributeCard:
		if (bBust || bBlackjack)
		{
			mGameState = BlackjackGameState::Adjustment;
		}
		else
		{
			mGameState = BlackjackGameState::Action;
		}
		break;
	case BlackjackGameState::Action:
		switch (playerSelection) {
		case 1:
			mGameState = BlackjackGameState::Adjustment;
			break;
		case 2:
			mGameState = BlackjackGameState::DistributeCard;
			break;
		case 3:
			mGameState = BlackjackGameState::DoubleDown;
			break;
		default:
			mGameState = BlackjackGameState::Adjustment;
			break;
		}
		break;
	case BlackjackGameState::DealerPlay:
		break;
	case BlackjackGameState::Adjustment:
		break;
	}
}

void BlackjackManager::PlayAction(const int& playerSelection)
{

}
