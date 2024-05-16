#include <iostream>
using namespace std;
class person 
{
	protected:
		int id;
		char name[50],address[100];
		public:
			person()
			{
				id=0;
				name[0]='\0';
				address[0]='\0';
				
			}
	void getinfo()
	{
		cout<<"enter your id ";
		cin>>id;
		cout<<"enter your name";
		cin>>name;
		cout<<"enter your address ";
		cin>>address;
		
	}
	void showinfo()
	{
		cout<<"your personal information are as follows "<<endl;
		cout<<"your id="<<id<<endl;
		cout<<"your name="<<name<<endl;
		cout<<"your address="<<address<<endl;	
	}
};
	class student:public person 
	{
		private:
			int rollno,marks;
			public:
				student()
				{
					rollno=marks=0;
				}
				void getedu()
				{
					cout<<"enter your rollno=";
					cin>>rollno;
					cout<<"enter your marks=";
					cin>>marks;
					
				}
				void showedu()
				{
					cout<<"your educational information are as follows"<<endl;
					cout<<"your rollno="<<rollno<<endl;
					cout<<"your marks="<<marks;
				}
	};
	int main()
	{
		student s;
		s.getinfo();
		s.getedu();
		s.showinfo();
		s.showedu();
	}
