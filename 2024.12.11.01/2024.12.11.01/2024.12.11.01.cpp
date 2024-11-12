#include <iostream>
#include <string>
#include <vector>

using namespace std;

class BankAccount
{
	int mAccountNum;
	string mCardName;
	string mBankName;
	string mAccountName;
	int mBalance;
public:
	void SetAccountNum(int accountNum) { mAccountNum = accountNum; }
	int GetAccountNum() { return mAccountNum; }
	void SetCardName(string cardName) { mBankName = cardName; }
	string GetCardName() { return mBankName; }
	void SetBankName(string bankName) { mBankName = bankName; }
	string GetBankName() { return mBankName; }
	void SetAccountName(string accountName) { mAccountName = accountName; }
	string GetAccountName() { return  mAccountName; }
	void SetBalance(int balance) { mBalance = balance; }
	int GetBalance() { return mBalance; }
	BankAccount(int accountNum = 0, string cardName = "", string bankName = "", string accountName = "", int balance = 0) : mAccountNum(accountNum), mCardName(cardName), mBankName(bankName), mAccountName(accountName), mBalance(balance) {};
	~BankAccount() {};

private:

};

class DebitCard
{
	int mAccountNum;
	string mBankName;
	string mAccountName;
	int mBalance;
public:
	DebitCard() {};
	~DebitCard() {};

private:

};


int main()
{

}