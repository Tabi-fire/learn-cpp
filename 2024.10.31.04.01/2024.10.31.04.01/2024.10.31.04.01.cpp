#include <iostream>

using namespace std;

class A
{
	int num;
public:
	int GetNum() { return num; }
	explicit A(int n) { num = n; }
	void Print();
	A();
	~A();

private:

};

A::A()
{
}

A::~A()
{
}

void A::Print() {
	cout << num;
}

void Print(A e) {
	e.Print();
}

int main()
{
	A a = A();
	int z = 4;
	Print(z);
}