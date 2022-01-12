#include <iostream>
using namespace std;


int cal(int &a){
	
	int pen;
	if ( a > 12){
		
		if (a % 12 != 0)
		{
			pen = a/12;
			
		}
		else 
		pen = (a / 12)-1 ;
		
	}
	else pen = 0;
	
	int total_fee;
    total_fee = 10 + (a * 10)	+ (pen * 50);
    return (total_fee);
}

int main(){
	
	int units;
	cout<<"enter the no. of unit: ";
	cin>>units;
	cout<<"total feees : ";
	cout<<cal(units);
	return 0;
}








