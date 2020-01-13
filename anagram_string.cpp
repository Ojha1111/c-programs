#include<bits/stdc++.h>
using namespace std;
bool anagram(string,string);
int main()
{
	string s1,s2;
	cin>>s1>>s2;
	if(anagram(s1,s2)==true)
		cout<<"anagram";
	else
		cout<<"not";
	
}
bool anagram(string s1,string s2)
{
	int count[256]={0};
	
		int i;
	
	for(i=0;i<s1[i] && s2[i];i++){
	
		count[s1[i]]++;
		count[s2[i]]--;
	}
	
	if(s1[i] || s2[i])
		return false;
	
	for(int i=0;i<10;i++)
			{
			if(count[i]==0)
				return true;
			else
			return false;
}}
