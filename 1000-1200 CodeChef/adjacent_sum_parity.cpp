#include<iostream>
using namespace std;

int main(){
    int t_cases;
    cin>>t_cases;
    while (t_cases--)
    {
        // Taking input from user
        int n;
        cin>>n;
        int b_arr[n];
        int a_arr[n];
        for(int i=0;i<n;i++){
            cin>>b_arr[i];
        }
        
        //Creating array A from binary array B
        a_arr[0] = 1;
        for(int i=0;i<(n-1);i++){
            if(b_arr[i]==1){
                a_arr[i+1] = a_arr[i]+1;
            }
            else if(b_arr[i]==0){
                a_arr[i+1] = a_arr[i]+2;
            }
        }

        //Final result checking
        int result;
        result = a_arr[n-1]+a_arr[0];
        result = result%2;
        if(result==b_arr[n-1]){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    
}