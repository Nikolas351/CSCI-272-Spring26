/*
Name: Nikolas Aronov
Course: CSCI 272
Lesson Number: Lesson 4
Code Topic: Copy Constructor Example
Date: 02/27/2026
*/

#include <iostream>
#include <Airplane>
using namespace std;


int main()
{
	Airplane flight1; // defaulth Constructor

	Airplane flight2("Cessna","Maximum", 1943); // parameterized constructor

	Airplane flight3(flight2); // copy constructor

	flight1.openGate();
	flight2.openGate();
	flight3.openGate();



	return 0;

}

/*
Reflection:
1. What I understood:
I understand how to make a deconstructor
2. Difficulties:
One of my problems was doing figuring out if i needed all the code in airplane file for deconstructor.
3. Research:
 I searched through the lesson on how to do the stuff and the examples.
4. AI Usage:
 I used chatgpt to trouble shoot 1 error.
5. What I learned:
 I learned how to set deconstructors.
*/