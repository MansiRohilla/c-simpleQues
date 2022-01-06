#include <iostream>
using namespace std;
 
 int getnum()
 { int a;
   cout<<"Enter the number to be squared: ";
   cin>>a;
   return a;

 }
 int squ (int a)
 {
    return (a*a);
}
void print(int a)
{  cout<<"The value is: "<<a<<endl;
return;

}
int main()
{  int x = getnum();

   int y = squ(x);
    print(y);
    return 0;
}
