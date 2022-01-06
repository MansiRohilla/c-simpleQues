#include <iostream>
#include <iomanip>
using namespace std;
int main()
{const float tax = 8.50/100.0;
   int quantity ;
   cout<<"Enter the no.of item sold: ";
   cin>>quantity;
   cout<<"enter the unit price: ";
   float unitprice;
   cin>>unitprice;
   cout<<"enter the discount rate percent:";
   int discountrate; 
   cin>>discountrate;
   float subtotal = quantity*unitprice;
   float discount = subtotal * discountrate/100.0;
   float sub = subtotal - discount;
   float taxam = sub * tax;
   float total = sub + taxam;
   cout<<fixed<<setprecision(2)<<showpoint;
   cout<<"\nquantity sold:"<<"        "<<setw(6)<<quantity;
   cout<<"\nunit price of item:"<<"   "<<setw(6)<<unitprice<<endl;
   cout<<"                           "<<setw(6)<<"---------- "<<endl;
   cout<<"subtotal:"<<"               "<<setw(6)<<subtotal<<endl;
   cout<<"discount:"<<"              -"<<setw(6)<<discount<<endl;
   cout<<"discount total:"<<"         "<<setw(6)<<sub<<endl;
   cout<<"sales tax:"<<"             + "<<setw(6)<<taxam<<endl;
   cout<<"Total amount to be paid:"<<""<<setw(6)<<total<<endl;
   return 0;
   
   
   
   
   
   }
