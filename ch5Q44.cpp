#include <iostream>
using namespace std;
int main()
{
int num1;
cout<<"Enter the integral value: ";
cin>>num1;
if(num1 ==10)
cout<<(num1*num1);
else if (num1 == 9)
cin>>num1;
else if(num1 == 2||3)
cout<<(num1*99);
/*using if else*/
	switch (num1)
{
	case 10: cout<<(num1*num1);
				break;
	case 9: cin>>num1;
				break;
	case 2:
	case 3:
			cout<<(num1*99);
				break;
				}                      //using switch 
return 0;
				
}


