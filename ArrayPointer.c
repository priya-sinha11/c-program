#include<stdio.h>
int main()
{
    int arr[] = {3,5,7,8,9};
    int* p = arr;
    printf("\n\n The address of first element %d",&arr[0]);
    printf("\n\n The address of first element %d",arr);
    p++;
    printf("\n\n The value of address of first element in array %d",arr[0]);
    printf("\n\n The value of address of first element in array %d",*(arr));
    printf("\n\n The value of address of first element in array %d",*(&arr[0]));
    return 0;
}
