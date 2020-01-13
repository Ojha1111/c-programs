#include<bits/stdc++.h>
using namespace std;
vector<int> v;
void sieveoferathosis(int n,int f,int second)
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
     s=f+second;
	for(int i=2;i<=n;i++)
	if(prime[i])
	{
		if(i>s)
	    {
	    	cout<<i-s<<" ";
	    	break;
		}
	    
	}
}
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int a,q;
	    cin>>a>>q;
	    sieveoferathosis(2000,a,q);  
	    cout<<endl;
	}
	
	return 0;
}
