#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf(" ======================== binary search algorithm ======================== \n ");
    int n ;
    printf ("enter the legnth of list ");
    scanf("%d",&n);
    int arr [n];
    int i ;
    printf("reading the list form user :   (note : this app is working with sorted data only) \n");
    for (i=0 ; i<n ;i++)
    {
        printf ("value [%d] = ",i+1);
        scanf ("%d",& arr[i]);
    }
    printf("=========================================\n");
    int key ;
    printf("enter the number to be searched  ");
    scanf("%d",&key );
    /*********************binary search algorithm*********************/
    int lower , upper , mid ;
    lower=0;
    upper = n-1;
    int pos ;
    pos =-1;
    do
    {
        mid =( lower + upper ) / 2;
        if (arr[mid]==key)
        {
                pos = mid ;
                break;
        }
        else if (key > arr[mid])
        {
              lower = mid+1;
        }
        else
        {
                upper = mid-1 ;
        }


    }while (lower <= upper );
    printf("=========================================\n");
   if (pos == -1)
   printf (" %d is not found  \n" ,key);
   else
   printf (" %d is in the position of %d in the list you entered \n" ,key,pos+1);




    return 0;
}
