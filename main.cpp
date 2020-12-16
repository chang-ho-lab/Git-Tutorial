#include <string>
#include "ReservationBook.h"
#include <windows.h>


int main() {
	
	
	system("mode con:cols=100 lines=30");
	string facilityTime[] = { "격리시설[1]", "격리시설[2]", "격리시설[3]" };
	ReservationBook *p = new ReservationBook(" ", 3, facilityTime);
	p->run();

	delete p;
}