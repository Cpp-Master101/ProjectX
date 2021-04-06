#include "User.h"

User::User(std::string _name) {
	name = _name;
}
void User::SetName(std::string _name) {
	name = _name;
}
std::string User::GetName() {
	return name;
}
User::User()
{
	name = "";
}