#include<iostream>
using namespace std;
class person
{
	private:
		char name[50];
		public:
			void in()
			{
				cout<<"enter your name=";
			cin>>name;
			}
			void show()
			{
				cout<<"your name is="<<name<<endl;
			}
		};
		int main()
		{
			person *ptr[5];
			for(int i=0;i<5;i++)
			{
				ptr[i]=new person;
				ptr[i]->in();
			}
			for(int i=0;i<5;i++)
			ptr[i]->show();
		}
	
