#include <iostream>
#include <string>
#include <vector>
#include <ctime>

using namespace std;

class Human
{

	string mFname;
	string mLname;
	string mPatronymic;
public:
	void SetFname(string fname) { mFname = fname; }
	string GetFname() { return mFname; }
	void SetLname(string lname) { mLname = lname; }
	string GetLname() { return mLname; }
	void SetPatronymic(string patronymic) { mPatronymic = patronymic; }
	string GetPatronymic() { return mPatronymic; }
	string GetString() {
		return "Name: " + mFname +
			" | Surname: " + mLname +
			" | Patronymic: " + mPatronymic + "\n";
	}
	Human(string fname = "", string lname = "", string patronymic = "");
	~Human();

private:

};

Human::Human(string fname, string lname, string patronymic) : mFname(fname), mLname(lname), mPatronymic(patronymic) {

}

Human::~Human()
{
}

class Room
{
	vector<Human> mHumans;
	string mNameRoom;
	int mNumberRoom;
public:
	void SetNameRoom(string room) { mNameRoom = room; }
	string GetNameRoom() { return mNameRoom; }
	void SetNumberRoom(int numberRoom) { mNumberRoom = numberRoom; }
	int GetNumberRoom() { return mNumberRoom; }
	void AddHuman(Human& human) { mHumans.push_back(human); }
	int GetHumans() { return mHumans.size(); }
	void PrintAllHumans() {
		for (int i = 0; i < mHumans.size(); i++)
		{
			cout << mHumans[i].GetString() << "\n";
		}
	}
	string GetString() {
		return "Name room: " + mNameRoom + " | Number room: " + to_string(mNumberRoom) + " | Number humans: " + "\n";
	}
	Room(string room = "", int numberRoom = 0);
	~Room();

private:

};

Room::Room(string room, int numberRoom) : mNameRoom(room), mNumberRoom(numberRoom) {

}

Room::~Room()
{
}

class Home
{
	vector<Room> mRoom;
	string mNAddress;
	int mNumAddress;
public:
	void SetNAddress(string address) { mNAddress = address; }
	string GetNAddress() { return mNAddress; }
	void SetNumAddress(int numAddress) { mNumAddress = numAddress; }
	int GetNumAddress() { return mNumAddress; }
	void AddAddress(Room& room) { mRoom.push_back(room); }
	int GetAddress() { return mRoom.size(); }
	void PrintAllRooms() {
		for (int i = 0; i < mRoom.size(); i++)
		{
			cout << mRoom[i].GetString() << "\n";
		}
	}
	string GetString() {
		return "Name home: " + mNAddress + " | Number home: " + to_string(mNumAddress) + "\n";
	}
	Home(string mNAddress = "", int numAddress = 0);
	~Home();

private:

};

Home::Home(string address, int numAddress) : mNAddress(address), mNumAddress(numAddress) {

}

Home::~Home()
{
}

class Rand_Human
{
	string NAMES[5] = { "Андрей", "Иван", "Василий", "Петр", "Степан" };
	string LASTNAMES[5] = { "Иванов", "Петров", "Сидоров", "Петров", "Сидоров" };
	string PATRONYMIC[5] = { "Иванович", "Иванович", "Степанович", "Петрович", "Павлоыич" };
public:

	string GetRandomFName() {
		return NAMES[rand() % 5];
	}
	string GetRandomLName() {
		return LASTNAMES[rand() % 5];
	}
	string GetRandomPatronymic() {
		return PATRONYMIC[rand() % 5];
	}

	Human& GetHuman() {
		Human human = Human();
		human.SetFname(GetRandomFName());
		human.SetLname(GetRandomLName());
		human.SetPatronymic(GetRandomPatronymic());
		return human;
	}

	Rand_Human();
	~Rand_Human();

private:

};

Rand_Human::Rand_Human()
{
}

Rand_Human::~Rand_Human()
{
}

class Rand_Room
{
	string R_NameRoom[5] = { "А","Б","В","Г","Д" };
public:

	int GetRandomNumberRoom() {
		return rand() % 100;
	}
	int GetRandomNumberHuman() {
		return rand() % 10;
	}
	string GetRandomNameRoom() {
		return R_NameRoom[rand() % 5];
	}

	void FillRoomWithRandomPeople(Room& room, int amount = 0) {
		int total = amount ? amount : 10;
		/*
		if amount: | if amount != 0
			total = amount
		else:
			total = 10
		*/


		Rand_Human r = Rand_Human();
		for (size_t i = 0; i < total; i++)
		{
			room.AddHuman(r.GetHuman());
		}
	}
	Room& GetRoom() {
		Room room = Room();
		room.SetNameRoom(GetRandomNameRoom());
		room.SetNumberRoom(GetRandomNumberRoom());
		FillRoomWithRandomPeople(room);
		// Сделать Кол-во людей в комнате
		return room;
	}
	Rand_Room();
	~Rand_Room();

private:

};

Rand_Room::Rand_Room()
{
}

Rand_Room::~Rand_Room()
{
}


class Rand_Home
{
public:
	string R_NameHome[5] = { "А","Б","В","Г","Д" };
	int GetRandomNumberHome() {
		return rand() % 100;
	}
	int GetRandomNumberRooms() {
		return rand() % 100;
	}
	string GetRandomNameHome() {
		return R_NameHome[rand() % 5];
	}
	void FillHomeWithRooms(Home& home, int amount = 0) {
		int total = amount ? amount : 10;
		Rand_Room r = Rand_Room();
		for (size_t i = 0; i < total; i++)
		{
			home.AddAddress(r.GetRoom());
		}
	}
	Home GetHome() {
		Home home = Home();
		home.SetNAddress(GetRandomNameHome());
		home.SetNumAddress(GetRandomNumberHome());
		FillHomeWithRooms(home);
		return home;
	}

	Rand_Home();
	~Rand_Home();

private:

};

Rand_Home::Rand_Home()
{
}

Rand_Home::~Rand_Home()
{
}

int main()
{
	srand(time(0));
	setlocale(LC_ALL, "");



	Rand_Human randHuman = Rand_Human();
	Human human = randHuman.GetHuman();
	Rand_Room randRoom = Rand_Room();
	Room room = randRoom.GetRoom();
	Rand_Home randHome = Rand_Home();
	Home home = randHome.GetHome();


	cout << human.GetString();
	cout << room.GetString();
	cout << home.GetString();


}