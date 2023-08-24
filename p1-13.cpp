#include<iostream>
using namespace std;
int main ()
{
		cout<<"student name->thumar prince"<<endl;
		cout<<"en. no->220130318005"<<endl;
	int number, i = 1, sum = 0;
	
	cout << "enter the natural number->";
	cin >> number;
	
	while( i <= number)
	{
		sum = sum + i;
		i++;
	}
			
	cout << "this natural number is  1 to " << number << " -> " << sum;

 	return 0;

}
