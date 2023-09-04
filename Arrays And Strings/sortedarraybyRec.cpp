#include<iostream>
using namespace std;

bool isSorted(int arr[],int size){
    if(size==0|| size==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        isSorted(arr+1,size-1);
    }
}


int main(){
    int arr[5]={2,3,5,7,9};
    int size = 5;

    bool ans=isSorted(arr,size);
    cout<< "ans :"<< ans << endl;
}