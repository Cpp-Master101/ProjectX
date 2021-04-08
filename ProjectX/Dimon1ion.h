#pragma once
#include <iostream>
#include <string>

using namespace std;

class Dimon1ion {
	string name;
	int age;
public:
	Dimon1ion(string _name, int _age)
	{
		name = _name;
		age = _age;
	}
	void Printinfo() {
		cout << "TESLA Model XXL"
			<< "\nName: " << name
			<< "\nAge: " << age << endl;
	}
};