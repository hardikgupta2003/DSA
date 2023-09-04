#include <iostream>
using namespace std;

int checkPower(int N, int power)
{
    // int ans = 1;
    // for (int i = 0; i < power; i++)
    // {
    //     ans = ans * N;
    // }
    // return ans;

    if(power==0){
        return 1;
    }
    if(power==1){
        return N;
    }
int ans=checkPower(N,power/2);
    if(power%2==0){
        return ans*ans;
    }
    else{
        return N*ans*ans;
    }

}

int main()
{
    int N, power;
    cout << "enter the value of N : ";
    cin >> N;
    cout << endl;
    cout << "enter the power to calculate the ans : ";
    cin >> power;

    cout << " the ans is : " << checkPower(N, power);
}