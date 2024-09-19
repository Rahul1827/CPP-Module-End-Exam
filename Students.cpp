#include<iostream>
using namespace std;

class students {
	
	public:
	string name;
	int age;
	string address;
	

	
	public:
		
		//	students(string name="unknown", int age='0', string="not available")
		
		students()
	{
		name="unknown";
		age='0';
		address="not available";
		
		
	}
		
		void setInfo(string na, int ag)
		{
			name=na;
			age=ag;
			
			cout<<"\n Name is ="<< name << "\n Age is = "<< age;
		}
	
	void setInfo(string na, int ag, string add)
		{
			name=na;
			age=ag;
			address=add;
			
				cout<<"\n Name is ="<< name << "\n Age is = "<< age <<"\n Address"<<add;
			
		}
		
		void display()
		
		{
			cout<<"\n Name is ="<< name << "\n Age is = "<< age;
			
				cout<<"\n Name is ="<< name << "\n Age is = "<< age <<"\n Address"<<address;
		}
		
		
	
	
	
	
	
};

main()
{
	


students s1;
string name;
int age;
char add[100];

for(int i=0;i<3;i++)	
{
	
	cout<<"\n enter the name";
	cin>>name;
	
	cout<<"\n enter the age";
	cin>>age;
	
	cout<<"\n enter the address";
	cin>>add;
	
	
	
//	s1.setInfo(name, age,add);
s1.setInfo(name,age,add);

}
	

	
}