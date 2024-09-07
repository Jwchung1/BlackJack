#pragma once
#include "GameManager.h"
#include "Player.h"

class BlackjackManager : public GameManager // public 상속은 base class의 멤버들에 대한 접근제한 설정이다.
{
public:
	enum class BlackjackGameState
	{
		Idle, Bet, ShuffleDeck, DistributeCard, Action, DealerPlay, Adjustment 
	};
	void PlayGame(Player& player) override;

private:
	int mRoundNum = 1;
	BlackjackGameState mGameState = BlackjackGameState::Idle;

	void ShowInterface(const Player& player, int& playerSelection) override;
	void ChangeState(const int& playerSelection);
};