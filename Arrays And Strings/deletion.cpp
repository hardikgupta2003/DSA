#include<iostream>
using namespace std;

int main(){

cout<<"enter the size of array : ";
int n;
cin>>n;
int arr[n];

cout<<"enter the elements of array : ";
for(int i =0;i<n;i++){
    cin>>arr[i];
}
int pos;
cout<<"enter the position where you want to delete an element : ";
cin>>pos;


int i;
for( i=0;i<n;i++){
    if(arr[i]==arr[pos-1])
    break;
}
if(i<n){
    n--;
    for(int j=i;j<n;j++){
        arr[j]=arr[j+1];
    }
}

cout<<"Element deleted successfully -> "<<endl;
cout<<"the final array : ";
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;


}