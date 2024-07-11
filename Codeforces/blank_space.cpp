// https://codeforces.com/problemset/problem/1829/B
#include<iostream>
using std::cin;
using std::cout;
using std::endl;

void print_arr(int *ptr, int size){
    for(int i=0;i<size;i++){
        cout<<*(ptr+i)<<" ";
    }
    cout<<endl;
}

int main(){
    int t_cases;
    cin>>t_cases;
    while (t_cases--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){ // Taking input from the user
            cin>>arr[i];
        }

        int counter=-1, answer=0;
        for(int i=0;i<n;i++){ // Iterating through the array
            if(arr[i]==1){ // Checking whether it is blank or not
                counter=-1; // Resetting the counter if it's not blank
            }
            else{
                if(counter==-1) counter = 1; // Starting the counter
                else counter++; // Counting blank segment
                if(answer<counter) answer=counter; // Incrementing answeer
            }
        }
        // int arr_size = (sizeof(arr)/sizeof(arr[0]));
        // print_arr(arr, arr_size);
        cout<<answer<<endl;
    }
    
    return 0;
}