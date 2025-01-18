#include<iostream>
using namespace std;
clas shape //Abstract class 
{
	public:
		virtual void draw() = 0 //pure virtual function
};
class circle : public shape
{
	public:
		void draw()
		{
			cout<<"\nWe are drawing a circle";
		}
};
class square : public shape
{
	public:
		void draw()
		{
			cout<<"\nWe are drawing a square";
		}
};
int main()
{
	shape *s;
	circle c;
	s= &c;
	s->draw();
	square sq;
	s= &sq;
	s->draw();
	return 0; 
}
