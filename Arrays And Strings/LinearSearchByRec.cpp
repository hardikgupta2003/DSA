#include <iostream>
using namespace std;

int search(int arr[], int size, int key)
{
    // for (int i = 0; i < size; i++)
    // {
    //     if (arr[i] == key)
    //     {
    //         return 1;
    //     }
    // }
    // return 0;

    // by recursion
    if(size==0){
        return false;
    }
    if(arr[1]==key){
        return true;
    }
    int remaining_part=search(arr+1,size-1,key);
    return remaining_part;

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

    cout<<search(arr,size,key);
}