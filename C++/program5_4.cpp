#include <iostream.h>
class Vector
{
	double vect[80];
	int number;
	int i;
public:
	void create();
	void modify();
	void multiply();
	void display();
	friend void add(Vector &,Vector &);
};
void Vector::create()
{
	cout<<"input the number of dimetions of the vector\n";
	cin>>number;
	cout<<"input the vector\n";
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
	int n;
	cout<<"input the scalar to multiply\n";
	cin>>n;
	for(i=0;i<number;i++)
	{
		vect[i]=vect[i]*n;
	}
}
void Vector::display()
{
	cout<<"the vector is\n";
	cout<<"(";
	for(i=0;i<number-1;i++)
	{
		cout<<vect[i]<<",";
	}
	cout<<vect[number-1]<<")\n";
}
void add(Vector &a,Vector &b)
{
	int i;
	for(i=0;i<a.number;i++)
		a.vect[i]=a.vect[i]+b.vect[i];
}
int main()
{
	Vector test1;
	Vector test2;
	test1.create();
	test2.create();
	add(test1,test2);
	test1.display();
	return 0;
}