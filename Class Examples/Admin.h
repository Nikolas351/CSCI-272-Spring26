#include <iostream>
using namespace std;

class Admin {
private:
	string adminUsername;
	string adminPassword;
public:
	Admin(const string& adUname, const string& adPwd) {
		adminUsername = adUname;
		adminPassword = adPwd;
	}
	bool login(const string& inputUser, const string& inputPwd) const {
		return (inputUser == adminUsername) & (inputPwd == adminPassword);
	}
	void updateAdminPassword(string& newAdminPwd) {
		adminPassword = newAdminPwd;
	}


};