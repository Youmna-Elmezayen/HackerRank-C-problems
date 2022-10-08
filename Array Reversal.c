#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) 
    {
        scanf("%d", arr + i);
    }


   int j = 0;
    int k = num - 1;
    while (k > j)
    {
        int temp = arr[j];
        arr[j] = arr[k];
        arr[k] = temp;
        
        j ++;
        k --;
    }

    for(i = 0; i < num; i++)
    {
        printf("%d ", *(arr + i));
    }

    return 0;
}
