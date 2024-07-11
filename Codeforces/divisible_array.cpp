// https://codeforces.com/problemset/problem/1828/A
#include<iostream>
using std::cin;
using std::cout;
using std::endl;

int main(){
    int t_cases;
    cin>>t_cases;
    while (t_cases--)
    {
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            cout<<(i+1)*2<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}