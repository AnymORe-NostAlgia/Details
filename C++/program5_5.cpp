#include <iostream.h>
class DB;
class DM
{
	double meter;
	double centimeter;
	double addmeter;
	double addcenti;
public:
	void getdata();
	friend void add(DM &,DB &);
	friend void display(DM &,DB &);
};
class DB
{
	double feet;
	double inch;
	double addfeet;
	double addinch;
public:
	void getdata();
	friend void add(DM &,DB &);
	friend void display(DM &,DB &);
};
void DM::getdata()
{
	cout<<"input the data of meter and centimeter\n";
	cin>>meter>>centimeter;
}
void DB::getdata()
{
	cout<<"input the data of feet and inch\n";
	cin>>feet>>inch;
}
void add(DM &a,DB &b)
{
	int m,n;
	double c,d;
	cout<<"what to add?\n";
	cout<<"1:meter\n2:centimeter\n3:feet\n4:inch\n";
	cin>>m>>n;
	switch(m)
	{
	case 1:
		c=a.meter*100;
		break;
	case 2:
		c=a.centimeter;
		break;
	case 3:
		c=b.feet/30.48;
		break;
	case 4:
		c=b.inch/2.54;
		break;
	}
    switch(n)
	{
	case 1:
		d=a.meter*100;
		break;
	case 2:
		d=a.centimeter;
		break;
	case 3:
		d=b.feet/30.48;
		break;
	case 4:
		d=b.inch/2.54;
		break;
	}
	a.addmeter=(c+d)/100;
	a.addcenti=c+d;
	b.addfeet=(c+d)*30.48;
	b.addinch=(c+d)*2.54;
}
void display(DM &a,DB &b)
{
	int n;
	cout<<"which type to display?\n";
	cout<<"1:meter\n2:centimeter\n3:feet\n4:inch";
	cin>>n;
	switch(n)
	{
	case 1:
		cout<<a.addmeter<<endl;
		break;
	case 2:
		cout<<a.addcenti<<endl;
		break;
	case 3:
		cout<<b.addfeet<<endl;
		break;
	case 4:
		cout<<b.addinch<<endl;
		break;
	}
}
int main()
{
	DM test1;
	DB test2;
	test1.getdata();
	test2.getdata();
	add(test1,test2);
	display(test1,test2);
	return 0;
}