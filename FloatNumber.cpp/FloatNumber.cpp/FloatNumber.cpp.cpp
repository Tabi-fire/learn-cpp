﻿#include <iostream>

using namespace std;

class FloatNumber {
	float mValue = 0.0;
public:
	void Numb(float Value) { mValue = Value; }
	float Numb() { return mValue; }
	void Print();
	FloatNumber() {};
	FloatNumber(float value) :mValue(value) {};
	~FloatNumber() {};
};

void FloatNumber::Print() {
	cout << mValue;
}

void Print(FloatNumber n) {
	n.Print();
}

int main()
{
	
	float Value = 2.5;
	
	Print(Value);
}