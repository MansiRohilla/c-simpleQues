#include <iostream>
using namespace std;

int main()
{	unsigned char days_of_week ;
 cout<<"Enter the value (0-6) to know which day it is: ";
 cin>>days_of_week;
 if (days_of_week=='0')
 	cout<<"yhh it's Sunday.";
 
 else if (days_of_week=='1')
 	cout<<"Its Monday today.";

 else if (days_of_week=='2')
 	 cout<<"Its Tuesday today.";

 else if (days_of_week=='3')
 	cout<<"Its Wednesday today.";
 
 else if (days_of_week=='4')
  	cout<<"Its Thursday today.";
  
 else if (days_of_week=='5')
   	cout<<"Its Friday today,weekneed is near enjoy!!";

else if (days_of_week=='6')
 	cout<<"Its saturday today,Happy weekend!!";
 else 
 	cout<<"\aopps worng input";
 
 return 0;
	}
