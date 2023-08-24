#include <iostream>  
using namespace std;  
int main()  
{  
	cout<<"student name->thumar prince"<<endl;
		cout<<"en. no->220130318005"<<endl;
  int n,i,m=0,ab=0;  
  cout<<"enter the number->";  
  cin >>n;  
  m=n/2;  
  for(i=2;i<=m;i++)  
  {  
      if(n%i==0)  
      {  
          cout<<"this number is Prime"<<endl;  
          ab=1;  
          break;  
      }  
  }  
  if (ab==0)  
      cout <<"this number is not Prime"<<endl;  
  return 0;  
}  
