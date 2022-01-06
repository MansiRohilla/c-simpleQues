#include <iostream>
#include <iomanip>
using namespace std;
int main()
{float F;
float C;
	cout<<"Enter the temperature reading in centigrade :";
	cin>>C;
	F = 32 +(C*180.0/100.0);
	cout<<"The value of temerature in Fahrenheit :"<<F;
	return 0;
}
