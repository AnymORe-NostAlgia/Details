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
void Moive::printseat(){//�����λ����Ϣ 
 for(int i=0;i<10;i++){
 for(int j=0;j<10;j++)
 cout<<setw(3)<<seat[i][j];
 cout<<endl;
}
}
void Moive::sell(){
if(count==0)//�ж��Ƿ�����Ʊ 
cout<<"\t\t\t-------�Բ��𣬸õ�ӰƱ������------"<<endl;
else{
cout<<"\t\t-------��������Ҫ�����Ʊ��----"<<endl;
int n;int sum=0;
cin>>n;
cout<<"��ѡ����Ҫ����λ���� X Y ��ʾ��X�ţ���Y�С���0Ϊδ�۳���1Ϊ���۳�����ͨ����1-9�ţ�Ʊ��"<<price[0]<<",����������10�ţ�Ʊ��"<<price[1]<<endl;
printseat();//���ú����������λ��
for(int t=1;t<=n;t++){
cout<<"��ѡ����λ��"<<endl;
int i,j;
cin>>i>>j;
if(seat[i-1][j-1]==0){//�˿͹�Ʊ�󣬸�����λ����Ϣ
seat[i-1][j-1]=1;
if(i==10)//�ж��Ƿ�ѡ�������� 
sum=sum+price[1];
else sum=sum+price[0];
count--;total++; //��Ʊ��1����Ʊ��1
cout<<"\t\t\t��ѡ���˵�"<<i<<"�ţ���"<<j<<"����"<<endl;//���ѡ�����λ��Ϣ
}
else{
cout<<"\t\t\t����λ�����ˣ�������ѡ����λ"<<endl;
cin>>i>>j;
if(seat[i-1][j-1]==0){
seat[i-1][j-1]=1;
if(i==10)
 sum=sum+price[1];
 else sum=sum+price[0];
 count--;total++;
 cout<<"\t\t\t��ѡ���˵�"<<i<<"�ţ���"<<j<<"����"<<endl;
 }
}
}
cout<<"\t\t\t�ܼ�Ϊ"<<sum<<"Ԫ����ȷ�ϡ�"<<endl;//����
int m;
cout<<"\t\t\t��Ͷ����Ҫ֧���Ľ�"<<endl;
cin>>m;
if(m>=sum)
cout<<"\t\t\t����ɹ�������"<<m-sum<<"Ԫ��"<<endl;
else
cout<<"\t\t\t�Բ��𣬽��㡣"<<endl; 
while(m<sum){
cout<<"\t\t\t��Ͷ����Ҫ֧���Ľ�"<<endl;
cin>>m;
 if(m>=sum)
cout<<"\t\t\t����ɹ�������"<<m-sum<<"Ԫ��ллʹ�ã�"<<endl;
else
cout<<"\t\t\t�Բ��𣬽��㡣"<<endl;
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