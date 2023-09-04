#include<iostream>
#include<queue>

using namespace std;



int main(){


    deque<int> d;
    d.push_front(12);
    d.push_back(65);

cout<<"at front : "<<d.front() <<endl;
cout<<"at back : "<<d.back()<<endl;
    
    d.pop_back();
    
cout<<"at front : "<<d.front() <<endl;
cout<<"at back : "<<d.back()<<endl;

    return 0;
}