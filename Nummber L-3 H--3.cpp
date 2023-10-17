/*--------------------------------------------------------------------------
 Number is a code for determinging if an innput is positive negative or zero
--Name: Asim Imran ---Reg no: 476434----Date: 17-10-2023------------------*/
#include <iostream>
using namespace std;
int main(){
	int a;
	//Declaring variables
	cout<<"Enter a number :";
	cin>>a;
	//taking number sa input from user
	switch (a)
	{
		case -1:
			//for -1 print
			cout<<"Given number is negative";
			break;
			case 0:
				//for zero print 
				cout<<"Given number is zero"<<endl;
				break;
		case 1:
		cout<<"Given number is positive"<<endl;
		break;		
	}
	return 0;
}

