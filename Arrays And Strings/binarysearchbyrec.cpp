#include <iostream>
using namespace std;

void print(int arr[],int s,int e){
    for(int i = s;i<e;i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;
}

int BinarySearch(int *arr,int s,int e,int key){
    if(s>e){
        return false;
    }
   print(arr,s,e);

    
    int mid=(s+e)/2;
   cout<<"value of arr mid is : "<<arr[mid]<<endl;
     if (arr[mid]==key){
            return true;
        }
    if(arr[mid]<key){
       return BinarySearch(arr,mid+1,e,key);
    }
    else{
         return BinarySearch(arr,s,mid-1,key);
    }

    
   
}

int main()
{
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int key;
    cin >> key;

    cout<<BinarySearch(arr,0,size,key);
}