#include <iostream>
#include <string>
#include <cstring>
#include "Console.h"
#include "print.h"
using namespace std;
int Console::getMainMenu(int nMenus) {
	while (true) {
		print_menu();
		cout << ">>";
		string in;
		cin >> in;
		if (in.size() > 1)
			continue; 
		int menu = getInt(in); 
		if (menu >= 1 && menu <= nMenus) 
			return menu;
	}
	
}

int Console::getFacilityMenu(int nFacilitys) {

	while (true) {
		system("cls");
		print_menu2();
		cout << ">>";
		string in;
		cin >> in;
		if (in.size() > 1)
			continue; 
		int menu = getInt(in); 
		if (menu >= 1 && menu <= nFacilitys) 
			return menu;
	}

}

string Console::getName() {
	cout << "예약자 이름 입력>> ";
	string name;
	cin >> name;
	return name;
}

int Console::getRoomNo() {
	while (true) {
		cout << "격리시설 방 번호는 좌측 첫줄 부터 1번입니다." << endl << " 10개의 방이있습니다. 번호를 입력하세요. >> ";
		string in;
		cin >> in;
		int n = getInt(in);
		if (n != 0)
			return n;
	}
}

void Console::print(string msg) {
	cout << msg;
} //메세지 출력 함수

int Console::getInt(string in) {
	return atoi(in.data()); 
} //입력받는 함수
