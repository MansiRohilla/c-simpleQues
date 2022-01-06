#include <iostream>

using namespace std;

int main()
{	float circum;
	float area;
	float r;
	const float pi =3.1416;
	cout<<"Enterthe value of the radius\n";
	cin>>r;
	area= pi*r*r;
	circum = 2*pi*r;
	cout<<"the area of circle is: "<<" "<<area<<'\n';
	cout<<"the circumference of circle is:"<<" "<<circum<<'\n';
	return 0;
	
}
