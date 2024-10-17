#include <iostream>
#include <ctime>

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
    Pizza(int amountOfCheese, int mWidthOfDow, int mAmountOfTomatoSouce, int mUsePinaples, int mBakeWithCrunch, int mAmountOfSlices);
    ~Pizza();

private:

};

Pizza::Pizza(int amountOfCheese, int widthOfDow, int amountOfTomatoSouce, int usePinaples, int bakeWithCrunch, int amountOfSlices) : mAmountOfCheese(amountOfCheese), mWidthOfDow(widthOfDow), mAmountOfTomatoSouce(amountOfTomatoSouce), mUsePinaples(usePinaples), mBakeWithCrunch(bakeWithCrunch), mAmountOfSlices(amountOfSlices) {

}


Pizza::~Pizza()
{
}

void Print() {
    cout << "Cheese: " << pz.GetAmountOfCheese() << endl;
    cout << "Width dow: " << pz.GetWidthOfDow() << endl;
    cout << "Tomato souse: " << pz.GetAmountOfTomatoSouce() << endl;
    cout << endl;
}

int main()
{
    srand(time(0));
    Pizza pz = Pizza(rand() % 11, rand() % 4, rand() % 6,0,0,0);
    for (int i = 0; i < 5; i++)
    {
        cout << "Cheese: " << pz.GetAmountOfCheese() << endl;
        cout << "Width dow: " << pz.GetWidthOfDow() << endl;
        cout << "Tomato souse: " << pz.GetAmountOfTomatoSouce() << endl;
        cout << endl;
    }


}