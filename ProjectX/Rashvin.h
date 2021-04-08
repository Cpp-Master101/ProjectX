#pragma once
#include <iostream>

class Rashvin {
private:
	std::string name;
	unsigned age;
	unsigned height;
public:
	Rashvin(const std::string& name, unsigned age, unsigned height) : 
		name{ name }, age{ age }, height{ height } {}
	void print() const {
		std::cout << "\nName : " << name
			<< "\nAge : " << age
			<< "\nHeight : " << height;
	}
};