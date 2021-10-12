#include <iostream>
#include <memory>
#include "Account.h"
#include "Checking_Account.h"
#include "Savings_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"

using namespace std;

int main() {
    // test your code here
	try{
		std::unique_ptr<Account> james_acc = std::make_unique<Checking_Account> ("james", 100);
		std::unique_ptr<Account> erica_acc = std::make_unique<Checking_Account> ("erica", -100);
		james_acc->withdraw(200);
	}
	
	catch (const IllegalBalanceException &ex) {
		std::cerr << ex.what() << std::endl;
	}
	
	catch (const IllegalWithdrawException &ex) {
		std::cerr << ex.what() << std::endl;
	}
	
	
    std::cout << "Program completed successfully" << std::endl;
    return 0;
}

