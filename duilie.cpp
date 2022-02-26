//队列
#include <iostream>
struct queue //队列结构体 
{
	int data[100];//用数组表示队列 
	int head;//队首 
	int tail;//队尾 
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
