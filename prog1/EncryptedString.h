/** @file irbyEncryptedString.h*/
#ifndef ENCRYPT_H_
#define ENCRYPT_H_

#include <string>

//Declaration for the class EncryptedString
class EncryptedString 
{	
	private: 
		//Data field as an encrypted string
		std::string encryptedStr;
	
	public: 
		//Default constructor
		EncryptedString() ;
		
		//Parameterized constructor
		EncryptedString(std::string str);
		
		//Mutator method that takes a given string and encrypts it by replacing each letter with the next alphabetical letter
		//So every 'c' becomes a 'd' and any 'z' or 'Z' become 'a' or 'A' respectively.
		void set(std::string str);
		
		//Accessor method to get the decrypted version of the string
		std::string get();
		
		//Accessor method to get the encrypted version of the string
		std::string getEncrypted();
};

//#include "EncryptedString.cpp"	// includes the implementation file with all the function definitions
#endif 
