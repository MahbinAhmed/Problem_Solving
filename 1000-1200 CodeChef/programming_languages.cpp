#include<iostream>
using namespace std;

int main(){
    int t_cases;
    int a,b,a1,b1,a2,b2;
    cin>>t_cases;
    for(int i=0;i<t_cases;i++){
        cin>>a>>b>>a1>>b1>>a2>>b2;
        int checked = 0;
        if(a==a1){
            if(b==b1){
            cout<<1<<endl;
            checked = 1;
        }
            else{}
        }
        else if(a==b1){
            if(b==a1){
                cout<<1<<endl;
                checked = 1;
                continue;
            }
            else{}
        }
        else if(a==a2){
            if(b==b2){
                cout<<2<<endl;
                checked = 1;
                continue;
            }
            else{}
        }
        else if(b==a2){
            if(a==b2){
                cout<<2<<endl;
                checked = 1;
                continue;
            }
            else{}
        }
        if(checked==0){
            cout<<0<<endl;
            continue;
        }
    }
    return 0;
}