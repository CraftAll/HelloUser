#include "ShowUsersList.hpp"
#include "../json.hpp"
#include <iostream>
#include <fstream>
#include <iomanip>
#include <Windows.h>

using namespace std;
using json= nlohmann::json;

void ShowUsersList() {
	system("cls");
	fstream file;
	file.open("UsersList.json");
	json Users;
	file >> Users;
	file.close();
	cout << setw(1) << Users << endl;
	system("pause");
	system("cls");
};