#include <iostream>
#include <string>
#include "ReservationBook.h"
#include "Facility.h"
#include "Console.h"


using namespace std;

ReservationBook::ReservationBook(string name, int nFacilitys, string facilityTime[]) {
	this->name = name; 
	this->nFacilitys = nFacilitys;
	faci = new Facility[nFacilitys];


	for (int i = 0; i < nFacilitys; i++)
		faci[i].setTime(facilityTime[i]);
}


ReservationBook::~ReservationBook() {
	if (faci)
		delete[] faci;
}


void ReservationBook::run() {


	while (true) {
		int menu = Console::getMainMenu(4); 
		switch (menu) {
		case 1:
			reservation(); 
			break;
		case 2:
			cancel(); 
			break;
		case 3:
			
			view();

			break;
		case 4:
			
			system("cls");
			return;
		default:
			cout << "잘못입력하였습니다.\n" << endl;
		}
		cout << endl;
	}
}


void ReservationBook::reservation() {
	int s;
	string reservationName;
	int roomNo;

	s = Console::getFacilityMenu(nFacilitys);
	view(s);
	roomNo = Console::getRoomNo(); 
	reservationName = Console::getName(); 

								  
	bool ret = faci[s - 1].reservation(roomNo, reservationName);
	if (!ret)
		Console::print("격리시설 방 번호가 잘못되었거나 예약된 좌석입니다.\n");
	else
		Console::print("격리시설이 예약되었습니다.\n");
}


void ReservationBook::cancel() {
	int s;
	string reservationName;
	int roomNo;

	s = Console::getFacilityMenu(nFacilitys); 
	view(s);
	roomNo = Console::getRoomNo(); 
	reservationName = Console::getName(); 

								  
	bool ret = faci[s - 1].cancel(roomNo, reservationName);
	if (!ret)
		Console::print("격리시설 번호나 예약자의 이름이 틀려 취소가 실패하였습니다.\n");
	else
		Console::print("격리시설 예약이 취소되었습니다.\n");
}


void ReservationBook::view() {

	for (int i = 0; i < 3; i++) {
		faci[i].view();
	}
}


void ReservationBook::view(int s) {

	faci[s - 1].view();

}
