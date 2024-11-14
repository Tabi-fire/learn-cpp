#include <iostream>

using namespace std;

class String
{
	string mName;
public:
	void SetName(string name) { mName = name; }
	string GetName() { return mName; }
	String() {};
	String(string name) : mName(name) {};
	~String() {};
	int Ex(int a, int b) {
		a = 1;
		b = 2;
		if (a == b) {
			return a + b;
		}
	}

private:

};

class String_2 : public String
{
	string mBooln;
public:
	void SetBooln(string booln) { mBooln = booln; }
	string GetBooln() { return mBooln; }
	String_2() {};
	String_2(string booln = "") : mBooln(booln) {};
	~String_2() {};
	int Ex(int a, int b) {
		a = 1;
		b = 2;
		if (a == b) {
			return a - b;
		}
	}
private:

};

int main()
{

}