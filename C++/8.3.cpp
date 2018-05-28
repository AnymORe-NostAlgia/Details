#include <iostream>
#include <string>
using namespace std;

class staff
{
private:
    string name;
    string code;
public:
    staff()=default;
    staff(string a,string b):name(a),code(b)
    {

    }
    void getname(string n)
    {
        name=n;
    };
    void getcode(string c)
    {
        code=c;
    };

    void showstaff()
    {
        cout<<"The staff's name is :"<<name<<endl;
        cout<<"The staff's code is :"<<code<<endl;
    }
};
class teacher:public staff
{
private:
    string subject;
    string publication;
public:
    teacher()=default;
    teacher(string a,string b,string c,string d):subject(c),publication(d)
    {
        getname(a);
        getcode(b);
    }
    void getsubject(string s)
    {
        subject=s;
    };
    void getpublication(string g)
    {
        publication=g;
    };
    void showteacher()
    {
        showstaff();
        cout<<"The teacher's subject is :"<<subject<<endl;
        cout<<"The teacher's publication:"<<publication<<endl;
    }

};
class typist:public staff
{
private:
    int speed;
public:
    void getspeed(int v)
    {
        speed=v;
    };
    void showtypist()
    {
        showstaff();
        cout<<"speed:"<<speed<<endl;
    }

};
class officer:public staff
{
private:
    char grade;
public:
    officer()=default;
    officer(string a,string b,char c):grade(c)
    {
        getname(a);
        getcode(b);
    }
    void getgrade(char h)
    {
        grade=h;
    };
    void showofficer()
    {
        showstaff();
        cout<<"grade:"<<grade<<endl;
    }

};
class regular:public typist
{
public:
    regular()=default;
    regular(string a,string b,int c)
    {
        getname(a);
        getcode(b);
        getspeed(c);
    }
    void showregular()
    {
        showtypist();
    }
};
class casual:public typist
{
private:
    int daily_wages;
public:
    casual()=default;
    casual(string a,string b,int c,int d):daily_wages(d)
    {
        getname(a);
        getcode(b);
        getspeed(c);
    }
    void getdaily_wages(int j)
    {
        daily_wages=j;
    };
    void showcasual()
    {
        showtypist();
        cout<<"daily_wages:"<<daily_wages<<endl;
    }

};
int main()
{

    teacher a("Darren","001","Math"," ");
    officer b("Maxin","002",'S');
    regular c("Alice","003",200);
    casual d("Michael","004",180,100);


    cout<<"-------teacher-------"<<endl;
    a.showteacher();
    cout<<"-------officer-------"<<endl;
    b.showofficer();
    cout<<"-------regular-------"<<endl;
    c.showregular();
    cout<<"-------casual-------"<<endl;
    d.showcasual();

    return 0;

}
