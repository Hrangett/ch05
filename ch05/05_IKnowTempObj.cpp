#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stdio.h>

using namespace std;

class Temporary
{
private:
	int num;
public:
	Temporary(int n) : num(n)
	{
		cout << "create obj: " << num << endl;
	}
	~Temporary()
	{
		cout << "distroy obj :" << num << endl;
	}
	void ShowTempInfo()
	{
		cout << "My num is " << num << endl;
	}

};

int main(void)
{	
	//임시객체. 객체가 생성된 라인이 끝나면 바로 소멸
	Temporary (100);//실질적 이름없는, 임시객ㄱ체가 생성되었다.
	cout << "-------- after Make --------" << endl << endl;

	Temporary(200).ShowTempInfo();
	cout << "-------- after Make --------" << endl << endl;

	const Temporary& ref = Temporary(300);//heap이외에 선언된 임시객체의 주소를 참조한다
	cout << "-------- after Make --------" << endl << endl;
	
	return 0;


}