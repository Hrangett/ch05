#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

class SoSimple
{
private:
	int num;
public:
	SoSimple(int n) :num(n)
	{
		cout << "New Object:" << this << endl;
	}

	SoSimple(const SoSimple& copy) : num(copy.num)
	{
		cout << "NEw obj Cp" << this << endl;
	}
	~SoSimple()
	{
		cout << "KILL " << this << endl;
	}
};

SoSimple SimpleFuncObj(SoSimple oj)
{
	cout << "parm ADR: " << &oj << endl;
	return oj;
}

int main()
{
	SoSimple obj(7);
	SimpleFuncObj(obj);

	cout << endl;
	cout << "\t\ttempRef" << endl;
	SoSimple tempRef = SimpleFuncObj(obj);
	cout << "Return obj" << &tempRef << endl;

	return 0;
}