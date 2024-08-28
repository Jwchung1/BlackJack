#pragma once

#include <string>
using namespace std;

class Player
{
public:
	inline string getName() const; // ������ �Լ��̹Ƿ� inlineȭ�Ͽ� ��Ÿ�� ���� ������ ȣ�� ��ȯ ������� ����.
	inline int getCredit() const; // �Լ� �ڿ� const Ű���带 �ٿ��� ��ü�� ���� ��ȣ

	void setName(string&& inName); // ���۷��� ���޷� ��ü ���� ��� ����
	void setCredit(int inCredit);
private:
	string mName;
	int mCredit;
};