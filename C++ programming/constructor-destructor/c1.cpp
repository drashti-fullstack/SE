#include<iostream>
using namespace std;
class student
{
	public:
		int id;
		string name;
		student()//default constructor
		{
			cout<<"\nObject created";
		}
		~student()
		{
			cout<<"\nObject destroyed";
		}
};
int main()
{
	student s1;
	int n1=10,n2=20;
	int ans=n1+n2;
	cout<<"\n"<<ans;
	student s2;
	return 0;
}
