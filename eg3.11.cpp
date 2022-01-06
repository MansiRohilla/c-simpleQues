#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int num1;
	int num2;
	int num3;
	int num4;
	cout<<"Enter the first number:";
	cin>>num1;
	cout<<"Enter the second number:";
	cin>>num2;
	cout<<"Enter the third number:";
	cin>>num3;
	cout<<"Enter the fourth number:";
	cin>>num4;
	int sum = num1+num2+num3+num4;
	float average = sum/4.0;
	cout<<fixed<<showpoint;
	cout<<setprecision(2);
	cout<<"\nThe average is :"<<average<<endl;
	cout<<"\nfirst no.:  "<<num1<<"---deviation :"<<setw(8)<<num1-average;
	cout<<"\nsecond no.: "<<num2<<"---deviation :"<<setw(8)<<num2-average;
	cout<<"\nthird no.:  "<<num3<<"---deviation :"<<setw(8)<<num3-average;
    cout<<"\nfourth no.: "<<num3<<"---deviation :"<<setw(8)<<num4-average;
    return 0;
}
	
	
	
	
	
	
	
	
		

