#pragma once

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class Kenan812
{
private:
	string bankCardId;
	string bankCardKey;

public:

	Kenan812();
	Kenan812(string _id, string _key);

	void SetBankCardId(string _id);
	void SetBankCardKey(string _key);

	string GetBankCardId();
	string GetBankCardKey();

	void Print() const;

};

