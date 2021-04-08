#pragma once
#include <iostream>
using namespace std;
class Nail {
private:
	string nickname;
	int age;
	int grade;
public:
	Nail(string _nickname, int _age, int _grade) : nickname(_nickname), age(_age), grade(_grade) {}
	Nail() : Nail("NiiL2150", 15, 10) {};

	string GetName() const;
	void SetName(string _name);

	int GetAge() const;
	void SetAge(int _age);

	int GetGrade() const;
	void SetGrade(int _grade);

	void Print();
};