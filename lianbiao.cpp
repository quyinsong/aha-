//链表 使用动态申请内存的方式
#include <iostream>
//定义结构体表示链表节点
struct node
{
	int data;
	struct node *next;
};
int main()
{
	using namespace std;
	struct node *head, *p, *q, *t;
	int i, n; 
	int a[10] = {100,89,77,65,55,22,21,12,11,9}; //已经排好序 
	 
	head = NULL; //初始头指针为空 
	for(i=0;i<=9;i++)
	{
		p = new struct node; // 动态申请内存存储节点
		p->data = a[i];
		p->next = NULL;
		if(head == NULL)
			head = p;
		else
			q->next = p;
		q = p;			
	}

	//输出链表中存储的数据
	t = head;
	cout<<"初始链表为："; 
	while(t!=NULL) 
	{
		cout<<t->data<<"  ";
		t = t->next;
	}
	cout<<endl;
	//向链表中指定位置插入指定一个数 
	cout<<"请输入链表中待插入数字";
	cin>>n; //希望插入的数
	t = head;
	while(t!=NULL)
	{
		if(t->next->data <= n)
		{
			p = new struct node;
			p->data = n;
			p->next = t->next;
			t->next = p;
			break;
		}
		t = t->next;
	}
	//显示插入后的链表
	t = head;
	cout<<"插入后的链表为：" ; 
	while(t!=NULL)
	{
		cout<<t->data<<"  ";
		t = t->next;
	} 
	cout<<endl; 
	
	delete p;
	
	return 0;	
	
} 
