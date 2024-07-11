// #Unsolved

#include<iostream>
#include<cmath>
using std::cin;
using std::cout;
using std::endl;

int round_div(double a, double b){
    return ceil(a/b);
}
// int main(){
//     int t_cases;
//     cin>>t_cases;
//     while(t_cases--){
//     int n, k;
//     cin>>n;
//     cin>>k;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         int div_ans = round_div(i, k);
//         if(div_ans==0||div_ans%2==0){
//             arr[div_ans] = 1;
//             arr[(n-1)-div_ans] = 1;
//         }
//         else{

//             arr[div_ans] = 0;
//             arr[(n-1)-div_ans] = 0;
//         }
//     }
    
//     cout<<'{';
//     for(int i=0;i<n;i++){
//         cout<<arr[i];
//         if(i!=(n-1)){
//         cout<<',';}
//     }
//     cout<<'}';
//     }
//     return 0;
// }

int main(){
    int n, k;
    cin>>n>>k;

    //Initializing array of size n
    int arr[n];
    //Declaring all array elements as 0
    for(int i=0;i<n;i++){
        arr[i] = 0;
    }


    //Array printer
    cout<<'{';
    for(int i=0;i<n;i++){
        cout<<arr[i];
        if(i!=(n-1)){
        cout<<',';}
    }
    cout<<'}';
    return 0;
}