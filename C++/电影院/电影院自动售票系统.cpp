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
 	int count;//ÿ����Ӱ����Ʊͳ��
	static int total;//����Ʊ��ͳ�ƣ�ÿ��������
	int price[2];//Ʊ������
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
	
	void printseat(){//�����λ����Ϣ 
		for(int i=0;i<10;i++){
			for(int j=0;j<10;j++)
			   cout<<setw(3)<<seat[i][j];
            cout<<endl;
		}
	}
	
	void sell(){
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
					count--;total++;    //��Ʊ��1����Ʊ��1
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
		void getdate(int p,string name,string time ,int p1,int p2)
		//���Σ����ļ��ж�������ݴ浽���� 
		{
		n=p;
		moivename=name;
        moivetime=time;
		price[0]=p1;
		price[1]=p2;	 
		} 
		void pdate()//�Ѷ������Ϣ���
		{
			cout<<"\t"<<setw(2)<<n<<setw(15)<<moivename<<setw(14)<<moivetime<<setw(5)<<price[0]<<setw(9)<<price[1]<<setw(7)<<count<<endl;	
		} 
	    
	    void pdate2()//�Ѷ����е���Ϣ���
		{
			cout<<"\t\t"<<setw(2)<<n<<setw(15)<<moivename<<setw(14)<<moivetime<<setw(7)<<count<<endl;	
		} 
	    
	    void static ptotal()//�þ�̬��Ա����ͳ������Ʊ 
		{
    	     cout<<"\t\t    ����Ʊ��"<<total<<"��ллʹ��!"<<endl;		 	
    	}
    	
    	void setcount()//����ÿ��Ʊ�� 
		{
	       for(int i=0;i<10;i++)
		   	for(int j=0;j<10;j++)
		   	    seat[i][j]=0;
           count=100;
	    }
 }; 
 
 int Moive::total;//��̬��Ա����������
 size_t strftime(char *strDest,size_t maxsize,const char *format,const struct tm *timeptr);//��ȡ��ǰʱ�� 
 struct tm *localtime(const time_t *timer);
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
		cout<<endl<<endl<<"\t   ��ӭʹ�ù�Ӱ����ӰԺ�Զ���Ʊϵͳ\n\n";//ҳ����� 
        strftime(tmp,sizeof(tmp),  "---%Y/%m/%d  %X  %A �����%j��%z---",localtime(&t));
		puts(tmp);
		cout<<"\n\n\t\t1   ��    Ʊ\n\n\t\t2     Ʊ �� �� ѯ\n\n\t\t3    ϵ ͳ �� ��\n\n\t\t0    ��    ��"<<endl;
		
		int a;
		cin>>choice;//����ѡ��
		if(choice==1)//��Ʊ 
		{
		    cout<<setw(2)<<"\t �� ��"<<setw(13)<<"�� Ӱ �� ��"<<setw(10)<<"ʱ��"	
			<<setw(9)<<"��ͨƱ"<<setw(8)<<"����Ʊ"<<setw(6)<<"��Ʊ"<<endl;
		    for(int t=0;t<9;t++)
		       moives[t].pdate();//��ӡƱ����Ϣ
			cout<<"\t\t  -----��������Ҫ�ۿ��ĵ�Ӱ���------"<<endl; 
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