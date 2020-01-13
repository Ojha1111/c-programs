#include<bits/stdc++.h>
using namespace std;
const long long MAX_SIZE = 100000001; 
vector<long long int> isprime(MAX_SIZE,true);
vector<long long int > prime;
vector<long long int> SPF(MAX_SIZE);

void sieveoferathosis(int n)
{
		isprime[0]=isprime[1]=false;
		for(long long int i=2;i<n;i++)
		{
			if(isprime[i])
			{
				prime.push_back(i);
				SPF[i]=i;
			}
			for(long long int j=0;j<prime.size() && i*prime[j] < n && prime[j] <=SPF[i] ;j++)
			{
				isprime[i*prime[j]] = false;
				SPF[i*prime[j]] = prime[j];
			}
		}
}

int main()
{
	int n;
	cin>>n;
	sieveoferathosis(n);
	for(int i=0;i<prime.size() && prime[i] <=n;i++)
	cout<<prime[i]<<" ";
}

