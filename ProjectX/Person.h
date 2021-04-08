#pragma once
#include <iostream>
#include <string.h>
#include <string>

using namespace std;

class Person {
private:
	int age = 17;
	string name = "James";
	string model_of_phone = "iPhone 12";
public:
	Person() {}
	Person(int _age, string _name, string _model_of_phone) {
		age = _age;
		name = _name;
		model_of_phone = _model_of_phone;
	}
	void Print() {
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
		cout << "Phone: " << model_of_phone << endl;
	}
};