#include<iostream>
#include"Report.h"
void Report::insert(Manager mana1){
	mlist.push_back(mana1);
}
void Report::insert(Technicist tech1){
    tlist.push_back(tech1);
}
void Report::insert(Salesperson sale1){
	slist.push_back(sale1);
}
void Report::printf(string post){
	double max,min;
	if(post=="Manager"){
	  for(miter=mlist.begin();miter!=mlist.end();miter++){
		  max=mlist.begin()->get_pay();
		 if(miter->get_pay()>max)
			  max=miter->get_pay();
		  min=mlist.begin()->get_pay();
		  if(miter->get_pay()<min)
			  min=miter->get_pay();
		  cout<<*miter;
       }
	 cout<<"max pay :"<<max<<endl<<"min pay :"<<min<<endl;
	}
	if(post=="Technicist"){
	  for(titer=tlist.begin();titer!=tlist.end();titer++){
		  max=tlist.begin()->get_pay();
		  if(titer->get_pay()>max)
			  max=titer->get_pay();
		  min=tlist.begin()->get_pay();
		  if(titer->get_pay()<min)
			  min=titer->get_pay();
		  cout<<*titer;
       }
	  cout<<"max pay :"<<max<<endl<<"min pay :"<<min<<endl;
	}							  
	if(post=="Salesperson"){
	  for(siter=slist.begin();siter!=slist.end();siter++){
		  max=slist.begin()->get_pay();
		  if(siter->get_pay()>max)
			  max=siter->get_pay();
		  min=slist.begin()->get_pay();
		  if(siter->get_pay()<min)
			  min=siter->get_pay();
		  cout<<*siter;
       }
	  cout<<"max pay :"<<max<<endl<<"min pay :"<<min<<endl;
    } 
}
list<Manager> * Report::operator [](string index)
{
	if(index=="Manager"){
		return &mlist;
	};
};