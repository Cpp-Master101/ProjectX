#include <iostream>

#include "Person.h"

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
	Car car;
	Car car2("Audi");
	car.Print();
	car2.Print();
	car("Mini");
	car.Print();
	cout << "Deploying end..."<< endl;

	Person p;
	p.Print();
}