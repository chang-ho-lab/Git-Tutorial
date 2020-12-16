#pragma once
#include <string>
using namespace std;

class Room {
	string name;
public:
	Room();
	bool reservation(string name);
	bool isReservation();
	bool cancel(string name);
	void view();
};