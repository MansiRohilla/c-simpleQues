#include <iostream>
#include <iomanip>
using namespace std;
int main()
{ double hrs;
	double r;

	cout<<"Enter hours";
	cin>>hrs;
	cout<<"Enter rate";
	cin>>r;
 float amount = (hrs*r);
 float extraamount =(40*r+ 1.5*r*(hrs-40));
if(hrs<=40)
 cout<<"amount to be paid:"<<amount;
else if (hrs>40)
 cout<<"amount to be paid :"<<extraamount;

}
