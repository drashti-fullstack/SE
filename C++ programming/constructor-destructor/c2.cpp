#include<iostream>
using namespace std;
class student
{
	private:
		int id;
		string name;
	public:
		student(int i,string n)
		{
			id=i;
			name=n;
		}
		student(int i,string n,double p)
		{
			cout<<"\nId = "<<i;
			cout<<"\nName = "<<n;
			cout<<"\nPercentage = "<<p;
		}
		void display()
		{
			cout<<"\nId = "<<id;
			cout<<"\nName = "<<name;
		}
};
int main()
{
	student s1(101,"drashti");
	s1.display();
	student s2(102,"vishva");
	s2.display();
	student s3(103,"kirtan",78.96);
	return 0;
}
