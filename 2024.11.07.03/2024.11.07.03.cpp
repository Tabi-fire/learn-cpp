#include <iostream>

using namespace std;


class Example
{
public:
	void Print(int num) {
		cout << num;
	}
	void Print(float num) {
		cout << num;
	}
	Example() {};
	~Example() {};

private:

};


int main()
{
	Example ex = Example();
	ex.Print(//1 или 1.1);
}