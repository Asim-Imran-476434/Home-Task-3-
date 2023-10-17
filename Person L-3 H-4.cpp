/*---------------------------------------------------------
'Person L-3 H-4' is a code for determing if a person is adult,
teenager aor child using nested if-else
--Name: Asim Imran----Reg no:476434------date:17-10-2023*/
#include <iostream>
using namespace std;
int main(){
	int a;
	//Declaring variable for age
	cout<<"Enter the age of the Person :";
	cin>>a;
	       // getting age as input from user
	if(a>=18){
		cout<<"The person is'Adult'"<<endl;
	}        //using 'if' for checking if age is 18 or greater thabn 18 
	else{
		if(a >= 13){ //using nested if for age of 13 and greater than 13
			cout<<"Person is a 'Teenager'"<<endl;
		}else{ // using 'else' statement in else for printing text for child 
			cout<<"Person is a 'Child' "<<endl;
		}
	}
	return 0;
}
