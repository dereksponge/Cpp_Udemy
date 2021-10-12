#ifndef TRUST_ACCOUNT_H
#define TRUST_ACCOUNT_H
#include "Savings_Account.h"

class Trust_Account: public Savings_Account {
	friend std::ostream &operator<<(std::ostream &os, const Trust_Account &account);
private:
	static constexpr const char *def_name = "Unnamed Savings Account";
    static constexpr double def_balance = 0.0;
	static constexpr double def_int_rate = 0.0;
    static constexpr int def_num_of_withdrawls = 0.0;
protected:
	int num_of_withdrawls;
public:
	Trust_Account(std::string name = def_name, double balance = def_balance, double int_rate = def_int_rate, int num_of_withdrawls = def_num_of_withdrawls);
	bool withdraw(double amount);

};

#endif // TRUST_ACCOUNT_H
