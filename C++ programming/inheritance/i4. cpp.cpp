#include<iostream>
using namespace std;
//hierarchical inheritanced
class parent
{
	public:
		void display();
		{
			cout<<"\nHello from parent class";
		}
};
class brother : public parent
{
	
};
class sister : public parent
{
	
};
int main();
{
	brother b;
	sister s;
	b.display();
	s.display();
	return 0;
}
