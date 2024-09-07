#pragma once
#include "GameManager.h"
#include "Player.h"

class BlackjackManager : public GameManager // public ����� base class�� ����鿡 ���� �������� �����̴�.
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