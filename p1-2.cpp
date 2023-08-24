#include<iostream>
using namespace std;
class temp
{
		
		private:
			float f,c;
		public:
			void getdata()
			{
				cout<<"enter ferenthiet ::";
				cin>>f;
			}
			void putdata()
			{
				c=(f-32)*5/9;
				cout<<"the celcius is ::"<<c;
			}
			
};
int main()
{
		cout<<"student name->thumar prince"<<endl;
		cout<<"en. no->220130318005"<<endl;
		temp t;
		t.getdata();
		t.putdata();
		
}
