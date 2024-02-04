#include <iostream>
using namespace std;
class book 
{
	private:
	int bookID,pages;
	float price;
	public:
	void get()
	{
		cout<<"enter your book ID";
		cin>>bookID;
		cout<<"enter your pages ";
		cin>>pages;
		cout<<"enter your price";
		cin>>price;
		
		
		
		
		
		}	
	void show()
	{
		cout<<"book ID="<<bookID<<endl;
		cout<<"pages="<<pages<<endl;
		cout<<"price="<<price<<endl;
		
		
		
		
		
		
		
	}
	void set(int id,int pg,float pr)
	{
		bookID=id;
		pages=pg;
		price=pr;
		
		
		
		
		
		
	}
	int getPrice()
	{
		return price;
	}
	
};

int main()
{
	book b1,b2;
	b1.get();
	b2.set(2,350,150.70);
	cout<<"the most costly book is as follows:"<<endl;
	if(b1.getPrice() < b2.getPrice() )
	b1.show();
	else
	b2.show(); 
	 
}
