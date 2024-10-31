#include <iostream>
#include <Windows.h>

using namespace std;

void Print(int num) {
	cout << num << endl;
}
void Print(float flt) {
	cout << flt << endl;
}

int main()
{
	setlocale(LC_ALL, "");
	Print(5);
	Print(5.1f);
	cout << "Две функции с одним и тем-же названием выводт разные значения. В первом случае принимает параметр int, во втором float";
}