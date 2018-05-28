#include<iostream>
#include<string>
#include<list>
#include"Report.h"
using namespace std;
int main(){		   
Technicist t1("c1","2015","male","11-22-33",100);
Technicist t2("g1","2015","male","11-22-33",100);
Manager m1("c2","2016","male","11-22-33",200,3000);
Manager m2("g2","2016","male","11-22-33",200,3200);
Salesperson s1("c3","2017","male","11-22-33",300,2000);
Salesperson s2("g3","2017","male","11-22-33",300,3000);
Report r;
r.insert(m1);
r.insert(m2);
r.insert(t1);
r.insert(t2);
r.insert(s1);
r.insert(s2);
r.printf("Technicist");
r.printf("Salesperson");
r.printf("Manager");
list<Manager>::iterator iter;
for(iter=r["Manager"]->begin();iter!=r["Manager"]->end();iter++)
    cout<<*iter<<endl;
getchar();
};