//Сè����
//2.26.2022
//�������⣬�����ϴ𰸲�һ��
//�Լ�����ϸ�2.27.2022 
#include <iostream>

struct queue 
{
	int data[100];
	int head;
	int tail;
};//������б�ʾ�������е��� 
struct stack
{
	int data[100];
	int top;
};//�����ջ��ʾ���� 
 
int main()
{
	using namespace std;
	queue q1 = {{2,4,1,2,5,6},0,6};//С�� 
	queue q2 = {{3,1,3,5,6,4},0,6};//С�� 
	stack s = {{0},0};//���� 
	//��ʾ��ʼ���� ----------------------
	cout<<"------------��Ϸ��ʼ��-----------"<<endl;
	cout<<"�����ϵ��ƣ� ";
	for(int i=s.top;i>=1;i-- )
		cout<<s.data[i-1];
	cout<<endl;
	cout<<"С�����е��ƣ� ";
	for(int i=q1.head;i<q1.tail;i++)
		cout<<q1.data[i];
	cout<<endl;
	cout<<"С�����е��ƣ� ";
	for(int i=q2.head;i<q2.tail;i++)
		cout<<q2.data[i];
	cout<<endl;
	//-------------------------------------- 
	int book=0;
	int flag1=0; int flag2=0;
	cout<<"--------------��Ϸ��ʼ-----------"<<endl;
	//whileѭ����ģ����ƹ��̣�ֱ����һ�����������--------- 
	while(q1.head<q1.tail&&q2.head<q2.tail)
	{
		//С�߳��� 
		if(s.top==0)//˵��������û���� 
		{
			s.data[s.top]=q1.data[q1.head];//�������� 
			s.top++;//�������Ƽ�1 
			q1.head++;//С�߳���
		}
		else 
		{
			//�ж�С���Ƿ�Ӯ��
			for(int i=0;i<=s.top-1;i++)
			{
				if (s.data[i]==q1.data[q1.head])
				{
					flag1=1;//С��Ӯ�� 
					break;
				}	
				else flag1=0;
				book++;
			} 
			if(flag1==1)//С��Ӯ�� 
			{
				s.data[s.top]=q1.data[q1.head];//�������� 
				q1.head++;
				s.top++;
				int len=s.top;
				for(int j=book;j<=len-1;j++)
				{
					
					s.top--;
					q1.data[q1.tail]=s.data[s.top];
					q1.tail++;
				}
				flag1=0;
				book=0;
			}
			else//С��û��Ӯ�� 
			{
				s.data[s.top]=q1.data[q1.head];
				s.top++;
				q1.head++;
				book=0;
			}
		}
	//С�߳��ƺ���ʾ���ƽ��
	cout<<"�����ϵ��ƣ� ";
	for(int i=s.top;i>=1;i-- )
		cout<<s.data[i-1];
	cout<<endl;
	cout<<"С�����е��ƣ� ";
	for(int i=q1.head;i<q1.tail;i++)
		cout<<q1.data[i];
	cout<<endl;
	cout<<"С�����е��ƣ� ";
	for(int i=q2.head;i<q2.tail;i++)
		cout<<q2.data[i];
	cout<<endl;
	cout<<"----------------------------"<<endl;
		 
		//С������
		if(s.top==0)//˵��������û���� 
		{
			s.data[s.top]=q2.data[q2.head];//�������� 
			s.top++;//�������Ƽ�1 
			q2.head++;//С������
		}
		else 
		{
			//�ж�С���Ƿ�Ӯ��
			for(int i=0;i<=s.top-1;i++)
			{
				if (s.data[i]==q2.data[q2.head])
				{
					flag2=1;//С��Ӯ�� 
					break;
				}	
				else flag2=0;
				book++;
			} 
			if(flag2==1)//С��Ӯ�� 
			{
				s.data[s.top]=q2.data[q2.head];//�������� 
				q2.head++;
				s.top++;
				int len=s.top;
				for(int j=book;j<=len-1;j++)
				{
					
					s.top--;
					q2.data[q2.tail]=s.data[s.top];
					q2.tail++;
				}
				flag2=0;
				book=0;
			}
			else//С��û��Ӯ�� 
			{
				s.data[s.top]=q2.data[q2.head];
				s.top++;
				q2.head++;
				book=0;
			}
		}
	//С�����ƺ���ʾ���ƽ��
	cout<<"�����ϵ��ƣ� ";
	for(int i=s.top;i>=1;i-- )
		cout<<s.data[i-1];
	cout<<endl;
	cout<<"С�����е��ƣ� ";
	for(int i=q1.head;i<q1.tail;i++)
		cout<<q1.data[i];
	cout<<endl;
	cout<<"С�����е��ƣ� ";
	for(int i=q2.head;i<q2.tail;i++)
		cout<<q2.data[i];
	cout<<endl;	 
	cout<<"----------------------------"<<endl;
	}
	
	cout<<"----------------------------"<<endl;
	//ѭ����������ʾ��Ϸ���ս�� 
	cout<<"��Ϸ������"<<endl;
	cout<<"----------------------------"<<endl;
	cout<<"----------------------------"<<endl;
	if(q1.head=q1.tail)
		cout<<"q1(С��) win"<<endl;
	else
		cout<<"q2(С��) win"<<endl;
	cout<<"�����ϵ��ƣ� ";
	for(s.top;s.top>=1;s.top-- )
		cout<<s.data[s.top-1];
	cout<<endl;
	cout<<"С�����е��ƣ� ";
	for(int i=q1.head;i<q1.tail;i++)
		cout<<q1.data[i];
	cout<<endl;
	cout<<"С�����е��ƣ� ";
	for(int i=q2.head;i<q2.tail;i++)
		cout<<q2.data[i];
	cout<<endl;
	
	
	return 0;
} 
