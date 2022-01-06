//this is a program for 
//giving grades according to the range of grade
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{ float s;
	cout<<"Enter score :\n";
	cin>>s;
	if (s>=1)
		cout<<"\aerror!value not in grades\n";
	else if (s>=0.9)
		cout<<"Grade : A";
	else if( s>=0.8)
		cout<<"Grade : B";
	else if(s>=0.7)
		cout<<"Grade : C";
	else if(s>=0.6)
	 cout<<"Grade : D";
	else if(s<0.6)
	 cout<<"Grade : fail";
}
