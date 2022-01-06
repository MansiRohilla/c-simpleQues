#include <iostream>
#include <iomanip>
using namespace std;
 
 int main(){
 	char ch;
	 int countA,countE,countI;
 	
 	cin>>ch;
 	switch(ch)
 {
	case'E':
 	case'e':cout<<countE++;
 			 break;
 	case'A':
 	case'a':cout<<countA++;
 			 break;
 	case'I':
 	case'i':cout<<countI++;
 		 	 break;
 	default:
 		cout<<"Error--Not A,E or I\a\n";
 	}
 	
 	
 	
 	
 	
 }
