#include <iostream>

using namespace std;

class HomeAnimals
{

protected:
	string mName;
public:
	void SetHomeAnimals(string name) { mName = name; }
	string GetHomeAnimals() { return mName; }
	void Say(string name) {
		cout << name << endl;
	}
	HomeAnimals(string name = "") : mName(name) {};
	~HomeAnimals() {};


private:


};

class Dog : public HomeAnimals
{

public:
	Dog(string name) : HomeAnimals(name) {};
	~Dog() {};
	
private:

};

class Cat : public HomeAnimals
{
public:
	Cat(string name) : HomeAnimals(name) {};
	~Cat() {};
private:

};

class Parrot : public HomeAnimals
{
public:
	Parrot(string name) : HomeAnimals(name) {};
	~Parrot() {};
private:

};


int main()
{
	Dog dog = Dog("Dog");
	Cat cat = Cat("Cat");
	Parrot parrot = Parrot("Parrot");
	dog.Say("Dog");
	cat.Say("Cat");
	parrot.Say("Parrot");
}