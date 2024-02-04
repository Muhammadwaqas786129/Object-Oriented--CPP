#include <iostream>
using namespace std;
class result
{
	private: 
	int rollno,marks[3];
	char name[50];
	public:
	void input()
	{
		cout<<"enter your rollno:";
		cin>>rollno;
		cout<<"enter your name:";
		cin>>name;
		for(int i=0;i<3;i++)
		{
			cout<<"enter your marks["<<i<<"]:";
			cin>>marks[i];
			
			
			
			
		}
		
	}
	void show()
	{
		cout<<"rollno="<<rollno<<endl;
		cout<<"name="<<name<<endl;
		for(int i=0;i<3;i++)
		cout<<"marks["<<i<<"]:"<<marks[i]<<endl;
		
	}
	int total()
	{
		int t=0;
		for(int i=0;i<3;i++)
		t=t+marks[i];
		return t;
		
	}
	float avg()
	{
		int t=0;
		for(int i=0;i<3;i++)
		t=t+marks[i];
		return t/3.0;
		
		
}

};
int main()
{
	result r;
	r.input();
	r.show();
	cout<<"the total marks is="<<r.total()<<endl;
	cout<<"the average of the marks is="<<r.avg() <<endl;

	
	
}
	 

