#include<iostream>
using namespace std;
void swap(int a[],int n)
{
	for(int i=0;i<n/2;i++)
	{
		int temp=a[i];
		a[i]=a[n-i];
		a[n-i]=temp;
	}
}
int main()
{
	int a[10]={1,2,3,4,5,6,7,8,9,10},i;
	swap(a,10);
	for(i=0;i<10;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
