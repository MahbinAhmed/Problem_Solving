// #include<iostream>
// using namespace std;

// int main(){
//     int t_cases;
//     cin>>t_cases;
//     for(int i=0;i<t_cases;i++){
//         int n;
//         cin>>n;
//         char arr[n];
//         if(n%2==0){
//             for(int j=0;j<n;j++){
//                 if(j==0||j==3){
//                     arr[j] = '1';
//                 }
//                 else if(j==1||j==2){
//                     arr[j] = '0';
//                 }
//                 else if(j>=4&&j%2==0){
//                     arr[j] = '0';
//                 }
//                 else if(j>=4&&j%2!=0){
//                     arr[j] = '1';
//                 }
//             }
//         }
//         else if(n%2!=0){
//             for(int j=0;j<n;j++){
//                 if(j%2==0){
//                     arr[j] = '0';
//                 }
//                 else if(j%2!=0){
//                     arr[j] = '1';
//                 }
//             }
//         }
//         for(int i=0;i<n;i++){
//             cout<<arr[i];
//         }
//         cout<<endl;
//     }
//     return 0;
// }

#include<iostream>
using namespace std;

int main(){
    int t_cases;
    cin>>t_cases;
    for(int i=0;i<t_cases;i++){
        int n;
        cin>>n;
        cout<<'0';
        for(int j=0;j<n-2;j++){
            cout<<'1';
        }
        cout<<'0';
        cout<<endl;
    }
    return 0;
}