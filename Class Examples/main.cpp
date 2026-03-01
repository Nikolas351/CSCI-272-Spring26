/*
Name: Nikolas Aronov
Course: CSCI 272
Lesson Number: Lesson 4
Code Topic: Copy Constructor Example
Date: 03/1/2026
*/

#include <iostream>
#include <Admin.h>
using namespace std;


int main()
{
	Admin admin1("adminGuest","adminPassword");
	bool success = admin1.login("faketeststuff","fakepasswordtest");

	if (success) {
		cout << "Admin permissions granted!" << endl;
	}
	else {
		cout << "Login failed. Contacting ownership." << endl;
	}



	return 0;

}

/*
Reflection:
1. What I understood:
I understand how to make the different functions in public, private.
2. Difficulties:
One of my problems was figuring out how to call the admin and login in admin.h with const.
3. Research:
 I searched through the lesson on how to do the stuff and the examples.
4. AI Usage:
 I used chatgpt to trouble shoot a few errors and asked a small guide on how to proceed.
5. What I learned:
 I learned how to make encapsulations.
*/