#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void bubble_sort(int arr[],int n);

int main()
{
    int arr[6]={5,7,66,8,-5,2};
    bubble_sort(arr, 6);
    int i;
    for(i=0;i<6;i++)
    printf("%d\t",arr[i]);

    return 0;
}


void bubble_sort(int a[],int n )
{
    bool sorted;
    do{
        sorted = true;
        int i;
        for(i=0;i<n-1;i++)
        {
            if(a[i]>a[i+1])
            {
                int temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
                sorted=false;
            }
        }
    }while(sorted==false);

}
