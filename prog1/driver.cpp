
// Programmer:     William David Irby
// Project number: 1
// Project Desc:     EncryptedString class
// Course:          COSC 2436 Data Structures
// Date:         4/8/2019

#include <iostream>
#include <string>
//#include <cctype>
#include "EncryptedString.h"

using namespace std;

int main()
{
	string inputtedString;
	EncryptedString specificString;
	cout << "Type a string with only alphabetical and space characters to be encrypted" << endl;
	getline(cin, inputtedString);
	specificString.set(inputtedString);
	cout << endl << "The original string, with any illegal characters removed, is: " << endl << specificString.get() << endl;
	cout << "The encrypted string is: " << endl << specificString.getEncrypted();
	

}
