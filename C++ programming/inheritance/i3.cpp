#include<iostream>
using namespace std;
//Multiple inheritance
class father//base class
{
	public:
		void father_display()
		{
			cout<<"\nHello from father class";
		}
};
class mother
{
	public:
		void mother_display()
		{
			cout<<"\nHello from mother class";
		}
};
class child : public father,public mother//derived class
{
	
};
int main()
{
	child c;
	c.father_display();
	c.mother_display();
	return 0;
}


