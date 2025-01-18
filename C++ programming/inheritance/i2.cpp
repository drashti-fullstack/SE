#include<iostream>
using namespace std;
//Multilevel inheritance
class parent//basse class
{
	public:
		void parent_display()
		{
			cout<<"\nHello from parent class";
		}
};
class child : public parent//derived class
{
	public:
		void child_display()
		{
			cout<<"\nHello from child class";
	}
};
class grandchild : public child
{
	public:
		void gc_display()
		{
			cout<<"\nHello from grandchild class";
		}
};
class greatgrandchild : public grandchild
{
	
};
int main()
{
	parent p1;
	p1.parent_display();
	child c1;
	c1.parent_display();
	c1.child_display();
	grandchild gc;
	gc.parent_display();
	gc.child_display();
	gc.gc_display();
	greatgrandchild ggc;
	ggc.parent_display();
	ggc.child_display();
	ggc.gc_display();
	return 0;
}

