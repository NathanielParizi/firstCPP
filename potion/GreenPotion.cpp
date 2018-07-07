/*
 * GreenPotion.cpp
 *
 *  Created on: Jul 7, 2018
 *      Author: Joel
 */

//**********************************************
// auto formating  CTRL+SHFT+F
//formatting standards requires this proper indentation
//for good keeping and organization.
//***********************************************
#include <iostream>

using namespace std;

int main() {

	// this will not create a carriage line return! because there is no endl
	// we won't go to a new line before outputting this
	cout << "this is a green potion" << endl;

	// carriage return.  we need to flush the buffer and the operating system is forced
	// to output all the text straight way.
	//the buffer is an area of memory where it is saving your text.
	// we say "flush the buffer" which is like cleaning out the buffer of memory
	// and outputing everything that's in it.
	cout << "took the green potion" << endl;




	return 0;
}

