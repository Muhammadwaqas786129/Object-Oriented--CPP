#include <iostream >
using namespace std;
class array
{
	private :
	int a[5];
	public :
	void fill();
	void display();
	int max();
	int min();
};
void array::fill()
{
	for(int i =0;i<5;i++)
	{
		cout<<"enter your a["<<i<<"]:";
		cin>>a[i]; 
		
	}
}
void array::display()
{
	
for(int i=0;i<5;i++)

cout<<"a["<<i<<"]:"<<a[i]<<endl;
	
	
}
int array ::max()
{
	int m= a[0];
	for(int i=0;i<5;i++)
	if(m<a[i])
	m=a[i];
	return m;
	
	
}
		int array ::min()
		{
			int m=a[0];
			for(int i =0;i<5;i++)
			if(m>a[i])
			m=a[i];
			return m;
			
			
			
		}
	
	int main()
	
	{
		
	             array arr;
				 arr.fill();
				 cout<<"enter the following values is:"<<endl;
				 arr.display();
				 	
		cout<<"the maximum vlaues is:"<<arr.max()<<endl;
		
		
		cout<<"the minimum values is :"<<arr.min()<<endl;
		
		
		
	}
	
	
	
	
	
	
	
	

