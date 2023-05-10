// My solution
#include<iostream>
using namespace std;

int main(){
    int t_cases;
    cin>>t_cases;
    while (t_cases--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n;i++){
            int found = 0;
            for(int j=0;j<n;j++){
                if(i==j){
                    continue;
                }
                else if(arr[j]==arr[i]){
                    found = 1;
                    break;
                }
                else{
                    continue;
                }
            }
            if(found==0){
                cout<<arr[i]<<endl;
                break;
            }
            else{
                continue;
            }
        }
    }

    return 0;
}

// Other user's solution

// #include <iostream>
// using namespace std;

// int main()
// {
//     // your code goes here
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, x = 0;
//         cin >> n;
//         int *arr = new int[n];
//         for (int k = 0; k < n; k++)
//         {
//             cin >> arr[k];
//         }
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < n; j++)
//             {
//                 if (arr[i] == arr[j])
//                 {
//                     x++;
//                 }
//             }
//             if (x % 2 != 0)
//             {
//                 cout << arr[i] << endl;
//                 break;
//             }
//         }
//     }
//     return 0;
// }