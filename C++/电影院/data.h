#include<iostream> 
#include<iomanip> 
#include<string> 
#include<fstream> 
#include<stdio.h>
#include<time.h>
using namespace std;

class Moive{ 
 private:
 int seat[10][10];
 int n;
 int moviehole; 
 string moivename;
 string moivetime;
 int count;
static int total;
int price[2];
public:
Moive();
void printseat();
void sell();
void getdate(int p,string name,string time ,int p1,int p2); 
void pdate()
{
 cout<<"\t"<<setw(2)<<n<<setw(15)<<moivename<<setw(14)<<moivetime<<setw(5)<<price[0]<<setw(9)<<price[1]<<setw(7)<<count<<endl;
} 
 void pdate2()
{
cout<<"\t\t"<<setw(2)<<n<<setw(15)<<moivename<<setw(14)<<moivetime<<setw(7)<<count<<endl;
} 
 void static ptotal() 
{
 cout<<"\t\t 已售票："<<total<<"。谢谢使用!"<<endl; 
}
void setcount();
 }; 

 