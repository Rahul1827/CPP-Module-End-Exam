#include<iostream>
#include<fstream>
using namespace std;

main()

{
	
	//Add or createa file
	ofstream file ("Students.txt");
	file<<"hi Students";
	
	file.close();
	cout<<"\n create successfully";
	
	// Read  data from file
//	ifstream file1("Students.txt");
//	
//	while(getline(file1,line))
//	{
//		
//		cout<<line;
//	}
//	
//	file1.close();
//	cout<<"\n Read Successfully";




//	ofstream file1("Students.txt");
//	if(remove("Students.txt")(c_str()))
//	{
//		
//		cout<<"\n File deleted";
//	}
	
}