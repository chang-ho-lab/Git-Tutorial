#include <iostream>
using namespace std;

#include "Room.h"

Room::Room() {
	name = "";
}


bool Room::reservation(string name) {
	if (isReservation())
		return false;
	else {
		this->name = name;
		return true;
	}
}


bool Room::isReservation() {
	if (name.size() == 0)
		return false;
	else
		return true;
}


bool Room::cancel(string name) {
	if (this->name == name) { 
		this->name = "";
		return true; 
	}
	else
		return false; 
}


void Room::view() {

	if (isReservation())
		cout << name << "\t";
	else
		cout << "[ ]" << "\t";

}



