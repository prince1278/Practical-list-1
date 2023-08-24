#include<iostream>
using namespace std;
int main ()
{
	cout<<"student name->thumar prince"<<endl;
		cout<<"en. no->220130318005"<<endl;
	int no1=0,no2=1,no3,i,no;
	cout<<"enter the number->";
	cin>>no;
	cout<<no1<<""<<no2<<"";
	for(i=2;i<no;i++)
	{
		no3=no1+no2;
		cout<<no3<<"";
		no1=no2;
		no2=no3;
	}
	return 0;
}
