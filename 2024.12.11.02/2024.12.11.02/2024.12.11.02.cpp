#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

class Fruit
{
protected:
	vector<Fruit>FIO;
	string mFName;
	string mLName;
	string mPatronymic;
public:
	void SetFName(string fName) { mFName = fName; }
	string GetFName() { return mFName; }
	void SetLName(string lName) { mLName = lName; }
	string GetLName() { return mLName; }
	void SetPatronymic(string patronymic) { mPatronymic = patronymic; }
	string GetPatronymic() { return mPatronymic; }
	Fruit(string fName = "", string lName = "", string patronymic = "") : mFName(fName), mLName(lName), mPatronymic(patronymic) {};
	~Fruit() {};

private:

};

class Orange : public Fruit
{

protected:

public:

private:

};

class Apple : public Fruit
{
public:
	Apple() {};
	~Apple() {};

private:

};

class Pear : public Fruit
{
public:
	Pear() {};
	~Pear() {};

private:

};

string GetRandFIO() {
	const int num = 3;
	string FNameRand[num] = {"q","w","e"};
	string LNameRand[num] = {"a", "s", "d"};
	string PatronymicRand[num] = { "z", "x", "c" };
	string result = FNameRand[rand() % 3] + " " + LNameRand[rand() % 3] + " " + PatronymicRand[rand() % 3];
	return result;
}

int main()
{
	srand(time(0));
	Orange o = Orange();

}