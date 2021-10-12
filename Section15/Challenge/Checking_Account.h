#ifndef CHECKING_ACCOUNT_H
#define CHECKING_ACCOUNT_H

#include "Account.h"

class Checking_Account: public Account {
	friend std::ostream &operator<<(std::ostream &os, const Checking_Account &account);
private:
    static constexpr const char *def_name = "Unnamed Savings Account";
    static constexpr double def_balance = 0.0;
	static constexpr double def_withdraw_fee = 1.5;
	
protected:
	double withdraw_fee;

public:
	Checking_Account(std::string name = def_name, double balance = def_balance, double withdraw_fee = def_withdraw_fee);
	bool withdraw(double amount);

};

#endif // CHECKING_ACCOUNT_H
