//����
#include <iostream>
struct queue //���нṹ�� 
{
	int data[100];//�������ʾ���� 
	int head;//���� 
	int tail;//��β 
};
int main()
{
	using namespace std;
	queue q={{6,3,1,7,5,8,9,2,4},0,8}; 

	while(q.head<=q.tail)
	{
		cout<<q.data[q.head]<<" ";
		q.head++;
		q.tail++;
		q.data[q.tail]=q.data[q.head];
		q.head++;
	}
	return 0;
}
