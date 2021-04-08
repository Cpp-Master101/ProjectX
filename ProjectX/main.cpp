#include <iostream>
#include "Dimon1ion.h"
using namespace std;

class Car
{
public:
	Car(string _name = "") : name(_name)
	{
		if (name == "")
		{
			name = "Unnamed";
			return;
		}
		name = _name;
	}
	void operator()(string _name) {
		name = _name;
	}
	void Print() {
		cout << name <<endl;
	}
private:
	string name;
};



void main() {
	cout << "New code by Dimon1ion!!!";
	Dimon1ion d1{ "Dimon", 19 };
	d1.Printinfo();
	Car car;
	Car car2("Audi");
	car.Print();
	car2.Print();
	car("Mini");
	car.Print();
	cout << "Deploying end..."<< endl;

}