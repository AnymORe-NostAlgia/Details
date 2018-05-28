#include<iostream.h>
class Bank
{
	char name[50];
	char account[20];
	char type[10];
	double balance;
	int i;
public:
void getdata()
{
	cout<<"input the name of the depositer\n";
	cin>>name;
	cout<<"input the account of the depositer\n";
	cin>>account;
	cout<<"input the type of account\n";
	cin>>type;
	balance=0;
}
double deposit()
{
	double a;
	cout<<"input the amount of money to deposit\n";
	cin>>a;
	balance=balance+a;
	return balance;
}
double withdraw()
{
	double a;
	cout<<"the balance of the accout is "<<balance<<endl;
	cout<<"input the amount to withdraw\n";
	cin>>a;
	balance=balance-a;
	return balance;
}
void display()
{
	cout<<"name of the depositer "<<name<<endl;
	cout<<"balance of the account "<<balance<<endl;
}
};
int main()
{
	Bank test[10];
	test[0].getdata();
	test[0].deposit();
	test[0].withdraw();
	test[0].display();
	return 0;
}