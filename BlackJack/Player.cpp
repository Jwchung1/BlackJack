#include "Player.h"

inline string Player::getName() const
{
	return mName;
}

inline int Player::getCredit() const
{
	return mCredit;
}

void Player::setName(string&& inName) // 리터럴을 받을 일은 없기 떄문에 상수참조로 할 필욘 없다.
{
	mName = move(inName);
}

void Player::setCredit(int inCredit)
{
	mCredit = inCredit;
}
