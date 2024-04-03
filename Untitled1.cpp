#include<iostream>
#include<string>
using namespace std;
class Student{
	private:
		string stdID, stdName, dept;
	public:
		Student(){
			stdID= "0";
			stdName= "0";
			dept="0";
		}
	    explicit Student(int stdid, string name){
	    	stdID=stdid;
	    	stdName=name;
		}
		Student(string Stdid, string Name, string DepT){
	    	stdID=Stdid;
	    	stdName=Name;
			dept=DepT; 	
		}
		Student(string Name, string DepT){
	    	stdName=Name;
			dept=DepT; 	
		}
		
		void display(){
			cout<<"\nID: "<<stdID<<endl;
			cout<<"Name: "<<stdName<<endl;
		
		}
		void show(){
			cout<<"\nName: "<<stdName<<endl;
			cout<<"ID: "<<stdID<<endl;
			cout<<"Department: "<<dept<<endl;
		}
		void print(){
			
			cout<<"\nName: "<<stdName<<endl;
			cout<<"Department: "<<dept<<endl;
		}
};
int main(){
	Student obj1(12345, "Ali_Hassan"), obj2("23456", "Sheraz_Depp", "Computer_science"), obj3("Fahad_Abbas", "Computer_Science");
	obj1.display();
	obj2.show();
	obj3.print();
	return 0;
}
