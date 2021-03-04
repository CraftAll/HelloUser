#include <iostream>
#include <Windows.h>
#include <fstream>
#include "json.hpp"
#include "loginng.hpp"
#include "menu/menu.hpp"
#include "main.hpp"
using namespace std;
using json = nlohmann::json;

json Users;
fstream JSONFile;
string login, password;
size_t NumOfArr;
int main()
{
	try
	{


		system("cls");
		JSONFile.open("usersList.json");
		JSONFile >> Users;
		JSONFile.close();
		if (loggin(&login, &password))
			return 0;
		if (checkLoginAndPassword(login, password, Users, &NumOfArr)) {
			showMenu(Users.at(NumOfArr));
			return 1;
		}
		else
			cerr << endl<<"Wrong login or password"<< endl;
		system("pause");
		main();
	}
	catch (const exception& e)
	{
		cerr << e.what();
	}
}
