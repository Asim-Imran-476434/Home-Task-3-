/*--------------------------------------------------------------------------------
--Vowel or Consonant is a code for checking if given letter is a vowel or consonant
--Name:Asim Imran-----Regno: 476434------Date: 17-10-2023--Section:A-------------*/
#include <iostream>
using namespace std;
int main(){
	char al;
	//Determining a chracter 'al'
	cout<<"Enter a alphabet:";
	cin>>al;
	//Inputting the 'al' from user
	switch(al) //using switch for 'al'
	{
		case 'a':
		case 'e':
		case 'i':     //using case for separating vowels 
		case 'o':
		case 'u':
			cout<<"Given alphabet is a vowel"<<endl;
			//printing output
			break;
			//using case command for separating consonants
		case 'b':
		case 'c':
		case 'd':
		case 'f':
		case 'g':
		case 'h':
		case 'j':
		case 'k':
		case 'l':
		case 'm':
		case 'n':
		case 'p':
		case 'q':
		case 'r':
		case 's':
		case 't':
		case 'v':
		case 'w':
		case 'x':
		case 'y':
		case 'z':
		cout<<"Given alphabet is a consonant"<<endl;
		//printing output
		break;
			
	}
	return 0;
}
