// //Write a C++ program to implement a class called BankAccount that has private member variables for account number and balance. Include member functions to deposit and withdraw money from the account.
// #include<iostream>
// using namespace std;
// class BankAccount
// {
// 	private:
// 		double acno;
// 		double balance;
// 	public:
// 		void set(double a,double b)
// 		{
// 			acno = a;
// 			balance = b;
// 		}
// 		void deposite()
// 		{
// 			unsigned int amnt;
// 			cout<<"\nEnter the amount you want to deposite = ";
// 			cin>>amnt;
// 			if(amnt<balance)
// 			{
// 				balance = balance + amnt;
// 			}
// 			void withdraw()
// 			{
// 				unsigned int amnt;
// 				cout<<"\nEnter the amount you want to deposite = ";
// 				cin>>amnt;
// 				if(amnt<balance)
// 				{
// 					balance = balance - amnt;
// 				}
// 				else
// 				{
// 					cout<<"Entered amount is not available in account";
// 				}
// 			}
// 			void get()
// 			{
// 				cout<<"\nAccount no. = "<<acno;
// 				cout<<"\nbalance = "<<balance<<endl;
// 			}
// 		}		
// };
// int main()
// {
// 	BankAccount b1,b2;
// 	b1.set(123456,20000);
// 	b2.set(789456,32500);
			
// 	b1.deposite();return 0;			
// }