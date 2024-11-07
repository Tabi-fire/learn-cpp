//Наследие происходит от модификатора доступа protected
//Пример:
#include <iostream>

using namespace std;

class A
{
public:
	A() {};
	~A() {};

private:

protected:
	int num = 5;
};

class B : public A
{
public:
	int GetStrint() {
		return num;
	}

	B() {};
	~B() {};

private:

};

int main()
{
	B b = B();
	cout << b.GetStrint();
}
