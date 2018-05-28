#include<iostream>
#include<iomanip>
using namespace std;
class Movie
{
	char Data[20];             //��Ӱ�������� 
	char Time[20];             //��Ӱ����ʱ��
	int Number;					 //����
	char MovieName[20];        
	int Remain;                   //ʣ���Ʊ
	int BasePrice;               //����Ʊ�ۼ���һ��Ʊ��
	bool seat[10][10];           
public:	
	int Price;	
	Movie(char*,char*,int,char*,double,int);
	void display();
	void Input();
	void run(int,int);
};
Movie::Movie(char *data,char *time,int number,char *moviename,double price,int remain)
{
	strcpy(Data,data);
	strcpy(Time,time);
	Number=number;
	strcpy(MovieName,moviename);
	BasePrice=price;
	Remain=remain;
}
void Movie::display()
{
	cout<<setw(10)<<Data<<setw(15)<<Time<<setw(7)<<Number;
	cout<<setw(20)<<MovieName<<setw(13)<<BasePrice<<setw(10)<<Remain<<endl;
}
void Movie::Input(){
	cout<<endl<<endl;
	cout<<"                           �õ�Ӱ����λ������£�"<<endl;
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++)
		{
			if(seat[i][j]==1)
				cout<<"[����] ";
			else
				cout<<"[��λ] ";
		}
		cout<<endl;
	}
	cout<<"___________________________________________________________________________"<<endl<<endl;
}
void Movie::run(int i,int j)
{
	seat[i-1][j-1]=1;
	Price=BasePrice*(1-0.02*(i-1));
	Remain--;
}
int main()
{
	int choice,i,j;
	Movie x1("2016-6-21","8:00-10:00",1,"������",81,100);
	Movie x2("2016-6-22","10:00-12:00",2,"����ħ����",95,100);
	Movie x3("2016-6-23","12:00-14:00",3,"ħ��",72,100);
    Movie x4("2016-6-25","14:00-16:00",4,"�����գ���������",77,100);
	Movie x5("2016-6-23","16:00-18:00",5,"����˿�����ɾ�",89,100);
	Movie x6("2016-6-24","18:00-20:00",6,"������ߵİ���",108,100);
	Movie x7("2016-6-26","20:00-22:00",7,"������������ͼ",50,100);
	Movie x8("2016-6-25","22:00-0:00",8," Xս��������",69,100);
	Movie x9("2016-6-23","0:00-2:00",9,"  �����ܶ�Ա2",112,100);
	while(1){
		cout<<"                             ���е�Ӱ�������"<<endl<<endl;
		cout<<setw(10)<<"����"<<setw(15)<<"ʱ-��"<<setw(7)<<"����";
		cout<<setw(20)<<"��Ӱ����"<<setw(13)<<"��һ��Ʊ��"<<setw(10)<<"��Ʊ"<<endl<<endl;
		x1.display();x2.display();x3.display();x4.display();x5.display();x6.display();
		x7.display();x8.display();x9.display();
		cout<<"___________________________________________________________________________"<<endl<<endl;
		cout<<"��������Ҫ���ĵ�Ӱ����:";
		cin>>choice;
		switch(choice){
		case 1:
			x1.Input();
			cout<<"��������ҪԤ������λ(��4 3,��ʾ�ڵ����ŵ�����;ÿ����һ����λ�۸񽵵�2%):";
			cin>>i>>j;
			x1.run(i,j);
			cout<<"����λƱ��Ϊ"<<x1.Price<<endl;
			cout<<"*******************************************************************************"<<endl;
			break;
		case 2:
			x2.Input();
			cout<<"��������ҪԤ������λ(��4 3,��ʾ�ڵ����ŵ�����;ÿ����һ����λ�۸񽵵�2%):";
			cin>>i>>j;
			x2.run(i,j);
			cout<<"����λƱ��Ϊ"<<x2.Price<<endl;
			cout<<"*******************************************************************************"<<endl;
			break;
		case 3:
			x3.Input();
			cout<<"��������ҪԤ������λ(��4 3,��ʾ�ڵ����ŵ�����;ÿ����һ����λ�۸񽵵�2%):";
			cin>>i>>j;
			x3.run(i,j);
			cout<<"����λƱ��Ϊ"<<x3.Price<<endl;
			cout<<"*******************************************************************************"<<endl;
			break;
		case 4:
			x4.Input();
			cout<<"��������ҪԤ������λ(��4 3,��ʾ�ڵ����ŵ�����;ÿ����һ����λ�۸񽵵�2%):";
			cin>>i>>j;
			x4.run(i,j);
			cout<<"����λƱ��Ϊ"<<x4.Price<<endl;
			cout<<"*******************************************************************************"<<endl;
			break;
		case 5:
			x5.Input();
			cout<<"��������ҪԤ������λ(��4 3,��ʾ�ڵ����ŵ�����;ÿ����һ����λ�۸񽵵�2%):";
			cin>>i>>j;
			x5.run(i,j);
			cout<<"����λƱ��Ϊ"<<x5.Price<<endl;
			cout<<"*******************************************************************************"<<endl;
			break;
		case 6:
			x6.Input();
			cout<<"��������ҪԤ������λ(��4 3,��ʾ�ڵ����ŵ�����;ÿ����һ����λ�۸񽵵�2%):";
			cin>>i>>j;
			x6.run(i,j);
			cout<<"����λƱ��Ϊ"<<x6.Price<<endl;
			cout<<"*******************************************************************************"<<endl;
			break;
		case 7:
			x7.Input();
			cout<<"��������ҪԤ������λ(��4 3,��ʾ�ڵ����ŵ�����;ÿ����һ����λ�۸񽵵�2%):";
			cin>>i>>j;
			x7.run(i,j);
			cout<<"����λƱ��Ϊ"<<x7.Price<<endl;
			cout<<"*******************************************************************************"<<endl;
			break;
		case 8:
			x8.Input();
			cout<<"��������ҪԤ������λ(��4 3,��ʾ�ڵ����ŵ�����;ÿ����һ����λ�۸񽵵�2%):";
			cin>>i>>j;
			x8.run(i,j);
			cout<<"����λƱ��Ϊ"<<x8.Price<<endl;
			cout<<"*******************************************************************************"<<endl;
			break;
		case 9:
			x9.Input();
			cout<<"��������ҪԤ������λ(��4 3,��ʾ�ڵ����ŵ�����;ÿ����һ����λ�۸񽵵�2%):";
			cin>>i>>j;
			x9.run(i,j);
			cout<<"����λƱ��Ϊ"<<x9.Price<<endl;
			cout<<"*******************************************************************************"<<endl;
			break;
		default:
			cout<<"�������"<<endl;
		}
	}
	return 0;
}
