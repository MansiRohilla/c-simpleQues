#include <iostream>
using namespace std;
#include <iomanip>
int main()
{ double rad;
const int a = 57.296;
 cout<<"Enter the angle in radian: ";
 cin>>rad;
 double degree =rad*a;
  cout<<fixed<<setprecision(3);

 cout<<"the value of "<<rad<<" into radian is "<<degree;
  return 0;
  }
