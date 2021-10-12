// Section 15
// Challenge 
#include <iostream>
#include <vector>
#include "Savings_Account.h"
#include "Account_Util.h"

using namespace std;

int main() {
    cout.precision(2);
    cout << fixed;
   
//    // Accounts
//    vector<Account> accounts;
//    accounts.push_back(Account {});
//    accounts.push_back(Account {"Larry"});
//    accounts.push_back(Account {"Moe", 2000} );
//    accounts.push_back(Account {"Curly", 5000} );
//    
//    display(accounts);
//    deposit(accounts, 1000);
//    withdraw(accounts,2000);
//    
//    // Savings 
//
//    vector<Savings_Account> sav_accounts;
//    sav_accounts.push_back(Savings_Account {} );
//    sav_accounts.push_back(Savings_Account {"Superman"} );
//    sav_accounts.push_back(Savings_Account {"Batman", 2000} );
//    sav_accounts.push_back(Savings_Account {"Wonderwoman", 5000, 5.0} );
//
//    display(sav_accounts);
//    deposit(sav_accounts, 1000);
//    withdraw(sav_accounts, 2000);
//    
//	vector<Checking_Account> che_accounts;
//    che_accounts.push_back(Checking_Account {} );
//    che_accounts.push_back(Checking_Account {"Superman"} );
//    che_accounts.push_back(Checking_Account {"Batman", 2000} );
//    che_accounts.push_back(Checking_Account {"Wonderwoman", 5000} );
//
//    display(che_accounts);
//    deposit(che_accounts, 1000);
//    withdraw(che_accounts, 2000);
//	
    // Savings 

    vector<Trust_Account> trust_accounts;
    trust_accounts.push_back(Trust_Account {} );
    trust_accounts.push_back(Trust_Account {"Superman"} );
    trust_accounts.push_back(Trust_Account {"Batman", 2000} );
    trust_accounts.push_back(Trust_Account {"Wonderwoman", 5000, 5.0} );

    display(trust_accounts);
    deposit(trust_accounts, 1000);
    withdraw(trust_accounts, 2000);
	withdraw(trust_accounts, 20);
	withdraw(trust_accounts, 20);
	withdraw(trust_accounts, 20);
	withdraw(trust_accounts, 20);
    return 0;
}

