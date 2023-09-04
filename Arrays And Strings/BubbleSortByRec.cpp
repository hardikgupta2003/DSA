#include <iostream>
using namespace std;

void sort(int *arr,int n){
    if(n==0 || n==1){
        return ;
    }
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
sort(arr,n-1);
}

int main(){
int n;

cout<<"enter the size of array : ";
cin>>n;

int arr[n];
cout<<"enter the elements of array : ";
for(int i=0;i<n;i++){
    cin>>arr[i];
}
sort(arr,n);
cout<<"sorted : ";
for(int i=0;i<n;i++){
cout<<arr[i];
}

}