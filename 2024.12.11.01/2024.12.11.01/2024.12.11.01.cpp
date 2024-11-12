#include <iostream>
#include <string>
#include <vector>

using namespace std;

class BankAccount
{
protected:
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

class DebitCard : public BankAccount
{
	int mCardNum;
	int mCardDuteDate;
	int mCardCVV;
public:
	void SetCardNum(int cardNum) { mCardNum = cardNum; }
	int GetCardNum() { return mCardNum; }
	void SetCardLastDate(int cardDuteDate) { mCardDuteDate = cardDuteDate; }
	int GetCardLastDate() { return mCardDuteDate; }
	void SetCardCVV(int cardCVV) { mCardCVV = cardCVV; }
	int GetCardCVV() { return mCardCVV; }
	DebitCard(int accountNum = 0, int cardNum = 0, int cardDuteDate = 0, int cardCVV = 0, string bankName = "", string accountName = "", int balance = 0) :
		mCardDuteDate(cardDuteDate), mCardCVV(cardCVV), mCardNum(cardNum) {};
	~DebitCard() {};

private:

};

class CreditCard : public DebitCard
{
	int mCardNum;
	int mCardDuteDate;
	int mCardCVV;
	int mCreditLimit;
public:
	void SetCardNum(int cardNum) { mCardNum = cardNum; }
	int GetCardNum() { return mCardNum; }
	void SetCardLastDate(int cardDuteDate) { mCardDuteDate = cardDuteDate; }
	int GetCardLastDate() { return mCardDuteDate; }
	void SetCardCVV(int cardCVV) { mCardCVV = cardCVV; }
	int GetCardCVV() { return mCardCVV; }
	void SetAccountName(string accountName) { mAccountName = accountName; }
	string GetAccountName() { return  mAccountName; }
	void SetCreditLimit(int creditLimit) { mCreditLimit = creditLimit; }
	int GetCreditLimit() { return mCreditLimit; }
	CreditCard(int accountNum = 0, int cardNum = 0, int cardDuteDate = 0, int cardCVV = 0, string bankName = "", string accountName = "", int balance = 0, int creditLimit = 0) :
		mCardDuteDate(cardDuteDate), mCardCVV(cardCVV), mCardNum(cardNum), mCreditLimit(creditLimit) {};
	~CreditCard() {};

private:

};

int main()
{

}