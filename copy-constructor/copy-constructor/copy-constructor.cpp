#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Example
{
	int *a;
public:
	void SetA(int value) { a = &value; }
	int* GetA() const { return a; }

	Example() : a(new int(0)) {};
	Example(const Example& e) { a = new int(*e.GetA()); }
	~Example() { delete a; };

	string GetString() { return "a = " + to_string(*a) + "\n"; }
	void GGetPointerOfA() { cout << "a: " << a << "\n"; }

private:

};
Example Check(Example e) {
	cout << e.GetString();
	return e;
} 

int main()
{
	/*int a = 0;
	cout << "&a " << &a << "\n";
	int *new_x = Check(a);
	cout << "&new_x " << new_x << "\n";*/
	Example e = Example();
	Example b{ e };
	Example d{ Example() };
	Example c = Check(e);
	e.GGetPointerOfA();
	b.GGetPointerOfA();
	d.GGetPointerOfA();


}