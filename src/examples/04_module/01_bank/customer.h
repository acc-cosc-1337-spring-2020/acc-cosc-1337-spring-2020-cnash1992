//customer.h
#include <vector>
#include <memory>
#include "bank_account.h"
#include <iostream>
#ifndef CUSTOMER_H
#define CUSTOMER_H

using std::vector;

class Customer 
{
public:
	void add_account(std::unique_ptr<BankAccount> & act);
	friend std::ostream& operator<<(std::ostream& out, const Customer& c);

private:
	std::vector<std::unique_ptr<BankAccount>> accounts;

};

#endif // CUSTOMER_H