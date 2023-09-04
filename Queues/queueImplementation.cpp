#include<iostream>
// #include<queue>

using namespace std;
class Qqueue{
   
    int *Q;
   int size;
    int qfront;
    int qrear;
 public :
Qqueue(){
     size =5;                   
    Q=new int[size];                                                       
    qfront=0;
    qrear=0;
}
    bool isEmpty() {
        if(qfront == qrear) {
            return true;
        }
        else
        {
            return false;
        }
    }
    int front() {
        if(qfront == qrear) {
            return -1;
        }
        else
        {
            return Q[qfront];
        }
    }
void push(int num){
   
    if(qfront==size){
         cout<<"queue overflow "<<endl;
    }
    else{
       
        Q[qrear]=num;
        qrear++;
    }
}
 int dequeue() {
        if(qfront == qrear) {
            return -1;
        }
        else
        {	int ans = Q[qfront];
            Q[qfront] = -1;
            qfront++;
            if(qfront==qrear){
                qfront = 0;
                qrear = 0;
            }
         return ans;
        }
    }

};
int main()
{
 Qqueue q;
 
// q.push(748);
// q.push(89);
cout<<"queue is empty or not "<<q.isEmpty();

}
