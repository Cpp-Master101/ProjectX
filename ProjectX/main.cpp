#include <iostream>
#include "Dimon1ion.h"
#include "KananG.h"
#include "Rashvin.h"
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
	cout << "Deploying microservices..." << endl;
	Rashvin rashvin{ "Rashvin", 22, 188 };
	rashvin.print();
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
	KananG Kanan1;
	Kanan1.Print();
}