#include<bits/stdc++.h>
using namespace std;
void sieveoferathosis(int a,int n)
{
	bool prime[n+1];
	memset(prime,true,sizeof(prime));
	for(int i=2;i*i<=n;i++)
	{
		if(prime[i])
		{
			for(int j=i*i;j<=n;j=j+i)
			prime[j]=false;
		}
	}
	int s=0;
	if(a==1 || a==0)
	a=2;
	
	for(int i=a;i<=n;i++)
	if(prime[i])
	{
		cout<<i<<" ";
		s=s+i;	
	}
	cout<<s<<" ";
	
}
int main()
{
	int n;
	cin>>n;
	sieveoferathosis(n,200);
}

