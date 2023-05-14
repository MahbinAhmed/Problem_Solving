#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        bool ans=true;
        int day,prot=0;
        for(int i=0;i<n;i++){
            prot = prot+arr[i];
            if(prot<k){
                day=i+1;
                ans=false;
                break;
            }
            else if(prot>=k){
                prot=prot-k;
            }
        }

        if(ans){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO "<<day<<endl;
        }
    }
    return 0;
}