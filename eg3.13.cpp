#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	const float conversionfactor = 100.0/180.0;
	float f;
	cout<<"Enter the value in fahrenheit: ";
	cin>>f;
	float celsius = conversionfactor*(f-32);
	cout<<fixed<<setprecision(1)<<showpoint;
	cout<<"fahrenheit temp:"<<f<<endl;
	cout<<"celsius temp:"<<celsius<<endl;
	return 0;	
	
}
