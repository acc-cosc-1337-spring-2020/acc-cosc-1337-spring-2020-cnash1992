#include "checking_account.h"
#include "savings_account.h"
#include <iostream>
#include <memory>
#include <vector>

using std::cout; using std::cin; using std::unique_ptr;
using std::make_unique;

int main()
{	
	//c++ 11
	unique_ptr<BankAccount> s = make_unique<SavingsAccount> (90);
	unique_ptr<BankAccount> c = make_unique<CheckingAccount> (100);
	
	std::vector<unique_ptr<BankAccount>> accounts;
	accounts.push_back(std::move(s));
	accounts.push_back(std::move(c));
	

	/*
	auto balance = account.get_balance();
	cout << "Balance is: " << balance << "\n"; */
	//cout << account << "\n";

	BankAccount account(500);
	cin >> account;
	cout << account;
	display_balance(account);
	
	auto amount{ 0 };
	cout << "Enter deposit amount: ";
	cin >> amount;

	for (auto &act : accounts) 
	{
		cout << act->get_balance() << "\n";
	}

	try
	{
		account.deposit(amount);
		cout << "Balance is: " << account.get_balance();
	}

	catch (Invalid e)
	{
		cout << e.get_error() << "\n";
	}

	return 0;
}