
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
 system("cls");//ҳ���ɫ
system("mode con cols=80 lines=30 &color B");
time_t t=time(0);//��ȡϵͳʱ��
char tmp[64];

Moive moives[10];//����9��Moive����
int p;
string name;
string time;
int p1,p2;
ifstream fin;//����ifstream�ࣨ�����ļ����ࣩ����fin
fin.open("moive.txt");//ʹ�ļ�����movie.txt�ļ���������
fin>>p;
while(!fin.eof())
{
fin>>name>>time>>p1>>p2;
moives[p-1].getdate(p,name,time,p1,p2);//���ú���������
fin>>p; 
} 
fin.close();//�ر��ļ�

  
int choice=0;
do
{
cout<<endl<<endl<<"\t ��ӭʹ�ù�Ӱ����ӰԺ�Զ���Ʊϵͳ\n\n";//ҳ����� 
strftime(tmp,sizeof(tmp), "---%Y/%m/%d %X %A �����%j��%z---",localtime(&t));
puts(tmp);
cout<<"\n\n\t\t1 �� Ʊ\n\n\t\t2 Ʊ �� �� ѯ\n\n\t\t3 ϵ ͳ �� ��\n\n\t\t0 �� ��"<<endl;

int a;
cin>>choice;//����ѡ��
if(choice==1)//��Ʊ 
{
 cout<<setw(2)<<"\t �� ��"<<setw(13)<<"�� Ӱ �� ��"<<setw(10)<<"ʱ��"
<<setw(9)<<"��ͨƱ"<<setw(8)<<"����Ʊ"<<setw(6)<<"��Ʊ"<<endl;
 for(int t=0;t<9;t++)
 moives[t].pdate();//��ӡƱ����Ϣ
cout<<"\t\t -----��������Ҫ�ۿ��ĵ�Ӱ���------"<<endl; 
 cin>>a;
moives[a-1].sell();//���ù�Ʊ���� 
}
else if(choice==2)//Ʊ��ͳ��
{
 cout<<endl<<setw(2)<<"\t\t ���"<<setw(13)<<"��Ӱ����"<<setw(10)<<"ʱ��"<<setw(12)<<"��Ʊ"<<endl;
for(int t=0;t<9;t++)
 moives[t].pdate2();
cout<<endl;
Moive::ptotal();//��������Ʊ 
 } 
 else if(choice==3)
 {
 for(int t=0;t<9;t++)
 moives[t].setcount();
cout<<"���óɹ�"<<endl; 
 }
 else if(choice==0)
 return 0;
 else
 {
 cout<<"������������������"<<endl;
 cin>>choice;
 }
}while(choice!=0);//�ж��Ƿ����ִ�г���
 return 0;
 } 


