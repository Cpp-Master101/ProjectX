#include <iostream>
#include "main.h"


#include "Person.h"

#include "Dimon1ion.h"
#include "KananG.h"
#include "Rashvin.h"
#include "Nail.cpp"
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
	Rashvin rashvin{ "Rashvin", 22, 188 };
	rashvin.print();
	cout << "New code by Dimon1ion!!!";
	Dimon1ion d1{ "Dimon", 19 };
	d1.Printinfo();
	Car car;
	KananG Kanan1;
	Kanan1.Print();
	car.Print();
	car("Mini");
	car.Print();
	cout << "Deploying end..."<< endl;
	KananG Kanan1;
	Kanan1.Print();
	cout << "End process....";
	Nurana n("A644", 25);
	n.Print();

	

	Person p;
	p.Print();
	Nail nail;
	nail.Print();
}