#include "../json.hpp"
#include <fstream>
#include <iostream>
#include <Windows.h>
using json = nlohmann::json;
using namespace std;
void ChangePassword(json user) {

	try
	{
		fstream file("usersList.json");
		json users;
		string newPassword, newPasswordR, Password;
		system("cls");
		file >> users;
		file.close();
		ofstream outFile("usersList.json", fstream::trunc);
		cout << "Write your passowrd: ";
		cin >> Password;
		for (int i = 0; i < users.size(); i++)
		{
			if (users.at(i).at("login")==user.at("login"))
			{
				if (users.at(i).at("password") == Password) {
					cout << "Write your new password: ";
					cin >> newPassword;
					cout << "Write repeat new password: ";
					cin >> newPasswordR;
					if (newPassword == newPasswordR) {
						users.at(i).at("password") = newPassword;
						outFile.seekp(0);
						outFile << users.dump(1);
						outFile.flush();
						outFile.close();
						return;
					}
					else
						cout << "Paswords aren't same"<< endl;
				}
				else
					cout << "Wrong password"<< endl;
				system("pause");
				ChangePassword(user);
			}
		}
	}
	catch (const exception& e)
	{
		cerr << e.what();
		system("pause");
	}
}