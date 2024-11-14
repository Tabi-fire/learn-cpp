#include <iostream>

using namespace std;

class HomeAnimals
{

protected:
	string mName;
public:
	void SetHomeAnimals(string name) { mName = name; }
	string GetHomeAnimals() { return mName; }
	HomeAnimals(string name = "") : mName(name) {};
	~HomeAnimals() {};

private:


};

class Dog : public HomeAnimals
{

public:
	Dog(string name) : HomeAnimals(name) {};
	~Dog() {};
	void Say() {
		cout << mName << endl;
	}
private:

};

class Cat : public HomeAnimals
{
public:
	Cat(string name) : HomeAnimals(name) {};
	~Cat() {};
	void Say() {
		cout << mName << endl;
	}
private:

};

class Parrot : public HomeAnimals
{
public:
	Parrot(string name) : HomeAnimals(name) {};
	~Parrot() {};
	void Say() {
		cout << mName << endl;
	}
private:

};


int main()
{
	Dog dog = Dog("Dog");
	Cat cat = Cat("Cat");
	Parrot parrot = Parrot("Parrot");
	dog.Say();
	cat.Say();
	parrot.Say();
}