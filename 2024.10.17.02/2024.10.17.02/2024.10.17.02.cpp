#include <iostream> // Добавление библиотеки iostream
#include <string>

using namespace std; // Добавление языкового имени std;

class Number // Создаем Класс
{
	int mNumber; // Объявляем переменную в привате и передаем значение 10
public: // в публике
	void SetNumb(int mValue) { mNumber = mValue; } // создаем Сеттер для mNumber
	int GetNumb() { return mNumber; } // создаем Геттер для mNumber
	void Print();// создаем функцию для вывода числа
	Number() : mNumber(0) {}; // Добавляем конструктор Number
	Number(int value) : mNumber(value) {}
	~Number(); // Добавляем диструктор ~Number

private: // Создаем приватную структуру

};

Number::Number() // Добавляем конструктор Number::Number для инициализации переменных и их появления
{
}

Number::~Number() // Добавляем диструктор Number::~Number для удаления переменных, чтобы освободить память
{
}
void Number::Print() { // Объявляем функцию Print для класса Number
	cout << mNumber; // Выводим в консоль
}
void Print(Number n) { // Объявляем Print как пустоту и закидываем туда новую переменную для класса Number n
	n.Print(); // Выводим
}

int main() // Создаем функию main
{
	Number nb = Number(); // Объявляем класс Number в функции main;
	Print(nb); // Выводим число с помощью функции Print
	int IntNum = 10;
	Print(IntNum);


}