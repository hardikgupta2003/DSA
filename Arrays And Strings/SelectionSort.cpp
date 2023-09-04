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
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                // int temp = arr[j];
                // arr[j] = arr[i];
 //               // arr[i] = temp;
                    swap(arr[i],arr[j]);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}