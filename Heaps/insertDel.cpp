#include<iostream>
using namespace std;
class heap{
public:
int arr[100];
int size;
void insert(int val){
    size=size+1;
    int index=size;
    while(index!=0){
        int parent=index/2;
        if(arr[parent]<arr[index]){
            swap(arr[parent],arr[index]);
        }
        else{
            return;
        }
    }
}

};
int main(){

  heap h;
  h.insert(55);
  return 0;
}