/*----------------------------------------------------------------
"Greatest Number L-3 H-5" is a code for determining greatest of three
inputted numbers from user------------------------------------------
------Name: Asim Imran------Reg no: 476434----------Date:17-10-2023*/
#include <iostream>
using namespace std;
int main(){
                          	//declaring variables for three numbers
	int a;
	int b;
	int c;
	                    //Taking three numbers as input from user
	cout<<"Enter First number :";
	cin>>a;
	cout<<"Enter Second number :";
	cin>>b;
	cout<<"Enter Third number :";
	cin>>c;
	//Using nested if and else to determine the largest nummber
	if(a>b){
		if(a>c){
		        cout<<"First number is Greatest i.e "<<a<<endl;
		}else{
		       cout<<"Third number is greatest i.e  "<<c<<endl;
		}
	}
	else{
		if(b>a && b>c){
			cout<<"Second number is  greatest i.e  "<<b<<endl;
		}else{
			cout<<"Third number is greatest i.e  "<<c<<endl;
		}
	}
	//printing the number 
	return 0;
}
