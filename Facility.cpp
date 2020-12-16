#include <iostream>
#include "Room.h"
#include "Facility.h"
using namespace std;

Facility::Facility() {
	room = new Room[10]; 
		time = ""; 

}

Facility::~Facility() {
	if (room)
		delete[] room;
}

void Facility::setTime(string time) { 
	this->time = time;
}

void Facility::view() {
	
	cout << time << ":\t";
	for (int i = 0; i < 10; i++)
		room[i].view();
	cout << endl;

}

bool Facility::reservation(int no, string name) {
	if (no >= 1 && no <= 10) { 
		return room[no - 1].reservation(name);
	}
	else

		return false;
}

bool Facility::cancel(int no, string name) {
	if (no >= 1 && no <= 10) { 
		return room[no - 1].cancel(name);
	}
	else
		return false;
}