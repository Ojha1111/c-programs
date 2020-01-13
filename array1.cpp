//#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void deleteinarray(int a[],int pos)
{
	for(int i=pos;i<5;i++)
	{
		a[i]=a[i+1];
	}
}
int main()
{
	int a[5]={1,2,3,4,5},pos,i;
	cin>>pos;
	deleteinarray(a,pos);
	for(i=0;i<4;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
