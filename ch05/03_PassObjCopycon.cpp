#include <iostream>
using namespace std;

class SoSimple
{
private:
	int num;
public:
	SoSimple(int n):num(n){ cout << " SoSimple" << endl; }
	SoSimple(const SoSimple& copy) :num(copy.num)
	{
		cout << " Call copy SoSimple" << endl;
	}
	void ShowData()
	{
		cout << "num : " << num << endl;
	}
};

void SimpleFuncObj(SoSimple ob)
{
	ob.ShowData();
}

int main() {
	SoSimple obj(7);
	cout << "함수 호출 전" << endl;
	SimpleFuncObj(obj);
	cout << "함수 호출 후" << endl;
	return 0;
}