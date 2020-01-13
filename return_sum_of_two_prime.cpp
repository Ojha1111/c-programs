#include<bits/stdc++.h>
using namespace std;
void sieveoferathosis(int n)
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

	
	for(int i=2;i<=n;i++)
	if(prime[i] && prime[n-i])
	{
		cout<<i<<" "<<n-i<<" ";
		break;
	}
}
int main()
 {
	//code
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n%2==0)
        {
            sieveoferathosis(n);
        }
        cout<<endl;
    }
	return 0;
}
