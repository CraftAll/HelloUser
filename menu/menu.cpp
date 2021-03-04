#include <Windows.h>
#include "../json.hpp"
#include <iostream>
#include "ShowUsersList.hpp"
#include "../main.hpp"
#include "ChangePassword.hpp"
#include "Apps.hpp"
using namespace std;
using json = nlohmann::json;
int choice;
void showMenu(json User){
	//problems with login = User.at("login");
	json j_login = User.at("login");
	string login;
		login = j_login;
	system("cls");
	cout << "Hello " << login <<'.'<< endl << endl;
	if (User.at("isAdmin")== 1)
	{
		cout
			<< "1. Apps" << endl
			<< "2. Change password" << endl
			<< "3. Users table" << endl
			<< "4. Logout" << endl
			<< "5. Exit" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
			ShowApps();
			showMenu(User);
			break;
		case 2:
			ChangePassword(User);
			showMenu(User);
			break;
		case 3:
			ShowUsersList();
			showMenu(User);
			break;
		case 4:
			main();
		case 5:
			exit(2);
			break;
		default:
			cout << "\nWrong option\n";
			system("pause");
			showMenu(User);
			break;
		}
	}
	else {
		cout
			<< "1. Apps" << endl
			<< "2. Change password" << endl
			<< "3. Logout" << endl
			<< "4. Exit" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
			ShowApps();
			showMenu(User);
			break;
		case 2:
			ChangePassword(User);
			showMenu(User);
			break;
		case 3:
			main();
		case 4:
			exit(2);
			break;
		default:
			cout << "\nWrong option\n";
			system("pause");
			showMenu(User);
			break;
		}
	}


}