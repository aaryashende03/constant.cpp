#include<iostream>
using namespace std;
class Demo
{
	public:
	        int i;
		    int j;
			
	Demo()
	{
		cout<<"Default"<<endl;
	}
	
    Demo( int x , int y)
	{
		cout<<"Parameterized"<<endl;
	}
	
};
int main()
{
cout<<"Inside main"<<endl;
Demo obj1;
//obj1 j++;

Demo obj2(11,12);
//obj2 j++;	

return 0;
}
	
	