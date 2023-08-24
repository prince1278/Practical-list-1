#include<iostream>
using namespace std;
void check(char);
int main()
{
		cout<<"student name->thumar prince"<<endl;
		cout<<"en. no->220130318005"<<endl;
	char c;
	cout<<"Enter any character :: ";
	cin>>c;
	check(c);
	return 0;
}
void check(char ch)
{
	cout<<"Your character is-> "<<ch<<endl;
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
	{
		cout<<"this is character vovel";
	}
	else
	{
		cout<<"this is  character consonant";
	}
}
