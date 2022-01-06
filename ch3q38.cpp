#include <iostream>
#include <iomanip>
using namespace std;
int main()
{unsigned int a;
cout<<"Enter number : ";
cin>>a;
if(a<=32767)
cout<<setw(10)<<setfill(' ')<<a;
else cout<<"value should be between 0 to 32767";
return 0;

}
