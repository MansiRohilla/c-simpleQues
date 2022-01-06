#include <iostream>
using namespace std;

char scoretograde(int score);


int main ()
{	cout<<"Enter the score(0-100): ";
	int score;
	cin>>score;
	char grade = scoretograde(score);
	cout<<"The grade is :"<<grade<<endl;
	return 0;
	}
	char scoretograde(int score)
	{ char grade;
		if (score>=90)
	    	grade = 'A';
	    else if (score>=80)
     		grade = 'B';
     	else if (score>=60)
     		grade = 'C';
     	else if(score>=50
		 )
     		grade = 'D';
     	else 
     	grade = 'F';
     	return grade;
	}
