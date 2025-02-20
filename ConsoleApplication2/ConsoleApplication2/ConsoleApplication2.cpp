#include <iostream> //Добавляем библиотелку iostream
#include <map> //Добавляем библиотелку map
#include <queue> //Добавляем библиотелку queue
#include <set> //Добавляем библиотелку set

using namespace std; //Добавляем вирт. окружение

class Base //Создаем класс
{
	priority_queue<pair<int, int>> pq; //Создаем переменную priority_queue
	map<int, int> map1; //Создаем переменную map
	map<int, int> people; //Создаем переменную map
	set<int> s; //Создаем переменную set
	queue<int> q; //Создаем переменную queue
	deque<int> d; //Создаем переменную deque
	deque<int> h; //Создаем переменную deque
public:
	void add_bus(int route, int passengers, int maxp) { //Создаем функцию добавления автобусов
		if (passengers > maxp * 0.9) {
			pq.push({ passengers * 10, route });
		}
		else
		{
			pq.push({ passengers, route });
		}
		map1[route] += 1;
		if (map1[route] > 0) {
			s.insert(route);
		}
	}
	void dispath_bus() { //Создаем функцию добавления автобусов
		q.push(pq.top().second);
		if (pq.top().second < 7) {
			d.push_back(pq.top().second);
		}
	}
	void complete_trip() { //Создаем функцию отмены рейса
		map1[q.front()] += 1;
		h.push_back(q.front());
		q.pop();
	}
	void cancel_route(int route) { //Создаем функцию отмены рейса
		map1.erase(route);
		priority_queue<pair<int, int>> pq2;
		while (!pq.empty())
		{
			if (pq.top().second != route) {
				pq2.push(pq.top());
				pq.pop();
			}
			else
			{
				pq.pop();
			}
		}
		pq = pq2;
		s.erase(route);
		for (int i = 0; i < h.size(); i++)
		{
			if (h[i] == route) {
				h.erase(remove(h.begin(), h.end(), i), h.end());
			}
		}
	}
	void get_most_popular_routes(int route) { //Создаем функцию получения популярного маршрута
		int m = 0;
		int key = 0;
		for (auto c : map1) {
			if (c.second > m) {
				m = c.second;
				key = c.first;
			}
		}
		cout << "Popular route: " << key;
	}
	void get_route_statistics(int route) { //Создаем функцию статистики маршрута
		cout << "Route nums: " << map1[route] << endl;
		cout << "Middle nums of people: " << people[route] / map1[route];

	}
	void print() { //Создаем функцию вывода на экран
		cout << "pq:" << endl;
		while (!pq.empty()) {
			cout << pq.top().first << ' ' << pq.top().second << endl;
			pq.pop();
		}
		cout << "map1 count of routes:" << endl;
		for (auto c : map1) {
			cout << c.first << ' ' << c.second << endl;
		}
		cout << "people:" << endl;
		for (auto c : people)
		{
			cout << c.first << ' ' << c.second << endl;
		}
		cout << "s:" << endl;
		for (auto c : s)
		{
			cout << c << endl;
		}
		cout << "q:" << endl;
		while (!q.empty())
		{
			cout << q.front();
			q.pop();
		}
		cout << "d:" << endl;
		for (int i = 0; i < d.size(); i++)
		{
			cout << d[i] << endl;
		}
		cout << "h:" << endl;
		for (int i = 0; i < d.size(); i++)
		{
			cout << h[i] << endl;
		}


	}
private:

};
int main() // создаем осномную функция main
{
	Base b;
	b.add_bus(1, 5, 30);
	b.add_bus(2, 64, 100);
	b.add_bus(3, 46, 50);
	b.add_bus(4, 32, 45);
	b.add_bus(5, 7, 30);
	b.add_bus(6, 15, 30);
	b.dispath_bus();
	b.complete_trip();
	b.cancel_route(1);
	b.get_most_popular_routes(2);
	b.get_route_statistics(5);
	b.print();
}