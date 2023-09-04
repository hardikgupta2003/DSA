#include<iostream>
using namespace std;

int main(){
    int arr[5]={2,1,4,3};
    for(int i=0;i<4;i++){
        for (int j=i+1;j<4;j++){
            if(arr[j]<arr[i]){
                cout<<arr[j]<<endl;
            }
            else {
               cout<<"-1"<<endl;
            }
        }
       
    }
}