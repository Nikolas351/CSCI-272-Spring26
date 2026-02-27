/*
Name: Nikolas Aronov
Course: CSCI 272
Lesson Number: Lesson 4
Code Topic: Copy Constructor Example
Date: 02/27/2026
*/

#include <iostream>
#include <Airplane>
#include <Passport>
using namespace std;




int main()
{
	Airplane flight1;

	flight1.openGate();
	flight1.gateVerification();

	Passport person1;

	person1.giveName();


}

/*
Reflection:
1. What I understood:
I understand how to transfer and print out the stuff from the classes I made.
2. Difficulties:
One of my problems was forgeting to put the include iostream and using namespace in the Airplane and Passport files.
3. Research:
 I searched through the slides and old file on how to properly format the class using public and private.
4. AI Usage:
 I didnt use chatgpt.
5. What I learned:
 I learned how setting up classes work.
*/