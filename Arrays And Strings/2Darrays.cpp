#include <iostream>
using namespace std;

bool ispresent(int arr [][3],int target ,int row ,int col){
    for(int row=0;row<3;row++){
        for(int col=0;col<3;col++){
                if (arr[row][col]==target){
                    return 1;
                }
    }
    }
    return 0;
}
// printing sum column wise
void printSumCW(int arr[][3],int row,int col){
    cout<<"printing sum --> "<<endl;

for(int col=0;col<3;col++){
    int sum =0;
    for(int row=0;row<3;row++){
        sum+=arr[row][col];
    }
    cout<<sum<<" ";
}
cout<<endl;
}

// printing sum row wise
void printSumRW(int arr[][3],int row,int col){
    cout<<"printing sum --> "<<endl;

for(int row=0;row<3;row++){
    int sum =0;
    for(int col=0;col<3;col++){
        sum+=arr[row][col];
    }
    cout<<sum<<" ";
}
cout<<endl;
}

int largestrowsum(int arr[][3],int row,int col){
    int maxi=INT8_MIN;
    int rowIndex=-1;

    for(int row=0;row<3;row++){
    int sum =0;
    for(int col=0;col<3;col++){
        sum+=arr[row][col];
    }
    if(sum>maxi){
        maxi=sum;
        rowIndex=row;
    }


    }
    cout<<"the maximum sum is : "<<maxi<<endl;
    return rowIndex;
}
int main(){
int arr[3][3];
cout<<"enter the 2d array : ";
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cin>>arr[i][j];
    }
}

 
cout<<"the 2d array : ";
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
// cout<<"enter the element to search "<<endl;
// int target;
// cin>>target;
// if (ispresent(arr,target,3,3)){
//     cout<<"element found"<<endl;

// }
// else{
//     cout<<"element not found"<<endl;
// }
// printSumRW(arr,3,3);
int ansIndex=largestrowsum(arr,3,3);
cout<<"the maximum row is at index : "<<ansIndex;
}