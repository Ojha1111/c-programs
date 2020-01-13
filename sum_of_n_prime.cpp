#include<bits/stdc++.h>
using namespace std;

bool is_prime(int n)
{
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}


bool k_prime_sum(int n, int k)
{
    if(n<2*k)
        return false;
    if(k==1)
        return is_prime(n);
    if(k==2)
    {
        if(n%2==0)
            return true;
        return is_prime(n-2);
    }
    return true;
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
	    int k;
	    cin>>k;
	    cout<<k_prime_sum(n,k)<<endl;
	}
	return 0;
}
