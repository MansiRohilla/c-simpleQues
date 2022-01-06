#include <iostream>
using namespace std;
 int multiply(int num1 , int num2)
  { 
  	return num1*num2;
  }
  int main()
{  int num1;
  int num2;
  cout<<"enter the two integral numbers: ";
  cin>>num1>>num2;
  int product = multiply(num1,num2);
  cout<<num1<<" * "<<num2<<" is: "<<product;
  return 0;
  
  }
