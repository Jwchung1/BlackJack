#pragma once
#include <string>
using namespace std;

class Card
{
public:
	Card(string inSymbol, string inNumber) // ī�带 �����Ҷ� �̸� ���ǵ� ��ȣ�� ���� string�� ����ϰ�, ��� �����ؾ��ϹǷ� ���۷����� �ƴ� ������ ����
		: mSymbol(inSymbol)
		, mNumber(inNumber)
	{};
	inline string getSymbol() const { return mSymbol; }
	inline string getNumber() const { return mNumber; }
private:
	string mSymbol = "#";
	string mNumber = "#"; // stl�� string Ŭ������ vector Ŭ������ ���α����� RAII�� �����Ƿ�, ���� �޸� ������ ���� �ʿ䰡 ����.
};