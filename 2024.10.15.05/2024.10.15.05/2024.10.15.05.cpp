﻿#include <iostream>

using namespace std;

class Pizza
{
    int mAmountOfCheese;
    int mWidthOfDow;
    int mAmountOfTomatoSouce;
    bool mUsePinaples;
    bool mBakeWithCrunch;
    int mAmountOfSlices;
public:
    void SetAmountOfCheese(int amountOfCheese) { mAmountOfCheese = amountOfCheese; };
    int GetAmountOfCheese() { return mAmountOfCheese; };
    void SetWidthOfDow(int widthOfDow) { mWidthOfDow = widthOfDow; };
    int GetWidthOfDow() { return mWidthOfDow; };
    void SetAmountOfTomatoSouce(int amountOfTomatoSouce) { mAmountOfTomatoSouce = amountOfTomatoSouce; };
    int GetAmountOfTomatoSouce() { return mAmountOfTomatoSouce; };
    void SetUsePinaples(int usePinaples) { mUsePinaples = usePinaples; };
    int GetUsePinaples() { return mUsePinaples; };
    void SetBakeWithCrunch(int bakeWithCrunch) { mBakeWithCrunch = bakeWithCrunch; };
    int GetBakeWithCrunch() { return mBakeWithCrunch; };
    void SetAmountOfSlices(int amountOfSlices) { mAmountOfSlices = amountOfSlices; };
    int GetAmountOfSlices() { return mAmountOfSlices; };
    Pizza();
    ~Pizza();

private:

};

Pizza::Pizza()
{
    mAmountOfCheese;
    mWidthOfDow;
    mAmountOfTomatoSouce;
    mUsePinaples;
    mBakeWithCrunch;
    mAmountOfSlices;
}

Pizza::~Pizza()
{
}

int main()
{

}