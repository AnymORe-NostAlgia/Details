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

class teacher
{
private:
    staff temp;
    string subject;
    string publication;

public:
    teacher()=default;
    teacher(string a,string b,string c,string d):subject(c),publication(d)
    {
        temp.getname(a);
        temp.getcode(b);
    }
    void getsubject(string s)
    {
        subject=s;
    };
    void getpublication(string g)
    {
        publication=g;
    };
    void getstaff(string c,string n)
    {
        temp.getname(c);
        temp.getcode(n);

    }
    void showteacher()
    {
        temp.showstaff();
        cout<<"subject:"<<subject<<endl;
        cout<<"publication:"<<publication<<endl;
    }

};
class typist
{
private:
    staff temp;
    int speed;

public:

    void getspeed(int v)
    {
        speed=v;
    };
    void getstaff(string n,string c)
    {
        temp.getname(n);
        temp.getcode(c);

    }
    void showtypist()
    {
        temp.showstaff();
        cout<<"speed:"<<speed<<endl;
    }

};

class officer
{

private:
    staff temp;
    char grade;

public:
    officer()=default;
    officer(string a,string b,char c):grade(c)
    {
        temp.getname(a);
        temp.getcode(b);
    }
    void getgrade(char h)
    {
        grade=h;
    };
    void getstaff(string c,string n)
    {
        temp.getname(n);
        temp.getcode(c);
    }
    void showofficer()
    {
        temp.showstaff();
        cout<<"grade:"<<grade<<endl;
    }
};
class regular
{
private:
    typist temp;
public:
    regular()=default;
    regular(string a,string b,int c)
    {
        temp.getstaff(a,b);
        temp.getspeed(c);
    }
    void gettypist(string c,string n,int v)
    {
        temp.getstaff(c,n);
        temp.getspeed(v);
    }
    void showregular()
    {
        temp.showtypist();
    }
};
class casual
{
private:
    typist temp;
    int daily_wages;

public:
    casual()=default;
    casual(string a,string b,int c,int d):daily_wages(d)
    {
        temp.getstaff(a,b);
        temp.getspeed(c);
    }
    void getdaily_wages(int j)
    {
        daily_wages=j;
    };

    void gettypist(int v,string c,string n)
    {
        temp.getspeed(v);
        temp.getstaff(c,n);
    }
    void showcasual()
    {
        temp.showtypist();
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
