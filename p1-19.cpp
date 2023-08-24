#include<iostream>
using namespace std;
int main()
{
	cout<<"student name->thumar prince"<<endl;
		cout<<"en. no->220130318005"<<endl;
	char a;
	float no1,no2;
	
	cout<<"enter the two numbers->";
	cin>>no1>>no2;
	
	cout<<"enter the any operator->";
	cin>>a;
	
	switch(a)
	{
		
		case '+':
			cout<<"Addition is->"<<no1+no2;
			break;
		case '-':
			cout<<"Substraction is->"<<no1-no2;
			break;
		case '*':
			cout<<"Multiplication is->"<<no1*no2;
			break;
		case '/':
			cout<<"Division is->"<<no1/no2;
			break;
		default:
			cout<<"Invalid operator";
			break;
		
	}
	return 0;
}
