#include "Nail.h"

inline string Nail::GetName() const { return nickname; }
inline void Nail::SetName(string _name) { nickname = _name; }

inline int Nail::GetAge() const { return age; }
inline void Nail::SetAge(int _age) { age = _age; }

inline int Nail::GetGrade() const { return grade; }
inline void Nail::SetGrade(int _grade) { grade = _grade; }

inline void Nail::Print() {
	cout << "Nail\nNickname: " << nickname << endl << "Age: " << age << "\nGrade: " << grade << endl;
}