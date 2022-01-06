#include <iostream>
#include <iomanip>
 using namespace std;
 
 int firstdigit(int num)
 {  return (num%10);}
 
 int seconddigit(int num)
 { 
 
     int result = (num/10)%10;
     return result;}

int addtwodigit(int number)
{ int result = firstdigit(number) + seconddigit(number);
return result;
}
int main()
{ cout<<"enter the inegral value: ";
 int number;
 cin>>number;
  int sum = addtwodigit(number);
  cout<<"\nthe sum of last two digit is: "<<sum;
  return 0;
}

