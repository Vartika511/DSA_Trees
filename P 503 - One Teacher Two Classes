#include <stdio.h>
#include <stdlib.h>
 
int main(void)
{
    int i, n, j, k;
    
    scanf("%d", &n);
    int arr1[n];
    
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    
    scanf("%d", &k);
    int arr2[k];
    
    for (j = 0; j < k; j++)
    {
        scanf("%d", &arr2[j]);
    }
    int arr3[n + k];
    i = j = 0;
    int in;
    for (in = 0; in < n + k; in ++)
    {
        if (i < n && j < k)
        {
            if (arr1[i] < arr2[j])
            {
                arr3[in] = arr1[i];
                i++;
            }
            else
            {
                arr3[in] = arr2[j];
                j++;
            }
        }
        else if (i < n)
        {
            arr3[in] = arr1[i];
            i++;
        }
        else
        {
            arr3[in] = arr2[j];
            j++;
        }
    }
   
    for (in = 0; in < n + k; in++)
    {
        printf("%d ", arr3[in]);
    }
    printf("\n");
    return 0;
}
