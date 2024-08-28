#include "Player.h"

inline string Player::getName() const
{
	return mName;
}

inline int Player::getCredit() const
{
	return mCredit;
}

void Player::setName(string&& inName) // ���ͷ��� ���� ���� ���� ������ ��������� �� �ʿ� ����.
{
	mName = move(inName);
}

void Player::setCredit(int inCredit)
{
	mCredit = inCredit;
}
