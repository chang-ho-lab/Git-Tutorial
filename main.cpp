#include <string>
#include "ReservationBook.h"
#include <windows.h>


int main() {
	
	
	system("mode con:cols=100 lines=30");
	string facilityTime[] = { "�ݸ��ü�[1]", "�ݸ��ü�[2]", "�ݸ��ü�[3]" };
	ReservationBook *p = new ReservationBook(" ", 3, facilityTime);
	p->run();

	delete p;
}