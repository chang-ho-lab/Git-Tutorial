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
			cout << "�߸��Է��Ͽ����ϴ�.\n" << endl;
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
		Console::print("�ݸ��ü� �� ��ȣ�� �߸��Ǿ��ų� ����� �¼��Դϴ�.\n");
	else
		Console::print("�ݸ��ü��� ����Ǿ����ϴ�.\n");
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
		Console::print("�ݸ��ü� ��ȣ�� �������� �̸��� Ʋ�� ��Ұ� �����Ͽ����ϴ�.\n");
	else
		Console::print("�ݸ��ü� ������ ��ҵǾ����ϴ�.\n");
}


void ReservationBook::view() {

	for (int i = 0; i < 3; i++) {
		faci[i].view();
	}
}


void ReservationBook::view(int s) {

	faci[s - 1].view();

}
