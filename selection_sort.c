#include <stdio.h>
void main (void )
{
    printf("====================== selection sort algorithm ======================\n");
    printf("======================================================================\n");
    int n ;
    printf ("enter the legnth  of the list : ");
    scanf ("%d",&n);
    int data [n];
    int i ,j; 
    printf("enter the list to be sorted :\n");
    printf("======================================================================\n");
    for ( i = 0 ; i < n ; i++ ) 
    {
        printf("value [%d] = ",i+1);
        scanf ("%d",&data[i]);
    }
    printf("======================================================================\n");
   
    /*====================== selection sort algorithm ======================*/
    for (i=0 ; i < n-1 ; i++ )
    {
        for (j=i+1 ;j<n ; j++)
        {
            if (data[i] > data[j])
            {
                int temp = data[i];
                data[i]=data[j];
                data[j]=temp;
            }
        }
    }
    printf("the list after sorting \n");
    printf("======================================================================\n");
    for ( i = 0 ; i < n ; i++ ) 
    {
        printf("value [%d] = %d \n",i+1,data[i]);
        
    }
}