#include<iostream>
using namespace std;
int main()
{
	cout<<"student name->thumar prince"<<endl;
		cout<<"en. no->220130318005"<<endl;
	int no1,no2,no3;
	cout<<"enter the number is->";
	cin>>no1;
	cout<<"enter the number is->";
	cin>>no2;
	cout<<"enter the number is->";
	cin>>no3;
	if(no1>=no2&&no2>=no3)
	{
			cout<<"largest number is->"<<no1;
	}
	else if(no2>=no3&&no3>=no1)
	{
		cout<<"largest number is ->"<<no2;
	}
	else if(no3>=no1&&no1>=no2)
	{
		cout<<"largest number is ->"<<no3;
	}
	return 0;
}
