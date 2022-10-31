// C++ program to sort an array
// of dates using Radix Sort

#include <bits/stdc++.h>
using namespace std;

// Utilitiy function to obtain
// maximum date or month or year
int getMax(int arr[][3],int n, int q)
{
    int maxi = INT_MIN;
    for(int i=0;i<n;i++){
        maxi = max(maxi,arr[i][q]);
    }
    return maxi;
}

// A function to do counting sort of arr[]
// according to given q i.e.
// (0 for day, 1 for month, 2 for year)
void sortDatesUtil(int arr[][3],
                int n, int q)
{
    int maxi = getMax(arr,n,q);
    int p = 1;
    while(maxi>0){
        //to extract last digit divide
        // by p then %10
        // Store count of occurrences in cnt[]
        int cnt[10]={0};
        
        for(int i=0;i<n;i++)
        {
            cnt[(arr[i][q]/p)%10]++;
        }
        for(int i=1;i<10;i++)
        {
            cnt[i]+=cnt[i-1];
        }
        int ans[n][3];
        for(int i=n-1;i>=0;i--)
        {
            int lastDigit = (arr[i][q]/p)%10;
            
            // Build the output array
            for(int j=0;j<3;j++)
            {
                ans[cnt[lastDigit]-1][j]
                =arr[i][j];
            }
            cnt[lastDigit]--;
        }
        // Copy the output array to arr[],
        // so that arr[] now
        // contains sorted numbers
        // according to current digit
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<3;j++)
            {
                arr[i][j] = ans[i][j];
            }
        }
        // update p to get
        // the next digit
        p*=10;
        maxi/=10;
    }
}

// The main function that sorts
// array of dates
// using Radix Sort
void sortDates(int dates[][3], int n)
{
    // First sort by day
    sortDatesUtil(dates, n, 0);

    // Then by month
    sortDatesUtil(dates, n, 1);
    // Finally by year
    sortDatesUtil(dates, n, 2);
}

// A utility function to print an array
void printArr(int arr[][3], int n)
{
for(int i=0;i<n;i++)
{
        for(int j=0;j<3;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

// Driver Code
int main()
{
    int N;
    cin>>N;
    int dates[N][3];
    for(int i=0;i<N;i++){
        for(int j=0;j<3;j++){
            cin>>dates[i][j];
        }
    }
    
    // Function Call
    sortDates(dates,N);
    printArr(dates,N);
    return 0;
}
