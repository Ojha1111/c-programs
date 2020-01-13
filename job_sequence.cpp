bool cmp(Job a,Job b)
{
    return a.profit>b.profit;
}
void printJobScheduling(Job arr[], int n) 
{ 
    sort(arr,arr+n,cmp);
    int result[n];
    bool slot[n];
  for(int i=0;i<n;i++)
  slot[i]=false;
    for(int i=0;i<n;i++)
    {
        for(int j=min(arr[i].dead,n)-1;j>=0;j--)
        {
            if(slot[j]==false)
            {
                result[j] =i;
                slot[j]=true;
                break;
            }
        }
    }
    int p =0,c=0;
    for(int i=0;i<n;i++)
    {
        if(slot[i])
        {
             
           c++;
            p+=arr[result[i]].profit;
           
        }
    }
    cout<<c<<" "<<p<<" ";
    cout<<endl;
    // your code here
} 
