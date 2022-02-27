//小猫钓鱼
//2.26.2022
//存在问题，和书上答案不一致
//自己检验合格2.27.2022 
#include <iostream>

struct queue 
{
	int data[100];
	int head;
	int tail;
};//定义队列表示两人手中的牌 
struct stack
{
	int data[100];
	int top;
};//定义堆栈表示桌子 
 
int main()
{
	using namespace std;
	queue q1 = {{2,4,1,2,5,6},0,6};//小哼 
	queue q2 = {{3,1,3,5,6,4},0,6};//小哈 
	stack s = {{0},0};//桌子 
	//显示初始牌面 ----------------------
	cout<<"------------游戏初始化-----------"<<endl;
	cout<<"桌子上的牌： ";
	for(int i=s.top;i>=1;i-- )
		cout<<s.data[i-1];
	cout<<endl;
	cout<<"小哼手中的牌： ";
	for(int i=q1.head;i<q1.tail;i++)
		cout<<q1.data[i];
	cout<<endl;
	cout<<"小哈手中的牌： ";
	for(int i=q2.head;i<q2.tail;i++)
		cout<<q2.data[i];
	cout<<endl;
	//-------------------------------------- 
	int book=0;
	int flag1=0; int flag2=0;
	cout<<"--------------游戏开始-----------"<<endl;
	//while循环，模拟打牌过程，直至任一玩家手中无牌--------- 
	while(q1.head<q1.tail&&q2.head<q2.tail)
	{
		//小哼出牌 
		if(s.top==0)//说明桌子上没有牌 
		{
			s.data[s.top]=q1.data[q1.head];//出牌上桌 
			s.top++;//桌子上牌加1 
			q1.head++;//小哼出牌
		}
		else 
		{
			//判断小哼是否赢牌
			for(int i=0;i<=s.top-1;i++)
			{
				if (s.data[i]==q1.data[q1.head])
				{
					flag1=1;//小哼赢牌 
					break;
				}	
				else flag1=0;
				book++;
			} 
			if(flag1==1)//小哼赢牌 
			{
				s.data[s.top]=q1.data[q1.head];//出牌上桌 
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
			else//小哼没有赢牌 
			{
				s.data[s.top]=q1.data[q1.head];
				s.top++;
				q1.head++;
				book=0;
			}
		}
	//小哼出牌后显示出牌结果
	cout<<"桌子上的牌： ";
	for(int i=s.top;i>=1;i-- )
		cout<<s.data[i-1];
	cout<<endl;
	cout<<"小哼手中的牌： ";
	for(int i=q1.head;i<q1.tail;i++)
		cout<<q1.data[i];
	cout<<endl;
	cout<<"小哈手中的牌： ";
	for(int i=q2.head;i<q2.tail;i++)
		cout<<q2.data[i];
	cout<<endl;
	cout<<"----------------------------"<<endl;
		 
		//小哈出牌
		if(s.top==0)//说明桌子上没有牌 
		{
			s.data[s.top]=q2.data[q2.head];//出牌上桌 
			s.top++;//桌子上牌加1 
			q2.head++;//小哈出牌
		}
		else 
		{
			//判断小哈是否赢牌
			for(int i=0;i<=s.top-1;i++)
			{
				if (s.data[i]==q2.data[q2.head])
				{
					flag2=1;//小哈赢牌 
					break;
				}	
				else flag2=0;
				book++;
			} 
			if(flag2==1)//小哈赢牌 
			{
				s.data[s.top]=q2.data[q2.head];//出牌上桌 
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
			else//小哈没有赢牌 
			{
				s.data[s.top]=q2.data[q2.head];
				s.top++;
				q2.head++;
				book=0;
			}
		}
	//小哈出牌后显示出牌结果
	cout<<"桌子上的牌： ";
	for(int i=s.top;i>=1;i-- )
		cout<<s.data[i-1];
	cout<<endl;
	cout<<"小哼手中的牌： ";
	for(int i=q1.head;i<q1.tail;i++)
		cout<<q1.data[i];
	cout<<endl;
	cout<<"小哈手中的牌： ";
	for(int i=q2.head;i<q2.tail;i++)
		cout<<q2.data[i];
	cout<<endl;	 
	cout<<"----------------------------"<<endl;
	}
	
	cout<<"----------------------------"<<endl;
	//循环结束，显示游戏最终结果 
	cout<<"游戏结束！"<<endl;
	cout<<"----------------------------"<<endl;
	cout<<"----------------------------"<<endl;
	if(q1.head=q1.tail)
		cout<<"q1(小哼) win"<<endl;
	else
		cout<<"q2(小哈) win"<<endl;
	cout<<"桌子上的牌： ";
	for(s.top;s.top>=1;s.top-- )
		cout<<s.data[s.top-1];
	cout<<endl;
	cout<<"小哼手中的牌： ";
	for(int i=q1.head;i<q1.tail;i++)
		cout<<q1.data[i];
	cout<<endl;
	cout<<"小哈手中的牌： ";
	for(int i=q2.head;i<q2.tail;i++)
		cout<<q2.data[i];
	cout<<endl;
	
	
	return 0;
} 
