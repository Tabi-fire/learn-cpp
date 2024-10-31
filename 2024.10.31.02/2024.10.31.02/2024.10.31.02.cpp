#include <iostream>
#include <Windows.h>

using namespace std;

class Cla
{
	string str_2 = "Private variable";
protected:
	string str_3 = "Protected variable";
public:
	string str_1 = "Public variable";
	string Getstr_2() { return str_2; }
	Cla();
	~Cla();

private:


};

Cla::~Cla()
{
}

Cla::Cla()
{
}


class Cla_2 : public Cla
{
public:
	string GetStr_3() { return str_3; }
	Cla_2();
	~Cla_2();

private:

};

Cla_2::Cla_2()
{
}

Cla_2::~Cla_2()
{
}

void Print(int num) {
	cout << num << endl;
}
void Print(float flt) {
	cout << flt << endl;
}

int main()
{
	setlocale(LC_ALL, "");
	/*Cla cla = Cla();
	Cla_2 cla2 = Cla_2();
	cout << cla.str_1 << "\n";
	cout << "Переменная находится в классе, в модификаторе доступа public" << endl;
	cout << endl;
	cout << cla.Getstr_2() << "\n";
	cout << "Переменная находится в классе, в модификаторе доступа private. Чтобы дастать от-туда пермеменную нужно воспользоваться геттером" << endl;
	cout << endl;
	cout << cla2.GetStr_3() << "\n";
	cout << "Переменная находится в классе, в модификаторе доступа protected. Для получения данных из переменной, нажно создать еще один класс 'ребенок', который отсылается на своего родителя";
	cout << endl;*/
	Print(5);
	Print(5.1f);
	cout << "Две функции с одним и тем-же названием выводт разные значения. В первом случае принимает параметр int, во втором float";
}