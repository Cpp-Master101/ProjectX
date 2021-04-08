#include <iostream>
using namespace std;
#include "Nijat.h"

void Nijat::print()
{
	cout << "Age: " << age << endl;
	cout << "Name: " << name << endl;
}


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
	Nijat object;
	object.print();

	cout << "Deploying microservices..." << endl;
	Car car;
	Car car2("Audi");
	car.Print();
	car2.Print();
	car("Mini");
	car.Print();
	cout << "Deploying end..."<< endl;

}