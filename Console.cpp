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
	cout << "������ �̸� �Է�>> ";
	string name;
	cin >> name;
	return name;
}

int Console::getRoomNo() {
	while (true) {
		cout << "�ݸ��ü� �� ��ȣ�� ���� ù�� ���� 1���Դϴ�." << endl << " 10���� �����ֽ��ϴ�. ��ȣ�� �Է��ϼ���. >> ";
		string in;
		cin >> in;
		int n = getInt(in);
		if (n != 0)
			return n;
	}
}

void Console::print(string msg) {
	cout << msg;
} //�޼��� ��� �Լ�

int Console::getInt(string in) {
	return atoi(in.data()); 
} //�Է¹޴� �Լ�
