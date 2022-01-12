/*this programm will give the sum of odd/even natural number*/
#include <iostream>
using namespace std;

void even(){
	int sum = 0;
 int num;
 cout<<"this will give the sum of even natural number: "<<endl;
 cout<<"enter the number till where u have to find the sum: "<<endl;
 cin>>num;
 for (int i = 0; i<=num ; i++ ){
 	if(i % 2 == 0)
		 sum = sum + i;
		
 }
 
 cout<<"the sum of all even number upto "<<num<<" is: "<<sum<<endl;
 
	}

void odd(){
	int sum = 0;
	int num;
	cout<<"THis will give u the sum of odd natural number: "<<endl;
	cout<<"Enter the number till where you have to find the sum: "<<endl;
	cin>>num;
	for(int i = 0 ; i<=num ; i++){
		if(i % 2 != 0)
			sum = sum + i;
	}
	cout<<"the sum of all odd number upto "<<num<<" is: "<<sum<<endl;
}


int main(){
	char a;
	cout<<"Press 'e' for even number sum or 'o' for odd number sum: ";
	cin>>a;
	if (isupper(a))
		a = tolower(a);
		
	if(a == 'e')
		even();
	
	else if (a == 'o')
		odd();
	else 
		("\awrong input");
}



