//============================================================================
// Name        : Variables.cpp
// Author      : Nathaniel-Joel Parizi
// Version     :
// Copyright   : -
// Description : Variable Practice in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int numberCats = 5;
	int numberDogs = 7;
	int numberAnimals = numberCats + numberDogs;


	//flushing the buffer
	cout << "number of cats: " << numberCats << flush;
	cout << " and number of dogs: " << numberDogs << endl;
	cout << "number of both cats and dogs: " << numberAnimals << endl;
	cout << " " << endl;

	cout << "new dog adopted" << endl;

	numberDogs = numberDogs + 1;

	cout << "new dogs amount: " << numberDogs << endl;

	return 0;
}
