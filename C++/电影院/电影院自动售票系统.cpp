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
 	string moivename;
 	string moivetime;
 	int count;//每场电影的余票统计
	static int total;//总售票的统计，每个对象共用
	int price[2];//票价数组
	public:
	Moive(){
		n=0;
		for(int i=0;i<10;i++)
		   for(int j=0;j<10;j++)
		      seat[i][j]=0;
		 count=100;
		 price[0]=0;                                                            // 
		 price[1]=0;                                                            //
	}
	
	void printseat(){//输出座位表信息 
		for(int i=0;i<10;i++){
			for(int j=0;j<10;j++)
			   cout<<setw(3)<<seat[i][j];
            cout<<endl;
		}
	}
	
	void sell(){
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
					count--;total++;    //余票减1，总票加1
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
		void getdate(int p,string name,string time ,int p1,int p2)
		//传参，把文件中读入的数据存到对象 
		{
		n=p;
		moivename=name;
        moivetime=time;
		price[0]=p1;
		price[1]=p2;	 
		} 
		void pdate()//把对象的信息输出
		{
			cout<<"\t"<<setw(2)<<n<<setw(15)<<moivename<<setw(14)<<moivetime<<setw(5)<<price[0]<<setw(9)<<price[1]<<setw(7)<<count<<endl;	
		} 
	    
	    void pdate2()//把对象中的信息输出
		{
			cout<<"\t\t"<<setw(2)<<n<<setw(15)<<moivename<<setw(14)<<moivetime<<setw(7)<<count<<endl;	
		} 
	    
	    void static ptotal()//用静态成员函数统计总售票 
		{
    	     cout<<"\t\t    已售票："<<total<<"。谢谢使用!"<<endl;		 	
    	}
    	
    	void setcount()//重置每日票数 
		{
	       for(int i=0;i<10;i++)
		   	for(int j=0;j<10;j++)
		   	    seat[i][j]=0;
           count=100;
	    }
 }; 
 
 int Moive::total;//静态成员变量的声明
 size_t strftime(char *strDest,size_t maxsize,const char *format,const struct tm *timeptr);//获取当前时间 
 struct tm *localtime(const time_t *timer);
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
		cout<<endl<<endl<<"\t   欢迎使用光影流年影院自动售票系统\n\n";//页面设计 
        strftime(tmp,sizeof(tmp),  "---%Y/%m/%d  %X  %A 本年第%j天%z---",localtime(&t));
		puts(tmp);
		cout<<"\n\n\t\t1   购    票\n\n\t\t2     票 房 查 询\n\n\t\t3    系 统 重 置\n\n\t\t0    退    出"<<endl;
		
		int a;
		cin>>choice;//功能选择
		if(choice==1)//购票 
		{
		    cout<<setw(2)<<"\t 序 号"<<setw(13)<<"电 影 名 称"<<setw(10)<<"时间"	
			<<setw(9)<<"普通票"<<setw(8)<<"情侣票"<<setw(6)<<"余票"<<endl;
		    for(int t=0;t<9;t++)
		       moives[t].pdate();//打印票务信息
			cout<<"\t\t  -----请输入您要观看的电影序号------"<<endl; 
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