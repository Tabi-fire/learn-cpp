#include <iostream>

using namespace std;

class X
{
	int num;
public:
	int GetNum() { return num; }
	X(int value = 5) { num = value; };
	~X();

private:

};

X::~X()
{
}

int main()
{
	X x = X(6); // Если нет числа, то выводит 5. Если есть значение в объекте, то пишет то,которое занесено здесь
	cout << x.GetNum();
}