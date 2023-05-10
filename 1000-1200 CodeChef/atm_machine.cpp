#include<iostream>
using namespace std;

int main(){
    int t_cases;
    cin>>t_cases;
    for(int i=0;i<t_cases;i++){
        int k, n;
        cin>>n>>k;
        int arr[n];
        for(int j=0;j<n;j++){
            int a;
            cin>>a;
            arr[j] = a;
        }
        for(int l=0;l<n;l++){
            int b = arr[l];
            if(b<=k){
                k = k-b;
                cout<<1;
            }
            else{
                cout<<0;
            }
        }
        cout<<endl;
    }
    return 0;
}