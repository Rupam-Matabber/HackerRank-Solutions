#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, i, a;
    scanf("%d", &num);
    // arr = (int*) malloc(num * sizeof(int));
    int arr[num];
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }

    /* Write the logic to reverse the array. */
    for (int i = 0; i < num/2; i++)
    {
        a = arr[i];
        arr[i] = arr[num-i-1];
        arr[num-i-1] = a;
    }  

    for(i = 0; i < num; i++)
        printf("%d ", arr[i]);
    return 0;
}