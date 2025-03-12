#include "Account.h"

void Account::set_name(std::string current_name)
{
	name = current_name;
}

std::string Account::get_name() {return name;}

bool Account :: withdraw(double bal)
	{
		balance -= bal;
		return true;
	}

bool Account :: deposit(double bal)
{
	balance += bal;
	return true;
}