#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>

using namespace std;

class Person
{
private:
	char* name;
	int age;

public:
	Person(const char* myname, int myage)
	{
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy(name, myname);
		age = myage;
	}

	Person(const Person& copy) : age(copy.age)
	{
		name = new char[strlen(copy.name) + 1];
		strcpy(name, copy.name);
	}

	void ShowPerconInfo() const
	{
		cout << "이름 : " << name << endl;
		cout << "나이 : " << age << endl;
	}
	~Person()
	{
		delete[]name;
		cout << "class destructor" << endl;
	}

};

int main()
{
	Person man1("Lee dong woo", 29);
	Person man2 = man1;
	Person man3 = man1;
	man1.ShowPerconInfo();
	man2.ShowPerconInfo();
	man3.ShowPerconInfo();

	return 0;
}
