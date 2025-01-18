#include<iostream>
using namespace std;
class demo
{
	private:
		int n=10;
		string s="private";
	public:
		friend void display(demo &obj);
};
void display(demo &obj)
{
	cout<<"\nValue of n = "<<obj.n;
	cout<<"\nValue of s = "<<obj.s;
};
int main()
{
	demo d1;
	display(d1);
	return 0;
}
