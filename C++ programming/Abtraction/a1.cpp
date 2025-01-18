#include<iostream>
using namespace std;
class parent//base class
{
	private:
		int n1=10;
		string s1="private";
	protected:
		int n2=20;
		string s2="protected";
	public:
		int n3=30;
		string s3="public";
};
class child : public parent//derive class
{
	public:
		void display()
		{
			cout<<"\nValue of n2 = "<<n2;
			cout<<"\nValue of s2 = "<<s2;			
		}
};
int main()
{
	parent p1;
	//private ---> within the class
//	cout<<"\nValue of n1 = "<<p1.n1;
//	cout<<"\nValue of s1 = "<<p1.s1;

	//protected ---> within the class or in derived class
//	cout<<"\nValue of n2 = "<<p1.n2;
//	cout<<"\nValue of s2 = "<<p1.s2;
	
	child c;
	c.display();
	
	cout<<"\nValue of n3 = "<<p1.n3;
	cout<<"\nValue of s3 = "<<p1.s3;
	
	return 0;
}
