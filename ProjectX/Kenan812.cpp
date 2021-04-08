#include "Kenan812.h"

#pragma region Constructers


Kenan812::Kenan812()
{
	bankCardId = "";
	bankCardKey = "";
}


Kenan812::Kenan812(string _id, string _key)
{
	bankCardId = _id;
	bankCardKey = _key;

}


#pragma endregion



#pragma region Getters and Setters



void Kenan812::SetBankCardId(string _id)
{
	bankCardId = _id;
}


void Kenan812::SetBankCardKey(string _key)
{
	bankCardKey = _key;
}

string Kenan812::GetBankCardId()
{
	return bankCardId;
}

string Kenan812::GetBankCardKey()
{
	return bankCardKey;

}


#pragma endregion


void Kenan812::Print() const
{
	cout << "Id: " << bankCardId << "\n";
	cout << "Key: " << bankCardKey << endl;
}
