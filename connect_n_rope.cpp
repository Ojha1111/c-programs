#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    long long int n;3bb b
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    long long int result=0;
	    priority_queue<long long int , vector<long long int> , greater <int> > p (a,a+n);
	    while(p.size()>1)
	    {
	        int f = p.top();
	        p.pop();
	        int s = p.top();
	        p.pop();
	        result += f+s;
	        p.push(f+s);
	    }
	    cout<<result<<endl;
	}
	return 0;
}
