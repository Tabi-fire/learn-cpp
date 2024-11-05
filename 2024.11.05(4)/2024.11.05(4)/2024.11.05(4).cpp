#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Animal
{
	string word;
public:


	Animal(string w) : word(w) {};
	string GetWord() { return word; }
	void Say() { cout << GetWord(); }

private:

};
class Crow : public Animal
{

public:
	Crow() : Animal("Karrr") {};
	~Crow();

private:

};

class Dog : public Animal
{
public:
	Dog() : Animal("Gav") {};
	~Dog();

private:

};

class Cat : public Animal
{
public:
	Cat() : Animal("Miaou") {};
	~Cat();

private:

};



int main()
{
	vector<Animal> aVector;
	Crow crow = Crow();
	Dog dog = Dog();
	Cat cat = Cat();
	aVector.push_back(crow);
	aVector.push_back(dog);
	aVector.push_back(cat);
	crow.Say();
}