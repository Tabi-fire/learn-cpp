#include <iostream>
#include <windows.h>

using namespace std;

class Animal
{
	string word;
public:
	Animal() {};
	Animal(string w) :word(w) {};
	void Say() { cout << word; }

private:

};

class Crow : public Animal
{
	string name;
public:
	void SetNameCrow(string row) { name = row; }
	string GetNameCrow() { return name; }
	Crow() : Animal("Carrr") {};

private:

};

class Dog : public Animal
{
	string name;
public:
	void SetNameDog(string dog) { name = dog; }
	string GetNameDog() { return name; }
	Dog() : Animal("Meauuu") {};

private:

};

class Cat : public Animal
{
	string name;
public:
	void SetNameCat(string cat) { name = cat; }
	string GetNameCat() { return name; }
	Cat() : Animal("Hav") {};

private:

};
void Say(Animal& n) {
	n.Say();
}

int main()
{
	setlocale(LC_ALL, "");
	string name;
	Animal animal = Animal();
	Crow crow = Crow();
	Crow* crowSay = new Crow();
	Dog dog = Dog();
	Dog* dogSay = new Dog();
	Cat cat = Cat();
	Cat* catSay = new Cat();

	cout << "Кличка Ворона: ";
	cin >> name;
	crow.SetNameCrow(name);

	cout << "Кличка собаки: ";
	cin >> name;
	dog.SetNameDog(name);

	cout << "Кличка кошки: ";

	cin >> name;
	cat.SetNameCat(name);
	cout << endl;

	cout << crow.GetNameCrow() << " сказал: ";
	Say(*crowSay);
	cout << endl;

	cout << dog.GetNameDog() << " сказала: ";
	Say(*dogSay);
	cout << endl;

	cout << cat.GetNameCat() << " сказала: ";
	Say(*catSay);
}
