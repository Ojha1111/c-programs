
int activitySelection(int start[], int end[], int n){
    
    int c=1;
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(end[j]>end[j+1])
            {
                swap(start[j],start[j+1]);
                swap(end[j],end[j+1]);
            }
        }
    }

     i=0;
    for( j=1;j<n;j++)
    {
        if(start[j]>=end[i])
        {
            c++;
            i=j;
        }
    }
    return c;
    // Your code here
}




struct meet{
  
  int end;
  int start;
  int id;
};
bool cmp(meet a, meet b)
{
    return a.end<b.end;
}
int activitySelection(int start[], int end[], int n){
    // Your code here
    meet v[n];
    for(int i=0;i<n;i++)
    {
         v[i].start=start[i];
         v[i].end=end[i];
         v[i].id=i;
    }
    sort(v,v+n,cmp);
    int cnt=0,mx=0;
    for(int i=0;i<n;i++)
    {
        if(mx<=v[i].start)
        {
            mx=v[i].end; 
            cnt++;
        } 
      
    }
    return cnt;
}



struct meet{
  
  int end;
  int start;
  int id;
};
bool cmp(meet a, meet b)
{
    return a.end<b.end;
}
void maxMeetings(int start[], int end[], int n){
    // Your code here
    meet v[n];
    for(int i=0;i<n;i++)
    {
         v[i].start=start[i];
         v[i].end=end[i];
         v[i].id=i;
    }
    sort(v,v+n,cmp);
    /*for(int i=0; i<n; i++) {
        cout<<v[i].start<<" "<<v[i].end<<endl;
    }*/
    int cnt=0,mx=0;
    for(int i=0;i<n;i++)
    {
        if(mx<=v[i].start)
        {
            mx=v[i].end; cout<<v[i].id+1<<" ";	
        } 
      
    }
}
