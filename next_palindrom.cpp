#include<bits/stdc++.h>
using namespace std;
bool prime(int n)
{
    if(n==0 || n==1)
    return false;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        return false;
    }
    return true;
}
bool palindrome(int n)
{
    int rev=0,rem,i;
    int temp=n;
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }
    if(temp==rev)
    return true;
    else
    return false;
}
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int temp=n;
	    while(true)
	    {
	        if(palindrome(temp) && prime(temp))
	        {
	        cout<<temp<<endl;
	        break;
	        }
	        temp++;
	    }
	}
	return 0;
}
