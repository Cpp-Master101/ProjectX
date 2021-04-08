#pragma once
#include <string>
#include <iostream>
class KananG
{
private:
	std::string surname;
	int id;
	int age;
public:
	KananG()
	{
		id = 10;
		age = 18;
		surname = "Gurbanov";
	}
	std::string GetSurname() {
		return surname;
	}
	int GetId() {
		return id;
	}
	int GetAge() {
		return age;
	}
	void Print() {
		std::cout << "Kanan " << surname << std::endl;
		std::cout << "Id: " << id << std::endl;
		std::cout << "Age: " << age << std::endl;
	}
};

