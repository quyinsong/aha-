//�������� ,��С���������õ��ݹ�˼�� 
#include <iostream>
int a[10]={1,10,2,3,100,3,44,33,24,18};//����ȫ������ 
void quicksort(int left, int right);//�������� 

int main()
{
	using namespace std;
	for(int i=0;i<=9;i++)
	{
		cout<<a[i]<<" "; //���δ��������� 
	}
	cout<<endl; 
	quicksort(0,9);
	for(int i=0;i<=9;i++)
	{
		cout<<a[i]<<" "; //������������� 
	}
	cout<<endl;
	return 0; 
} 
//�������������� 
void quicksort(int left, int right)//���������� 
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
	//�ݹ����
	quicksort(left,i-1);//�����׼ֵ�������
	quicksort(i+1,right);//�����׼ֵ�Ҳ�����

}
