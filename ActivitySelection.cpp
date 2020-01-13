#include<bits/stdc++.h>
using namespace std;
struct 	Activity
{
	int start;
	int finish;
};
bool compare(Activity a,Activity b)
{
	return (a.finish<b.finish);
}
void printMax(Activity a[],int n)
{
	sort(a,a+n,compare);
	int i=0;
	cout<<"( "<<a[i].start<<"  "<<a[i].finish<<" ),  ";
	for(int j=1;j<n;j++)
	{
		if(a[j].start>=a[i].finish)
		{
			cout<<"( "<<a[j].start<<"  "<<a[j].finish<<" ),  ";
			i=j;
		}		
	}	
}
int main()
{
	 Activity arr[] = {{5, 9}, {1, 2}, {3, 4}, {0, 6},{5, 7}, {8, 9}}; 
    int n = sizeof(arr)/sizeof(arr[0]);
    printMax(arr, n); 
}
