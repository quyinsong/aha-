//桶排序 
//输入0~10的数字，从大到小排序，并打印 
#include <iostream>
int main()
{
	using namespace std;
	int book[11];
	for(int i=0;i<=10;i++)
	{
		book[i]=0;//初始化 
	}
	int n;
	cout<<"请输入将要输入数的个数n=";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int t;
		cout<<"请输入0~10的数字"<<i<<":"; 
		cin>>t; cout<<endl;
		book[t]=book[t]+1;//将数组相应位加1 
	} 
	for(int i=10;i>=0;i--)
	{
		for(int j=1;j<=book[i];j++)
		{
			cout<<i<<" ";
		}
	}
}
