#include <iostream>
#include <iomanip>
using namespace std;
 
 void printwithcomma(long num)
 {
 	float thousand = num/1000;
 	float hundred = num%1000;
 	cout<<"\nthe number you entered is \t";
 	cout<<setw(3)<<thousand<<","<<setw(3)<<setfill('0')<<hundred;
 	return ;
 }
 
 int main()
 
 {
 	cout<<"enter the 6 digit number: ";

 	long number;
 	cin>>number;
 	printwithcomma(number);
 	return 0;
 	
 	
 	
 }
