#pragma once

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
