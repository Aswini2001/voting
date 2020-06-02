#include<iostream>
using namespace std;
int sub(int);
main()
{
	int age;
	cout<<"\t\t\t Check whether you are eligible to VOTE or NOT.....\n";
	cout<<"Enter your age: ";
	cin>>age;
	if (age>=18)
	{
		cout<<"\n\t\t You are eligible to vote!!!!!!!";
	}
	else
	cout<<"\n\t\t\t  You are not eligible to vote .....\n\t\t\t  You are eligible to vote only after "<<sub(age)<<" years..";
}
int sub(int a){
	return(18-a);
}
