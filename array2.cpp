#include<iostream>
using namespace std;
bool linearsearch(int a[],int val)
{
	for(int i=0;i<5;i++)
	{
		if(a[i]==val)
		{
			return true;
		}
	}
	return false;
}
int main()
{
	int a[5]={1,2,3,4,5},val;
	cin>>val;
	if(linearsearch(a,val))
	{
		cout<<"Item found";
	}
	else
	{
		cout<<"Item not found";
	}
	return 0;
}
