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
	//�ӽð�ü. ��ü�� ������ ������ ������ �ٷ� �Ҹ�
	Temporary (100);//������ �̸�����, �ӽð���ü�� �����Ǿ���.
	cout << "-------- after Make --------" << endl << endl;

	Temporary(200).ShowTempInfo();
	cout << "-------- after Make --------" << endl << endl;

	const Temporary& ref = Temporary(300);//heap�̿ܿ� ����� �ӽð�ü�� �ּҸ� �����Ѵ�
	cout << "-------- after Make --------" << endl << endl;
	
	return 0;


}