
#include<iostream> 
#include<iomanip> 
#include<string> 
#include<fstream> 
#include<stdio.h>
#include<time.h>
#include"data.h"
using namespace std;


 int main()
 {
 system("cls");//页面变色
system("mode con cols=80 lines=30 &color B");
time_t t=time(0);//获取系统时间
char tmp[64];

Moive moives[10];//建立9个Moive对象
int p;
string name;
string time;
int p1,p2;
ifstream fin;//定义ifstream类（输入文件流类）对象fin
fin.open("moive.txt");//使文件流与movie.txt文件建立关联
fin>>p;
while(!fin.eof())
{
fin>>name>>time>>p1>>p2;
moives[p-1].getdate(p,name,time,p1,p2);//调用函数，传参
fin>>p; 
} 
fin.close();//关闭文件

  
int choice=0;
do
{
cout<<endl<<endl<<"\t 欢迎使用光影流年影院自动售票系统\n\n";//页面设计 
strftime(tmp,sizeof(tmp), "---%Y/%m/%d %X %A 本年第%j天%z---",localtime(&t));
puts(tmp);
cout<<"\n\n\t\t1 购 票\n\n\t\t2 票 房 查 询\n\n\t\t3 系 统 重 置\n\n\t\t0 退 出"<<endl;

int a;
cin>>choice;//功能选择
if(choice==1)//购票 
{
 cout<<setw(2)<<"\t 序 号"<<setw(13)<<"电 影 名 称"<<setw(10)<<"时间"
<<setw(9)<<"普通票"<<setw(8)<<"情侣票"<<setw(6)<<"余票"<<endl;
 for(int t=0;t<9;t++)
 moives[t].pdate();//打印票务信息
cout<<"\t\t -----请输入您要观看的电影序号------"<<endl; 
 cin>>a;
moives[a-1].sell();//调用购票函数 
}
else if(choice==2)//票房统计
{
 cout<<endl<<setw(2)<<"\t\t 序号"<<setw(13)<<"电影名称"<<setw(10)<<"时间"<<setw(12)<<"余票"<<endl;
for(int t=0;t<9;t++)
 moives[t].pdate2();
cout<<endl;
Moive::ptotal();//今日总售票 
 } 
 else if(choice==3)
 {
 for(int t=0;t<9;t++)
 moives[t].setcount();
cout<<"重置成功"<<endl; 
 }
 else if(choice==0)
 return 0;
 else
 {
 cout<<"输入有误，请重新输入"<<endl;
 cin>>choice;
 }
}while(choice!=0);//判断是否继续执行程序
 return 0;
 } 


