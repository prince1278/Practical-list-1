#include<iostream>
using namespace std;
int main ()
{
	cout<<"student name->thumar prince"<<endl;
		cout<<"en. no->220130318005"<<endl;
	float p,t,r,temp;
	
	cout<<"enter the princepal amount->";
	cin>>p;
	cout<<"enter the period time->";
	cin>>t;
	cout<<"enter the interst of rate->";
	cin>>r;
	temp=p*(1+r/100)*t-p;
	cout<<"this compound interest is ->"<<temp<<endl;
	return 0;
	
}
