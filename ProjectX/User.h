#pragma once
#include <string>
class User
{
private:
	std::string name;
public:
	User();
	User(std::string _name);
	void SetName(std::string _name);
	std::string GetName();
};

