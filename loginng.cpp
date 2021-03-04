#include <iostream>
#include "json.hpp"
#include "loginng.hpp"

using namespace std;
using json = nlohmann::json;

bool checkLoginAndPassword(string login, string password, json Users, size_t *NumOfArr) {
	for (size_t i = 0; i < Users.size(); i++)
	{
		if (login == Users[i]["login"])
			if (password == Users[i]["password"])
			{
				*NumOfArr = i;
				return 1;
			}
	}
	return 0;
}
bool loggin(string *login, string *password) {
	cout << "Write your login or type exit:";
	cin >> *login;
	if (*login == "exit")
		return 1;
	cout << "Write your password:";
	cin >> *password;
	return 0;
}

