#include <iostream>
using namespace std;
int main()
{
	int smallest(int a,int b, int c);
	
	cout<<"Enter the three integral numbers: "<<endl;
 cin>>a>>b>>c;

 cout<<"\nthe three numbers are: "<<a<<" "<<b<<" "<<c;
	if(a>b && c>b)
	cout<<"The smallest value is: "<<b;
	else if (b>a && c>a)
	cout<<"The smallest value is: "<<a;
	else 
	cout<<"The smallest value is: "<<c;
	
	
	return 0;
	
}
