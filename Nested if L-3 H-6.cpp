/*---------------------------------------------------------------------
"Nested if" is code for checking if given alphabet is vowel or consonant
using nested if---------------------------------------------------------
--Name : Asim Imran-----Reg no: 476434----------Date : 17-10-2023------*/
#include <iostream>
using namespace std;
int main(){
	char al;
	cout<<"Enter an alphabet :";
	cin>>al;
	if(al>='a' && al<='z'){
		if(al=='a' || al=='e' || al=='i' || al=='o' || al=='u'){
			cout<<"Given alphabet is an vowel"<<endl;
		}else{
			cout<<"Given alphabet is a consonant"<<endl;
		}
	}
	else{
		if(al=='A' || al=='E' || al=='I' || al=='O' || al=='U'){
			cout<<"Given alphabet is a Vowel"<<endl;
		}else{
			cout<<"Given alphabet is a Consonant"<<endl;
		}
		 
	}
	return 0;
}
