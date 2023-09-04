#include<stdio.h>

int main(){
printf("enter the size of array : ");
int n;
scanf("%d",&n);
int arr[n];

printf("enter the elements of array : ");
for(int i =0;i<n;i++){
   scanf("%d",&arr[i]);
}

int value;
printf("enter the value which you have to insert at the beginning  : ");
scanf("%d",&value);



for(int i=n-1;i>=0;i--){
    arr[i+1]=arr[i];
   
}
 arr[0]=value;
 n++;
printf("the final sorted array : ");
for(int i=0;i<n;i++){
   printf("%d ",arr[i]);
}
 printf("\n");


return 0;
}