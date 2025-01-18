#include<iostream>
using namespace std;
//Simple inheritance
class parent
{
	public:
		void display()
		{
			cout<<"\nHello from parent class";
		}
};
class child : public parent//derived class
{
};
int main()
{
	parent p1;
	p1.display();
	child c1;
	c1.display();
	return 0;
}
