#include<map>
#include<list>
#include<string> 
#include"Employee.h"
using namespace std;
class Report{
public:
	//void Sinsert(Staff &);
	void insert(Manager);
	void insert(Technicist);
	void insert(Salesperson);
	void printf(string);
    list<Manager> * operator [](string );
private:
	//list<Staff> slist;
	//list<Staff>::iterator siter;
	list<Manager> mlist;
	list<Manager>::iterator miter;
	list<Technicist> tlist;
	list<Technicist>::iterator titer;
	list<Salesperson> slist;
    list<Salesperson>::iterator siter;
};