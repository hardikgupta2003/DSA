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

int value;
cout<<"enter the value which you have to insert  : ";
cin>>value;
int pos;
cout<<"enter the postion where you want to insert :  ";
cin>>pos;

for(int i=n-1;i>=0;i--){
    arr[i+1]=arr[i];
   
}
 arr[0]=value;
 n++;
cout<<"the final sorted array : ";
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;

}