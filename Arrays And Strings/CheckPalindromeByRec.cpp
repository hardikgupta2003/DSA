#include <iostream>
using namespace std;

bool check(string str,int i,int j){
    if(i>j){
    return true;

    }
    if(str[i]!=str[j]){
        return false;
    }
    else{
        return  check(str,i+1,j-1);;
    }
   
}

int main(){
    cout<<"enter the string to check palindrome : ";
string name;
cin>>name;
int ans = check(name,0,name.length()-1);

cout<<"string : "<<name<<endl<<"answer: "<<ans;

}