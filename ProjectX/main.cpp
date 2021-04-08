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

class Nail {
private:
	string nickname;
	int age;
	int grade;
public:
	Nail(string _nickname, int _age, int _grade) : nickname(_nickname), age(_age), grade(_grade) {}
	Nail() : Nail("NiiL2150", 15, 10) {};

	string GetName() const { return nickname; }
	void SetName(string _name) { nickname = _name; }

	int GetAge() const { return age; }
	void SetAge(int _age) { age = _age; }

	int GetGrade() const { return grade; }
	void SetGrade(int _grade) { grade = _grade; }

	void Print() {
		cout << "Nail\nNickname: " << nickname << endl << "Age: " << age << "\nGrade: " << grade << endl;
	}
};

void main() {
	Nail nail;
	nail.Print();
}