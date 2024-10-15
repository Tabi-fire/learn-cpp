#include <iostream>

using namespace std;


class A
{
    int value;
public:
	A();
	~A();
    void Print(double value) {
        cout << value << endl;
    }

    void Print(string value) {
        cout << value << endl;
    }
    void Print(char value) {
        cout << value << endl;
    }
    void Print(int value) {
        cout << value << endl;
    }
private:

};

A::A()
{
}

A::~A()
{
}


int main()
{
    A a = A();
    a.Print(10.3);
    a.Print(23);
    a.Print(55);
    a.Print(12);
}
