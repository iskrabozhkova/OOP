#pragma once
#include <cstring>

class Login {
private:
	std::string username;
	std::string password;
public:
	Login();
	bool login(const std::string& username, const std::string& password);
};
