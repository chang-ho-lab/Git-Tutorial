#pragma once
#include <string>
using namespace std;

class Room;

class Facility {
	string time;
	Room* room;
public:
	Facility();
	~Facility();
	bool reservation(int no, string name);
	bool cancel(int no, string name);
	void view();
	void setTime(string time);
};
