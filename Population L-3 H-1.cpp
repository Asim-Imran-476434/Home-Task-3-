/*--------------------------------------------------------------------
Population L-3 T-1 is a code to show populations in selected provinces
------Name: Asim Imran---Reg No:476434----Date:17-10-2023-----------*/
#include <iostream>
using namespace std;
int main(){
	int a;
	//Declaring variable'a'
	cout<<"1)Punjab"<<endl;
	cout<<"2)Sindh"<<endl;
	cout<<"3)KPK"<<endl;
	cout<<"4)Balochistan"<<endl;
	cout<<"Select the specific Province :";
	cin>>a;
	//Inputting varible from user
	switch (a)//using Switch command 
	{
		case 1: //using case 1 for Punjab
			cout<<"Total population of Punjab = 127,474,000"<<endl;
			break;
		case 2: //using case 2 for Sindh
		cout<<"Total population of Sindh = 54,858,515"<<endl;
		break;
		case 3: //using case 3 for KPK
			cout<<"Total population of KPK = 39,372,462"<<endl;
			break;
			case 4: //using case 4 for balochistan
				cout<<"Total population of Balochistan = 20,094,659"<<endl;
				break;
	}
	return 0;
}
