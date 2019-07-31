#include <stdio.h>
#include <stdbool.h>

void bubble_sort(int arr[],int n);
void bubbleSort (int res []);

int main(void)
{
    int arr[6]={5,7,66,8,-5,2};
    bubbleSort(arr);
    int i;
    for(i=0;i<6;i++)
    printf("%d\t",arr[i]);

    return 0;
}


void bubbleSort (int res [])
{
    int temp;
    int i;
    int j;
    for(i=1;i<6;i++)
    {
        for(j=0;j<6-1;j++)
        {
            if(res[j]>res[j+1])
            {
               temp=res[j];
               res[j]=res[j+1];
               res[j+1]=temp;
            }
        }
    }
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
