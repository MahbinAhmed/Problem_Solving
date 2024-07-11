#include<iostream>
using std::cin;
using std::cout;
using std::endl;

inline int min(int a, int b){
    if(a<b) return a;
    else return b;
}

void rev_str(char *ptr, int n){
    char temp;
    for(int i=0;i<(n/2);i++){
        temp = *(ptr+i);
        *(ptr+i) = *(ptr+(n-1-i));
        *(ptr+(n-1-i)) = temp;
    }
}

int main(){
    // int t_cases;
    // cin>>t_cases;
    // while (t_cases--)
    // {
    //     cout<<"Hello World"<<endl;
    // }
    // for(int i=0;i<((5/2)+1);i++){
    //     cout<<i<<endl;
    // }
    // cout<<min(5,3)<<endl;
    // }
    // int t_cases;
    // cin>>t_cases;
    // while(t_cases--){
    // int n,a;
    // cin>>n;
    // int arr[n];
    // for(int i=0;i<n;i++){
    //     cin>>a;
    //     arr[i] = a;
    // }

    // cout<<'{';
    // for(int i=0;i<n;i++){
    //     cout<<arr[i];
    //     if(i!=n-1){
    //         cout<<',';
    //     }
    // }
    // cout<<'}';
    // }
    int n;
    cin>>n;
    char arr[n+1];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    rev_str(arr, n);

    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    // int arr[5] = {34,54,24,75,3};
    // int* ptr = arr;
    // cout<<*(ptr+1)<<endl;
    return 0;
}