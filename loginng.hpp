#include <iostream>
#include "json.hpp"
bool checkLoginAndPassword(std::string login, std::string password, nlohmann::json Users, size_t *NumOfArr );
bool loggin(std::string *login, std::string *password);
