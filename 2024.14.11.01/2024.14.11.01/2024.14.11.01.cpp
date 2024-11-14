#include <iostream>

using namespace std;

class Animal {
	string word;
public:
	Animal(string w) : word(w) {};
	void Say() { cout << word << "\n"; }
};

class Dog : public Animal {
public:
	Dog() : Animal("Гав") {};
	void Bark() { cout << "Я гавкаю, потому что я Собака\n"; }
};


void Say(Animal* animal) { 
	// перечислите методы, доступные объекту animal
	// объект animal имеет только один метод 'Say()'
	animal->Say();

}

int main()
{

}