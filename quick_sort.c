#include <stdio.h>
void quick_sort (int arr [],int length );
void quick_sort_recurtion (int arr [] ,int low ,int high );
void swap(int * x, int *y );
int partition (int array[] , int low , int high );

void main (void)
{
    int n;
    int data [100];
    int i ;
    printf("enter the size of array : " );
    scanf("%d",&n);
    printf("===============================================================\n" );
    for (i=0;i<n;i++)
    {
        printf("value [%d] = ",i+1);
        scanf("%d",&data[i]);

    }
    printf("=========================================================================================\n" );
    printf("================================== after quick sorting ==================================\n" );

    quick_sort(data,n);
    for (i=0;i<n;i++)
    {
        printf("value [%d] = %d\n",i+1,data[i]);


    }

}
void quick_sort (int arr [],int length )
{
    quick_sort_recurtion(arr,0,length-1);
}

void quick_sort_recurtion (int arr [] ,int low ,int high )
{
    if(low<high)
    {
    int pivot = partition(arr, low ,high);
    quick_sort_recurtion(arr,low,pivot-1);
    quick_sort_recurtion(arr, pivot+1,high);
    }
}



 void swap(int * x, int *y )
 {
    int temp = *x;
    *x = *y;
    *y = temp;
 }

int partition (int array[] , int low , int high )
{
    int pivot = array[high];
    int i= low ;
    int j;
    for (j=low ;j<high;j++)
    {
        if(array[j]<=pivot)
        {
            swap(&array[i],&array[j]);
            i++;
        }
    }
    swap(&array[i],&array[high]);
    return i;
}