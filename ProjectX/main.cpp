#include <iostream>
#include "Kenan812.h"
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



void main() 
{
	cout << "Deploying microservices..." << endl;
	Car car;
	car.Print();
	car("Mini");
	car.Print();
	cout << "Deploying end..."<< endl;



	cout << "\n";
	Kenan812 new_kenan812{ "1234 5435 1467 6345", "2847" };
	new_kenan812.Print();




}