#include <iostream>
#include "main.h"

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
	Nurana n("A644", 25);
	n.Print();


}