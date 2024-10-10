#include <iostream>
#include <vector>
#include <string>
//Задание 2024.10.08.01

//Создать класс Лифт, который принимает на вход нижний и верхний этаж. Геттеры, //сеттеры и конструкторы.//
using namespace std;

class CLift {
private:
    int floor_min;
    int floor_max;
    int cur_floor;
    int next_floor;



public:
    void SetCurFloor(int value) { cur_floor = value; }
    void SetNextFloor(int value) { next_floor = value; }
    int GetCurFloor() { return cur_floor; }
    int GetNextFloor() { return next_floor; }
    int Floor_min() { return floor_min; }
    int Floor_max() { return floor_max; }
    string GetString() {
        return "Floor_min: " + to_string(floor_min) + " and " + "Floor_max: " + to_string(floor_max) + "\n";
    }
    void print() { cout << GetString(); }
    void Up(int SetFloor_min, int SetFloor_max) {
        while (SetFloor_min != SetFloor_max)
        {

            cout << SetFloor_min << "\n";
            SetFloor_min++;

        }
        cout << SetFloor_min << "\n";
        cout << "\n";
        cout << "You in the " << SetFloor_min << "\n";
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

};

int main() {
    int sum_Cur_Floor;
    int sum_Next_floor;
    string quit;
    CLift lift = CLift(1, 9);
    while (true)
    {
        cout << "What is your current floor:\n";
        cin >> sum_Cur_Floor;
        lift.SetCurFloor(sum_Cur_Floor);
        cout << "What is your next floor:\n";
        cin >> sum_Next_floor;
        lift.SetNextFloor(sum_Next_floor);
        cout << "\n";
        if (lift.GetNextFloor() > lift.GetCurFloor()) {
            lift.Up(lift.GetCurFloor(), lift.GetNextFloor());
        }
        else if(lift.GetCurFloor() > lift.GetNextFloor()) {
            lift.Down(lift.GetNextFloor(), lift.GetCurFloor());
        }
        else if (quit == "q") {
            break;
        }
        /*for (int i = 1; i < lift.next_floor+1; i++)
        {
            cout << i << "\n";
        }
        cout << "\n";
        cout << "You in the " << lift.next_floor << "\n";
        cout << "\n";*/
    }
    //lift.print();

}