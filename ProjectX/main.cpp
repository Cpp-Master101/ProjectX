#include <iostream>
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