/*Description-
    A bitonic subarray is a subarray in which elements are first increasing and then decreasing. User enters array elements/numbers and program returns length of largest bitonic subarray.
     For example, if user enters A[] = {12, 4, 78, 90, 45, 23}, the maximum length bitonic subarray is {4, 78, 90, 45, 23} which is of length 5.
*/


/* Time COmplexity: O(n)
 Space Complexity: O(n)
Test Case:
Input:
How many elements? Enter the size:
6
Enter 6 elements 12
4
78
90
45
23
Output:
Array elements are:
12
4
78
90
45
23
Length of max length Bitonic Subarray is 5
*/
#include<stdio.h>
#include<stdlib.h>
 
int bitonic(int arr[], int n)
{
    int inc[n]; 
    int dec[n]; 
    int i, max;
 
  
    inc[0] = 1;
    dec[n-1] = 1;
 
    for (i = 1; i < n; i++)
       inc[i] = (arr[i] >= arr[i-1])? inc[i-1] + 1: 1;
 
    for (i = n-2; i >= 0; i--)
 
 
    max = inc[0] + dec[0] - 1;
    for (i = 1; i < n; i++)
        if (inc[i] + dec[i] - 1 > max)
            max = inc[i] + dec[i] - 1;

    return max;
}
 

int main()
{
    int arr[30], n;
    printf("How many elements? Enter the size:\n");
    scanf("%d", &n);
    
    printf("Enter 6 elements ");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
        
    printf("Array elements are:\n");  
    
    for(int i = 0; i < n; i++)
        printf("%d\n", arr[i]);
    printf("Length of max length Bitonic Subarray is %d", bitonic(arr, n));
    return 0;
}
