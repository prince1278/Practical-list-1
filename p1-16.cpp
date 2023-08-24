#include<iostream>
using namespace std;
int main ()
{
	cout<<"student name->thumar prince"<<endl;
		cout<<"en. no->220130318005"<<endl;
	int no,r,sum=0,temp;
	cout<<"enter the number->";
	cin>>no;
	temp=no;
	while(no>0)
	{
		r=no%10;
		sum=sum+(r*r*r);
		no=no/10;
	}
	if(temp==sum)
	{
			cout<<"this number is armstrong->";
	}
	else
	{
			cout<<"this number is not armstrong->";
	}
	return 0;
}
