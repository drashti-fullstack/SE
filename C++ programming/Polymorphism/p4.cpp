#include<iostream>
using namespace std;
class parent
{
	public:
		void display()
		{
			cout<<"\nHello from parent class";
		}
};
class child
{
	public:
		void display()
		{
			cout<<"\nHello from child class";
		}
};
class grandchild
{
	public:
		void display()
		{
			cout<<"\nHello from grandchild class";
		}
};
int main()
{
	grandchild gc;
	gc.display();
	return 0;
}
