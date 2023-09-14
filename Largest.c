#include<stdio.h>
int main()
{
    int arr[]={80,70,90,50,30};
    int size,max;
    printf("Given array: ");;
    size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    max=arr[0];
    for(int i=1;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("Maximum element in the array is %d",max);
    return 0;
}
