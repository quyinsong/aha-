//快速排序 ,从小到大排序，用到递归思想 
#include <iostream>
int a[10]={1,10,2,3,100,3,44,33,24,18};//定义全局数组 
void quicksort(int left, int right);//函数声明 

int main()
{
	using namespace std;
	for(int i=0;i<=9;i++)
	{
		cout<<a[i]<<" "; //输出未排序的数组 
	}
	cout<<endl; 
	quicksort(0,9);
	for(int i=0;i<=9;i++)
	{
		cout<<a[i]<<" "; //输出排序后的数组 
	}
	cout<<endl;
	return 0; 
} 
//快速排序函数定义 
void quicksort(int left, int right)//快速排序函数 
{
	int i,j,temp1,temp2;
	if (right<left)
		return;
	temp1 = a[left];
	i = left; j = right;
	while(i!=j)
	{
		while(j>i&&a[j]>=temp1)
			j--;
		while(i<j&&a[i]<=temp1)
			i++;
		if(i<j)
		{
			temp2=a[i];
			a[i]=a[j];
			a[j]=temp2;
		}	
	}
	a[left]=a[i];
	a[i]=temp1;
	//递归调用
	quicksort(left,i-1);//处理基准值左侧数据
	quicksort(i+1,right);//处理基准值右侧数据

}
