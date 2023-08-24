#include<iostream>
using namespace std;
int power(int a,int n)
{
	cout<<"student name->thumar prince"<<endl;
		cout<<"en. no->220130318005"<<endl;
	int value=1;
	for(int i=n;i>0;i--)
	{
		value=value*a;
	}
	return value;
}
int main()
{
	int no1,no2;
	cout<<"enter the number->";
	cin>>no1;
	
	cout<<"enter the power->";
	cin>>no2;
	
	cout<<power(no1,no2);
	return 0;
}
