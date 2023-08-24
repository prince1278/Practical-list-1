#include<iostream>
using namespace std;
int rev(int n);
int main()
{
	cout<<"student name->thumar prince"<<endl;
		cout<<"en. no->220130318005"<<endl;
	int n;
	cout<<"enter the number->";
	cin>>n;
	
	rev(n);
}
int rev(int n)
{
	int n1,d,rn=0;
	n1=n;
	
	while(n>0)
	{
		d=n%10;
		rn=(rn*10)+d;
		n/=10;
	}
	if(n1==rn)
	{
		cout<<"this number is palindrome ";
	}
	else
	{
		cout<<"this number is not palindrome";	
	}
	return 0;
}
