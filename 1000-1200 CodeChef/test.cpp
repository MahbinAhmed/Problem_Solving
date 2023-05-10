#include<iostream>
using namespace std;

int main(){
    int n;
    n = 5;
    int arr[5];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<5;i++){
        cout<<i+1<<" = "<<arr[i]<<endl;
    }
    return 0;
}