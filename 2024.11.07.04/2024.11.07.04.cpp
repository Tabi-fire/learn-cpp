#include <iostream>

using namespace std;
//Это защита данных, которая ограничивает доступ к составляющим компонентам(Переменные, функции, и тд)
//Настройи достум можно с помощью 3 модификаторов доступа: publi, private, protected
//Пример

class A
{
public:
	int PNum = 1;
	A() {};
	~A() {};

private:
	int PRINum = 0;
protected:
	int PRONum = 2;
};

class B : public A
{

public:
	int proNum() {
		return PRONum;
	}

	B() {};
	~B() {};

private:

protected:
};


int main()
{
	A a = A();
	B b = B();
	cout << a.PNum;
	cout << a.PRINum;//переменная находится в private
	cout << b.proNum();//та же переменная но в другом классе, передалась от додителя к ребенку

}