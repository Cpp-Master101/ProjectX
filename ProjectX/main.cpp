#include <iostream>
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


class MyClass
{
public:
	MyClass();
	~MyClass();

private:

};

MyClass::MyClass()
{
}

MyClass::~MyClass()
{
}


void main() {
	cout << "Something" << endl;
	cout << "Hello, world!" << endl;
	cout << "New Hello, world!" << endl;
	cout << "Some change" << endl;
	cout << "Dmitriy changes" << endl;
	Car car;
	car.Print();
	car("Mini");
	car.Print();
}