#include"data.h"
Moive::Moive(){
n=0;
for(int i=0;i<10;i++)
 for(int j=0;j<10;j++)
 seat[i][j]=0;
count=100;
price[0]=0; // 
price[1]=0; //
}
void Moive::printseat(){//输出座位表信息 
 for(int i=0;i<10;i++){
 for(int j=0;j<10;j++)
 cout<<setw(3)<<seat[i][j];
 cout<<endl;
}
}
void Moive::sell(){
if(count==0)//判断是否有余票 
cout<<"\t\t\t-------对不起，该电影票已售完------"<<endl;
else{
cout<<"\t\t-------请输入您要购买的票数----"<<endl;
int n;int sum=0;
cin>>n;
cout<<"请选择您要的座位“如 X Y 表示第X排，第Y列”，0为未售出，1为已售出。普通座（1-9排）票价"<<price[0]<<",情侣座（第10排）票价"<<price[1]<<endl;
printseat();//调用函数，输出座位表
for(int t=1;t<=n;t++){
cout<<"请选择座位："<<endl;
int i,j;
cin>>i>>j;
if(seat[i-1][j-1]==0){//顾客购票后，更改座位表信息
seat[i-1][j-1]=1;
if(i==10)//判断是否选择情侣座 
sum=sum+price[1];
else sum=sum+price[0];
count--;total++; //余票减1，总票加1
cout<<"\t\t\t您选择了第"<<i<<"排，第"<<j<<"座。"<<endl;//输出选择的座位信息
}
else{
cout<<"\t\t\t该座位已有人，请重新选择座位"<<endl;
cin>>i>>j;
if(seat[i-1][j-1]==0){
seat[i-1][j-1]=1;
if(i==10)
 sum=sum+price[1];
 else sum=sum+price[0];
 count--;total++;
 cout<<"\t\t\t您选择了第"<<i<<"排，第"<<j<<"座。"<<endl;
 }
}
}
cout<<"\t\t\t总价为"<<sum<<"元，请确认。"<<endl;//付款
int m;
cout<<"\t\t\t请投入所要支付的金额。"<<endl;
cin>>m;
if(m>=sum)
cout<<"\t\t\t购买成功，找零"<<m-sum<<"元。"<<endl;
else
cout<<"\t\t\t对不起，金额不足。"<<endl; 
while(m<sum){
cout<<"\t\t\t请投入所要支付的金额。"<<endl;
cin>>m;
 if(m>=sum)
cout<<"\t\t\t购买成功，找零"<<m-sum<<"元。谢谢使用！"<<endl;
else
cout<<"\t\t\t对不起，金额不足。"<<endl;
}
} 
} 

void Moive::getdate(int p,string name,string time ,int p1,int p2)
{
n=p;
moivename=name;
moivetime=time;
price[0]=p1;
price[1]=p2; 
} 

void Moive::setcount()
{
 for(int i=0;i<10;i++)
 for(int j=0;j<10;j++)
 seat[i][j]=0;
 count=100;
 }
int Moive::total;
 size_t strftime(char *strDest,size_t maxsize,const char *format,const struct tm *timeptr); 
 struct tm *localtime(const time_t *timer);