//Ͱ���� 
//����0~10�����֣��Ӵ�С���򣬲���ӡ 
#include <iostream>
int main()
{
	using namespace std;
	int book[11];
	for(int i=0;i<=10;i++)
	{
		book[i]=0;//��ʼ�� 
	}
	int n;
	cout<<"�����뽫Ҫ�������ĸ���n=";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int t;
		cout<<"������0~10������"<<i<<":"; 
		cin>>t; cout<<endl;
		book[t]=book[t]+1;//��������Ӧλ��1 
	} 
	for(int i=10;i>=0;i--)
	{
		for(int j=1;j<=book[i];j++)
		{
			cout<<i<<" ";
		}
	}
}
