//���� ʹ�ö�̬�����ڴ�ķ�ʽ
#include <iostream>
//����ṹ���ʾ����ڵ�
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
	int a[10] = {100,89,77,65,55,22,21,12,11,9}; //�Ѿ��ź��� 
	 
	head = NULL; //��ʼͷָ��Ϊ�� 
	for(i=0;i<=9;i++)
	{
		p = new struct node; // ��̬�����ڴ�洢�ڵ�
		p->data = a[i];
		p->next = NULL;
		if(head == NULL)
			head = p;
		else
			q->next = p;
		q = p;			
	}

	//��������д洢������
	t = head;
	cout<<"��ʼ����Ϊ��"; 
	while(t!=NULL) 
	{
		cout<<t->data<<"  ";
		t = t->next;
	}
	cout<<endl;
	//��������ָ��λ�ò���ָ��һ���� 
	cout<<"�����������д���������";
	cin>>n; //ϣ���������
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
	//��ʾ����������
	t = head;
	cout<<"����������Ϊ��" ; 
	while(t!=NULL)
	{
		cout<<t->data<<"  ";
		t = t->next;
	} 
	cout<<endl; 
	
	delete p;
	
	return 0;	
	
} 
