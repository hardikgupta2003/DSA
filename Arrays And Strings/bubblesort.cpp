#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the value of n : ";
    cin >> n;
    int arr[n];
    cout << "enter the array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
int counter=0;
while(counter<n){
    for(int i=0;i<n-counter;i++){
        if(arr[i]>arr[i+1]){
            int temp=arr[i+1];
            arr[i+1]=arr[i];
            arr[i]=temp;
        }
    }
    counter++;
}
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}