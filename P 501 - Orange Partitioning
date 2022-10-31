#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    int k=0;
    for(int i=0; i<n-1; i++)
        {
            if (a[i]<= a[n-1])
            {
                int t = a[i];
                a[i]= a[k];
                a[k++] = t;
            }
        }
        int t = a[n-1];
        a[n-1]= a[k];
        a[k] = t;
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
