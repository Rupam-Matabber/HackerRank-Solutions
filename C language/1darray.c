#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
     int n, sum = 0;
     scanf("%d", &n);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int *arr = (int *)malloc(n * sizeof(int));
    

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    printf("%d", sum);
    free(arr);
        
    return 0;
}