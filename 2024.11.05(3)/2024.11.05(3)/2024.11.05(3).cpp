#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Car
{
	string mEngineVolume;
public:
	Car(string s) : mEngineVolume(s) {};
	string GetEngineVolume() { return mEngineVolume; }

private:

};

class PassengerСar : public Car
{
public:
	PassengerСar(string s) : Car(s) {};

private:

};

class SportCar : public Car
{
public:
	SportCar(string s) : Car(s) {};

private:

};

void Print(Car& aObject) { cout << aObject.GetEngineVolume() << endl; };

int main()
{
	vector<Car> aVector;
	Car car = Car("A");
	PassengerСar passengerСar = PassengerСar("B");
	SportCar sportCar = SportCar("C");

	aVector.push_back(car);
	aVector.push_back(passengerСar);
	aVector.push_back(sportCar);

	for (int i = 0; i < aVector.size(); i++)
	{
		Print(aVector[i]);
	}
}