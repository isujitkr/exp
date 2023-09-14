#include<stdio.h>
int main(){
   int arr[5]={10,30,20,40,60};
   int ser,flag=0;
   int size=sizeof(arr)/sizeof(arr[0]);
   printf("Given array: ");
   for(int i=0;i<size;i++){
    printf("%d ",arr[i]);
   }
   printf("\n");
   printf("Enter the number you want to search: ");
   scanf("%d",&ser);
   for(int i=0;i<size;i++){
       if(arr[i]==ser){
           printf("Element is found at %d index ",i);
           flag++;
        break;
       }
}
if(flag==0){
    printf("No such element exist in the array");
}
return 0;
}
