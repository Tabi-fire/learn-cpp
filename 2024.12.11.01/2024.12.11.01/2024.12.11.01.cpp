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
	int mCardDuteDate;
	int mCardCVV;
	string mBankName;
	string mAccountName;
	int mBalance;
public:
	void SetAccountNum(int accountNum) { mAccountNum = accountNum; }
	int GetAccountNum() { return mAccountNum; }
	void SetCardNum(int cardNum) { mCardNum = cardNum; }
	int GetCardNum() { return mCardNum; }
	void SetCardLastDate(int cardDuteDate) { mCardDuteDate = cardDuteDate; }
	int GetCardLastDate() { return mCardDuteDate; }
	void SetCardCVV(int cardCVV) { mCardCVV = cardCVV; }
	int GetCardCVV() { return mCardCVV; }
	void SetAccountName(string accountName) { mAccountName = accountName; }
	string GetAccountName() { return  mAccountName; }
	void SetBalance(int balance) { mBalance = balance; }
	int GetBalance() { return mBalance; }
	DebitCard(int accountNum = 0, int cardNum = 0, int cardDuteDate = 0, int cardCVV = 0, string bankName = "", string accountName = "", int balance = 0) :
		mAccountNum(accountNum), mCardDuteDate(cardDuteDate), mCardCVV(cardCVV), mCardNum(cardNum), mBankName(bankName), mAccountName(accountName), mBalance(balance) {};
	~DebitCard() {};

private:

};

class CreditCard
{
	int mAccountNum;
	int mCardNum;
	int mCardDuteDate;
	int mCardCVV;
	string mBankName;
	string mAccountName;
	int mBalance;
	int mCreditLimit;
public:
	void SetAccountNum(int accountNum) { mAccountNum = accountNum; }
	int GetAccountNum() { return mAccountNum; }
	void SetCardNum(int cardNum) { mCardNum = cardNum; }
	int GetCardNum() { return mCardNum; }
	void SetCardLastDate(int cardDuteDate) { mCardDuteDate = cardDuteDate; }
	int GetCardLastDate() { return mCardDuteDate; }
	void SetCardCVV(int cardCVV) { mCardCVV = cardCVV; }
	int GetCardCVV() { return mCardCVV; }
	void SetAccountName(string accountName) { mAccountName = accountName; }
	string GetAccountName() { return  mAccountName; }
	void SetBalance(int balance) { mBalance = balance; }
	int GetBalance() { return mBalance; }
	void SetCreditLimit(int creditLimit) { mCreditLimit = creditLimit; }
	int GetCreditLimit() { return mCreditLimit; }
	CreditCard(int accountNum = 0, int cardNum = 0, int cardDuteDate = 0, int cardCVV = 0, string bankName = "", string accountName = "", int balance = 0, int creditLimit = 0) :
		mAccountNum(accountNum), mCardDuteDate(cardDuteDate), mCardCVV(cardCVV), mCardNum(cardNum), mBankName(bankName), mAccountName(accountName), mBalance(balance), mCreditLimit(creditLimit) {};
	~CreditCard() {};

private:

};

int main()
{

}