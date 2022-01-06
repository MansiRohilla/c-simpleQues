#include <iostream>
#include <iomanip>
using namespace std;
int main()
{float inch;
float a;
float b;
float c;
float d;
cout<<"Enter the measurement in inches:\n";
cin>>inch;
a = inch/12;
b = inch/36;
c = inch*2.54;
d = inch/39.37;
cout<<fixed<<setprecision(3)<<"The measurements from inches to :\nfoots = "<<a<<"ft";
cout<<fixed<<setprecision(3)<<"\nyards = "<<b<<"yd"<<fixed<<setprecision(1)<<"\ncentimeters = "<<c<<"cm";
cout<<fixed<<setprecision(2)<<"\nmeters = "<<d<<"m";
return 0;

}
