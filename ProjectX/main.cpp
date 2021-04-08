#include <iostream>
#include "KananG.h"
using namespace std;

class Car
{
public:
	Car()
	{
		name = "BMW";
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
	car.Print();
	car("Mini");
	car.Print();
	cout << "Deploying end..."<< endl;
	KananG Kanan1;
	Kanan1.Print();
}