#include<iostream>
using namespace std;
class shape//abstract class
{
	public:
		virtual void draw()
		{
			cout<<"\nShape class";
		}
};
class circle : public shape
{
	public:
		int draw(int n)
		{
			cout<<"\nWe are drawing circle";
			cout<<"\nRadius of  circle ="<<n;
		}
};
class square : public shape 
{
	public:
		void draw()
		{
			cout<<"\nWe are drawing square";
		}
};
int main()
{
	shape s;
	s.draw();
	circle c;
	c.draw(5);
	return 0;
}
