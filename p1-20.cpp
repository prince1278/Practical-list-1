#include<iostream>
using namespace std;
void factorial(int);
int main()
{
	cout<<"student name->thumar prince"<<endl;
		cout<<"en. no->220130318005"<<endl;
	int n;
	cout<<"enter the number is->";
	cin>>n;
	
	factorial(n);
}
void factorial(int n)
{
	int a=1,no1;
	
	no1=n;
	
	if(n==0)
	{
		cout<<"\nFactorial of ["<<no1<<"!] is 1.\n";
	}
	else
	{
		while(n>0)
		{
			a=a*n;
			n--;
		}
	}
	cout<<"\nFactorial of ["<<no1<<"] is "<<a<<"\n";
}
