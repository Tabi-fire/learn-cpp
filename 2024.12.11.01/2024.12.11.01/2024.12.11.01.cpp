#include <iostream>

using namespace std;

class BankAccount
{
	int mAccountNum;
	string mBankName;
	string mAccountName;
	int mBalance;
public:
	void SetAccountNum(int accountNum) { mAccountNum = accountNum; }
	int GetAccountNum() { return mAccountNum; }
	void SetBankName(string bankName) { mBankName = bankName; }
	string GetBankName() { return mBankName; }
	void SetAccountName(string accountName) { mAccountName = accountName; }
	string GetAccountName() { return  mAccountName; }
	void SetBalance(int balance) { mBalance = balance; }
	int GetBalance() { return mBalance; }
	BankAccount(int accountNum = 0, string bankName = "", string accountName = "", int balance = 0) : mAccountNum(accountNum), mBankName(bankName), mAccountName(accountName), mBalance(balance) {};
	~BankAccount() {};

private:

};



int main()
{

}