#include<iostream>
using std::cin;
using std::cout;
using std::endl;

int main(){
    int t_cases;
    cin>>t_cases;
    while (t_cases--)
    {
        int n,zero=0,max=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==0) zero++;
            if(arr[i]>max) max = arr[i];
        }
        if(zero==0){
            cout<<"NO"<<endl;
            continue;
        }
        int curr_ele = 0, curr_cou = zero, ne_ele = 1;
        for(int i=0;i<max;i++){
            int ne_cou=0;
            for(int j=0;j<n;i++){
                if(arr[j]==ne_ele) ne_cou++;
            }
            if(ne_cou==0){
                zero = 0;
                break;
            }
            else if(curr_cou>=ne_cou){
                curr_cou=ne_cou;
                ne_ele++;
            }
            else{
                zero = 0;
                break;
            }
        }
        if(zero==0){
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;

    }
    return 0;
}