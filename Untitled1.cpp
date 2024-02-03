#include <iostream>
using namespace std;
class marks 
{
	private:
	int a,b, c;
	public:
	void in()
	{
		cout<<"enter your number ";
		cin>>a>>b>>c;
		
		
		
		}	
	int sum()
	{
		return a+b+c;
		
	}
	float avg()
	{
	return (a+b+c)/3.0;
	
	
	
	   
	}
};
int main()
{
	marks m;
	int a ;
	float s;
	m.in();
	a=m.sum();
	s=m.avg();
	cout<<"the sum is "<<a<<endl;
	cout<<"the avg is"<<s<<endl;
	 
	
	
	
	
	
	
	
	
	
}
	

