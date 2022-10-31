#include<iostream>
 
using namespace std;
 
void merge(int start,int mid,int end,int a[])
{
    int arr[end-start+1],p=start,q=mid+1,k=0,i;
    
    for(i=start;i<=end;i++)
    {
        if( p > mid)
        {
            arr[k++]=a[q++];
        }
        else if ( q > end)
        {
            arr[k++]=a[p++];
        }
        else if(a[p]>a[q])
        {
            arr[k++]=a[p++];
        }
        else
        {
            arr[k++]=a[q++];
        }
    }
    
    for(i=start;i<=end;i++)
    {
        a[i]=arr[i-start];
    }
}
 
void mergesort(int start,int end,int a[])
{
    if(start<end)
    {
        int mid=(start+end)/2;
        mergesort(start,mid,a);
        mergesort(mid+1,end,a);
        
        merge(start,mid,end,a);
    }
}
int main()
{
    int t,l;
    cin >> t;
    
    for(l=0;l<t;l++)
    {
        int n;
        cin >> n;
        
        int a[n],i;
        
        for(i=0;i<n;i++)
        {
            cin >> a[i];
        }
        
        int start=0,end=n-1;
        
        mergesort(start,end,a);
        
        for(i=0;i<n;i++)
        {
            cout << a[i] << " ";
        }
        
        cout << endl;
    }


 return 0;
}
