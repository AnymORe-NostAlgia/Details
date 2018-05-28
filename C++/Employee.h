#include<string>
using namespace std;
class Staff{
public:
	Staff(string _name, string _id, string _gender, string _hiredate, double _basicpay);
	virtual double get_pay()const{return 0;}
	friend ostream & operator <<(ostream &os, const Staff &work);
private:
	string hiredate;
	string id;
	string name;
	string gender;
protected:
    double basicpay;
};
class Technicist:public Staff{
public:
   Technicist(string _name, string _id, string _gender, string _hiredate, double _basicpay);
   double get_pay()const;
   friend ostream & operator <<(ostream &os, const Staff &work);
};
class Salesperson:public Staff{
public:
	double get_pay()const;
	Salesperson(string _name, string _id, string _gender,string _hiredate,  double _basicpay, double _sales);
	friend ostream & operator <<(ostream &os, const Staff &work);
private:
	double sales;
};
class Manager:public Staff{
public:
	Manager(string _name, string _id, string _gender,string _hiredate, double _basicpay, double _award);
	double get_pay()const;
	friend ostream & operator <<(ostream &os, const Staff &work);
private:
	 double award;
};