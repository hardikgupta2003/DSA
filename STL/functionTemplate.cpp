#include<iostream>
using namespace std;

template<typename T>
T add(T a,T b){
    return a+b;
}

int main(){
    cout<<"addition : "<<add<int>(5,10);

}