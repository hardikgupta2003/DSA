#include<iostream>
#include<queue>

using namespace std;

int main(){


    queue<int> q;
    q.push(11);
    q.push(34);
    q.push(98);
    q.pop();

    if(q.empty()){
        cout<<"queue is empty : "<<endl;
    }
    else{
        cout<<"queue is not empty : "<<endl;
    }
  cout<<q.size()<<endl;


    return 0;
}