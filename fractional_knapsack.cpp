bool cmp(struct Item a, struct Item b) 
{ 
    double r1 = (double)a.value / a.weight; 
    double r2 = (double)b.value / b.weight; 
    return r1 > r2; 
} 
double fractionalKnapsack(int W, Item arr[], int n)
{
    // Your code here
    sort(arr,arr+n,cmp);
    int curr_w = 0;
    double final = 0.0;
    for(int i=0;i<n;i++)
    {
        if(curr_w + arr[i].weight <= W)
        {
            curr_w += arr[i].weight;
            final += arr[i].value;
        }
        else
        {
            int r = W-curr_w;
            final += arr[i].value * ((double) r/arr[i].weight);
            break;
        }
    }
    return final;
}





#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct Item
{
    int value;
    int weight;
    int id;
};
bool cmp(struct Item a, struct Item b) 
{ 
    double r1 = (double)a.value / a.weight; 
    double r2 = (double)b.value / b.weight; 
    return r1 > r2; 
} 
void fractionalKnapsack(int W, Item arr[], int n)
{
    // Your code here
    
    sort(arr,arr+n,cmp);
    int curr_w = 0;
    double final = 0.0;
    for(int i=0;i<n;i++)
    {
        if(curr_w + arr[i].weight <= W)
        {
            curr_w += arr[i].weight;
            //final += arr[i].value;
            cout<<arr[i].id+1<<" ";
        }
        else
        {
            int r = W-curr_w;
            final += arr[i].value * ((double) r/arr[i].weight);
            cout<<arr[i].id+1<<" ";
            break;
        }
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,c;
    cin>>n>>c;
     Item a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i].value>>a[i].weight;
        a[i].id = i;
    }
    fractionalKnapsack(c,a,n);
    
    return 0;
}
