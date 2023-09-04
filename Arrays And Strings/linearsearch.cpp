#include<iostream>
using namespace std;
int linearsearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}
int main(){
    int n;
    cout<<"enter the value of n : ";
    cin>>n;
    int arr[n];
    cout<<"enter the array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"enter the value of key: ";
    cin>>key;
    cout<<linearsearch(arr,n,key)<<endl;
    return 0;
}