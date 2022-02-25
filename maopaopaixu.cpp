//冒泡排序,从大到小排序 
#include <iostream>
int main()
{
	using namespace std;
	int a[10]={10,1,8,5,1,2,3,11,2,7};
	for(int i=0;i<=9;i++)
	{
		cout<<a[i]<<" "; //输出未排序的数组 
	}
	cout<<endl;
	
	int temp; int flag=0;
	for(int i=9;i>=1;i--)
	{
		flag=0;
		for(int j=0;j<=i-1;j++)
		{
			if (a[j]<a[j+1])
			{
				temp = a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				flag=1;//如果在一趟排序中发生交换 ，flag=1 
			}
		}
		if(flag==0) 
			break; //如果在一趟排序中未发生交换 ，则退出循环 
	}
	for(int i=0;i<=9;i++)
	{
		cout<<a[i]<<" "; //输出已排序数组 
	}
 } 
