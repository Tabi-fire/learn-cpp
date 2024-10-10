#include <iostream>
#include <vector>
#include <string>
//Задание 2024.10.08.01

//Создать класс Лифт, который принимает на вход нижний и верхний этаж. Геттеры, //сеттеры и конструкторы.//
using namespace std;

class CLift {
public:
    int floor_min;
    int floor_max;
    int cur_floor;
    int next_floor;
    void Floor_min(int value) { floor_min = value; }
    void Floor_max(int value) { floor_max = value; }
    int Floor_min() { return floor_min; }
    int Floor_max() { return floor_max; }
    string GetString() {
        return "Floor_min: " + to_string(floor_min) + " and " + "Floor_max: " + to_string(floor_max) + "\n";
    }
    void print() { cout << GetString(); }
    void Up(int cur_floor, int next_floor) {
        while (cur_floor != next_floor)
        {

            cout << cur_floor << "\n";
            cur_floor++;

        }
        cout << cur_floor << "\n";
        cout << "\n";
        cout << "You in the " << cur_floor << "\n";
        cout << "\n";
    }
    void Down(int next_floor, int cur_floor) {
        while (next_floor <= cur_floor)
        {
            cout << cur_floor << "\n";
            cur_floor--;
        }
        cout << "\n";
        cout << "You in the " << next_floor << "\n";
        cout << "\n";
    }
    CLift(int lower, int upper) : floor_min(lower), floor_max(upper) {};
    ~CLift() {};

private:
};

int main() {
    CLift lift = CLift(1, 9);
    while (true)
    {
        cout << "What is your current floor:\n";
        cin >> lift.cur_floor;
        cout << "What is your next floor:\n";
        cin >> lift.next_floor;
        cout << "\n";
        if (lift.next_floor > lift.cur_floor) {
            lift.Up(lift.cur_floor, lift.next_floor);
        }
        else if(lift.cur_floor > lift.next_floor) {
            lift.Down(lift.next_floor, lift.cur_floor);
        }
        /*for (int i = 1; i < lift.next_floor+1; i++)
        {
            cout << i << "\n";
        }
        cout << "\n";
        cout << "You in the " << lift.next_floor << "\n";
        cout << "\n";*/
    }
    lift.print();

}