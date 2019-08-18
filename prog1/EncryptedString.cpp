/** @file EncryptedString.cpp*/
#include <cctype>
#include <string>
#include "EncryptedString.h"

using std::string;

//default constructor, sets encrypted string to empty string
EncryptedString::EncryptedString() { 		
	encryptedStr = "";
}

//Overloaded constructor that takes a string and calls another method to encrypt it
EncryptedString::EncryptedString(string inputString)	{	
	set(inputString);		//Encrypts the string
}

//Encrypts the string by changing each letter to the next letter in the alphabet
void EncryptedString::set(string toEncryptString)	{	
	
	//Encryption Algorithm
	for(int count = 0; count < toEncryptString.length(); count++)	{
		
		//Encrypts if the character is alphabetical
		if(isalpha(toEncryptString[count]))		{
			if(toEncryptString[count] == 'z')
				encryptedStr += 'a';
			else if(toEncryptString[count] == 'Z')
				encryptedStr += 'A';
			else 
				encryptedStr += (toEncryptString[count]+1);
		}
			
		else if(toEncryptString[count] == ' ')
			encryptedStr += ' ';
	}
}

string EncryptedString::get() {	
	//decrypted string data field
	string decryptedStr;
	
	//Decryption Algorithm
	for(int count = 0; count < encryptedStr.length(); count++)	{
		
		if(isalpha(encryptedStr[count]))	{
			if(encryptedStr[count] == 'a')
				decryptedStr += 'z';
			else if(encryptedStr[count] == 'A')
				decryptedStr += 'Z';
			else 
				decryptedStr += (encryptedStr[count]-1);
		
		}
		else if(encryptedStr[count] == ' ')
			decryptedStr += ' ';
	}
		
		return decryptedStr;
} 

//Returns the encrypted string. a constant method
string EncryptedString::getEncrypted() 	{ 	
	return encryptedStr;
}
		
