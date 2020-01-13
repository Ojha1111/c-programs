#include<bits/stdc++.h>
using namespace std;
struct activity{
	int stime,endtime;
};
bool compare(activity a,activity b){
return (a.endtime < b.endtime);}

void print(activity arr[],int n){
	sort(arr,arr+n,compare);
	int cnt=1;
	int j=0;
	for(int i=1;i<n;i++)
		{
			if(arr[i].stime >= arr[j].endtime)
				{
				    cnt++;
		            j=i;   
		}
		    
		}
	cout<<cnt<<endl;
}

int main()
{
	
 int t;
    cin>>t;
    while(t--)
        {
            int n;
            cin>>n;
            activity arr[n];
            
            for(int i=0;i<n;i++)
                    cin>>arr[i].stime;
                
            for(int i=0;i<n;i++)
            	cin>>arr[i].endtime;
        
        print(arr,n);
        }	
}
