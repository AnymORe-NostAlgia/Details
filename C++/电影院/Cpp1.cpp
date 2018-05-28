#include<iostream>
#include<iomanip>
using namespace std;
class Movie
{
	char Data[20];             //电影播放日期 
	char Time[20];             //电影播放时间
	int Number;					 //场次
	char MovieName[20];        
	int Remain;                   //剩余的票
	int BasePrice;               //基本票价即第一排票价
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
	cout<<"                           该电影的座位情况如下："<<endl;
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++)
		{
			if(seat[i][j]==1)
				cout<<"[有人] ";
			else
				cout<<"[空位] ";
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
	Movie x1("2016-6-21","8:00-10:00",1,"三人行",81,100);
	Movie x2("2016-6-22","10:00-12:00",2,"惊天魔盗团",95,100);
	Movie x3("2016-6-23","12:00-14:00",3,"魔兽",72,100);
    Movie x4("2016-6-25","14:00-16:00",4,"独立日：卷土重来",77,100);
	Movie x5("2016-6-23","16:00-18:00",5,"爱丽丝梦游仙境",89,100);
	Movie x6("2016-6-24","18:00-20:00",6,"近在咫尺的爱恋",108,100);
	Movie x7("2016-6-26","20:00-22:00",7,"北京遇上西雅图",50,100);
	Movie x8("2016-6-25","22:00-0:00",8," X战警：天启",69,100);
	Movie x9("2016-6-23","0:00-2:00",9,"  海底总动员2",112,100);
	while(1){
		cout<<"                             所有电影情况如下"<<endl<<endl;
		cout<<setw(10)<<"日期"<<setw(15)<<"时-间"<<setw(7)<<"场次";
		cout<<setw(20)<<"电影名称"<<setw(13)<<"第一排票价"<<setw(10)<<"余票"<<endl<<endl;
		x1.display();x2.display();x3.display();x4.display();x5.display();x6.display();
		x7.display();x8.display();x9.display();
		cout<<"___________________________________________________________________________"<<endl<<endl;
		cout<<"请输入您要看的电影场次:";
		cin>>choice;
		switch(choice){
		case 1:
			x1.Input();
			cout<<"请输入您要预定的座位(如4 3,表示在第四排第三列;每往后一排座位价格降低2%):";
			cin>>i>>j;
			x1.run(i,j);
			cout<<"该座位票价为"<<x1.Price<<endl;
			cout<<"*******************************************************************************"<<endl;
			break;
		case 2:
			x2.Input();
			cout<<"请输入您要预定的座位(如4 3,表示在第四排第三列;每往后一排座位价格降低2%):";
			cin>>i>>j;
			x2.run(i,j);
			cout<<"该座位票价为"<<x2.Price<<endl;
			cout<<"*******************************************************************************"<<endl;
			break;
		case 3:
			x3.Input();
			cout<<"请输入您要预定的座位(如4 3,表示在第四排第三列;每往后一排座位价格降低2%):";
			cin>>i>>j;
			x3.run(i,j);
			cout<<"该座位票价为"<<x3.Price<<endl;
			cout<<"*******************************************************************************"<<endl;
			break;
		case 4:
			x4.Input();
			cout<<"请输入您要预定的座位(如4 3,表示在第四排第三列;每往后一排座位价格降低2%):";
			cin>>i>>j;
			x4.run(i,j);
			cout<<"该座位票价为"<<x4.Price<<endl;
			cout<<"*******************************************************************************"<<endl;
			break;
		case 5:
			x5.Input();
			cout<<"请输入您要预定的座位(如4 3,表示在第四排第三列;每往后一排座位价格降低2%):";
			cin>>i>>j;
			x5.run(i,j);
			cout<<"该座位票价为"<<x5.Price<<endl;
			cout<<"*******************************************************************************"<<endl;
			break;
		case 6:
			x6.Input();
			cout<<"请输入您要预定的座位(如4 3,表示在第四排第三列;每往后一排座位价格降低2%):";
			cin>>i>>j;
			x6.run(i,j);
			cout<<"该座位票价为"<<x6.Price<<endl;
			cout<<"*******************************************************************************"<<endl;
			break;
		case 7:
			x7.Input();
			cout<<"请输入您要预定的座位(如4 3,表示在第四排第三列;每往后一排座位价格降低2%):";
			cin>>i>>j;
			x7.run(i,j);
			cout<<"该座位票价为"<<x7.Price<<endl;
			cout<<"*******************************************************************************"<<endl;
			break;
		case 8:
			x8.Input();
			cout<<"请输入您要预定的座位(如4 3,表示在第四排第三列;每往后一排座位价格降低2%):";
			cin>>i>>j;
			x8.run(i,j);
			cout<<"该座位票价为"<<x8.Price<<endl;
			cout<<"*******************************************************************************"<<endl;
			break;
		case 9:
			x9.Input();
			cout<<"请输入您要预定的座位(如4 3,表示在第四排第三列;每往后一排座位价格降低2%):";
			cin>>i>>j;
			x9.run(i,j);
			cout<<"该座位票价为"<<x9.Price<<endl;
			cout<<"*******************************************************************************"<<endl;
			break;
		default:
			cout<<"输入错误"<<endl;
		}
	}
	return 0;
}
