#include <iostream>
#include <string>
#include <vector>

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
	BankAccount(int accountNum = 0, string cardName = "", string bankName = "", string accountName = "", int balance = 0) : mAccountNum(accountNum), mBankName(bankName), mAccountName(accountName), mBalance(balance) {};
	~BankAccount() {};

private:

};

class DebitCard
{
	int mAccountNum;
	int mCardNum;
	int mCardLastDate;
	int mCardCVV;
	string mBankName;
	string mAccountName;
	int mBalance;
public:
	void SetAccountNum(int accountNum) { mAccountNum = accountNum; }
	int GetAccountNum() { return mAccountNum; }
	void SetCardName(int cardNum) { mCardNum = cardNum; }
	int GetCardName() { return mCardNum; }
	void SetCardLastDate(int cardLastDate) { mCardLastDate = cardLastDate; }
	int GetCardLastDate() { return mCardLastDate; }
	void SetCardCVV(int cardCVV) { mCardCVV = cardCVV; }
	int GetCardCVV() { return mCardCVV; }
	void SetAccountName(string accountName) { mAccountName = accountName; }
	string GetAccountName() { return  mAccountName; }
	void SetBalance(int balance) { mBalance = balance; }
	int GetBalance() { return mBalance; }
	DebitCard(int accountNum = 0, int cardName = 0, int cardLastDate = 0, int cardCVV = 0, string bankName = "", string accountName = "", int balance = 0) : mAccountNum(accountNum), mCardName(cardName), mBankName(bankName), mAccountName(accountName), mBalance(balance) {};
	~DebitCard() {};

private:

};


int main()
{

}