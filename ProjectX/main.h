#pragma once
#include<string>
using namespace std;
class Nurana {
	string ID;
	int age;

public:
	Nurana(string _ID, int _age)
	{
		ID = _ID;
		age = _age;
	}
	void Print();
	int GetAge();
};
