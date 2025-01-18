#include<iostream>
using namespace std;
class demo
{
	public:
		demo()
		{
			cout<<"\nObject is created";
		}
		~demo()
		{
			cout<<"\nObject is destroyed";
		}
};
int main()
{
	demo d1;
	cout<<"\nIf starts";
	if(1)
	{
		static demo d2;
	}
	cout<<"\nIf ends";
	return 0;
}
