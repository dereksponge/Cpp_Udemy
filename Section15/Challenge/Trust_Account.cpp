#include "Trust_Account.h"

Trust_Account::Trust_Account(std::string name, double balance, double int_rate, int num_of_withdrawls)
	: Savings_Account(name, balance, int_rate), num_of_withdrawls{num_of_withdrawls}{
			
}

bool Trust_Account::withdraw(double amount){
	if (num_of_withdrawls < 4){
		num_of_withdrawls++;
		return Account::withdraw(amount);
	}
	return false;
}

std::ostream &operator<<(std::ostream &os, const Trust_Account &account){
	os << "[Trust Account: " << account.name << ", " << account.balance << ", " << account.int_rate << ", " << account.num_of_withdrawls << "]";
	return os;
}