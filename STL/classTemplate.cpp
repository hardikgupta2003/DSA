#include<iostream>
using namespace std;

template<typename T,typename U>
class weight{
    private:
    T kg;
    U grams;
    public:
    void setdata(T x,U y){
        this->kg=x;
        this->grams=y;

    }
    T getdata(){
        return kg;
        
    }
    U getgrmsData(){
        return grams;
    }
};


int main(){

    weight <int,double>W;
    W.setdata(59,0.750);
    cout<<"weight of a person in Kg: "<<W.getdata() <<endl;
    cout<<"weight of a person in grams : "<<W.getgrmsData();
    

return 0;
}