#pragma once

#include <string>
using namespace std;

class Player
{
public:
	inline string getName() const; // 간단한 함수이므로 inline화하여 런타임 스택 프레임 호출 반환 오버헤드 제거.
	inline int getCredit() const; // 함수 뒤에 const 키워드를 붙여서 객체의 상태 보호

	void setName(string&& inName); // 레퍼런스 전달로 객체 복사 비용 절감
	void setCredit(int inCredit);
private:
	string mName;
	int mCredit;
};