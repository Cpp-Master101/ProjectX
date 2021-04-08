#include "Rasim.h"
#include <iostream>

using namespace std;
Rasim::Rasim() {
	age = 0;
	weight = 0;
	height = 0;
}
Rasim::Rasim(int _age, int _weight, int _height) {
	age = age;
	weight = weight;
	height = height;
}
void Rasim::Print() {
	cout << "Age:" << age << "\nWeight:" << weight << "\nHeight:" << height << endl;
}
