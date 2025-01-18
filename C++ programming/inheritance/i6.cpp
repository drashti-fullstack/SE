#include<iostream>
using namespace std;
class parent
{
	public:
		void display()
		{
			cout<<"\nHello fom parent class";
		}
};
class brother : public parent
{
	
};
class sister : public parent
{
	
};
int main()
{
	brother b;
	sister s;
	b.display();
	s.display();
	return 0;
}
