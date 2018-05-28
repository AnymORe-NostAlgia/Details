#include <iostream.h>
class Vector
{
	double vect[80];
	int number;
public:
	void create();
	void modify();
	void multiply();
	void display();
};
void Vector::create()
{
	int i;
	cout<<"input the number of dimetions of the vector\n";
	cin>>number;
	for(i=0;i<number;i++)
	{
		cin>>vect[i];
	}
}
void Vector::modify()
{
	int n;
	cout<<"input the number that represent the number to modify\n";
	cin>>n;
	cout<<"input the new number\n";
	cin>>vect[n];
}
void Vector::multiply()
{
	int n,i;
	cout<<"input the scalar to multiply\n";
	cin>>n;
	for(i=0;i<number;i++)
	{
		vect[i]=vect[i]*n;
	}
}
void Vector::display()
{
	int i;
	cout<<"the vector is\n";
	cout<<"(";
	for(i=0;i<number-1;i++)
	{
		cout<<vect[i]<<",";
	}
	cout<<vect[number-1]<<")\n";
}
int main()
{
	Vector test;
	test.create();
	test.modify();
	test.multiply();
	test.display();
	return 0;
}