#include<iostream>

using namespace std;

class rectangle{
private:
		
		int length, breadth;
		
		public:
			
			void Area(int l, int b )
			{
				
				length=l;
				breadth =b;
				
				
			}
			
			void show()
			{
				
				cout<<"Area of Rectangle is ="<< length*breadth <<endl;
			}
	
	
	
	
};

main()
{
	
	rectangle r1, r2;
	r1.Area(4,5);
	r2.Area(5,8);
	r1.show();
	r2.show();

	
	
}