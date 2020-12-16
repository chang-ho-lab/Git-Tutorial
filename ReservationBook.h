#pragma once
#include <string>
using namespace std;

class Facility;

class ReservationBook {
	string name;
	int nFacilitys;
	Facility *faci; 

	void reservation();
	void cancel();
	void view();
	void view(int s);
public:
	ReservationBook(string name, int nFacilitys, string facilityTime[]);
	~ReservationBook();
	void run();
};