// #Unsolved

#include<iostream>
using std::cin;
using std::cout;
using std::endl;

int main(){
    int t_cases;
    cin>>t_cases;
    while(t_cases--){
    int n;
    cin>>n;
    if(n==0){
        cout<<0<<endl;
        continue;
    }
    else if(n==1){
        cout<<1<<endl;
        continue;
    }
    int arr[n];
    int a,ind=0;
    for(int i=0;i<n;i++){
        cin>>a;
        if(i==0||i==1){
            arr[ind] = a;
            ind++;
        }
        else if(a==arr[0]){
            arr[ind] = a;
            ind++;
        }
        else if(a<arr[0]){
            for(int j=1;j<i;j++){
                if(arr[j]>arr[0]&&arr[j]<=a){
                    arr[ind] = a;
                    ind++;
                }
            }
        }
        else if(a==arr[i-1]){
            arr[ind] = a;
            ind++;
        }
        else if(a>arr[i-1]){
            if(arr[i-1]<arr[0]&&a<=arr[0]){
                arr[ind] = a;
                ind++;
            }
            else if(arr[i=1]>arr[0]){
                arr[ind] = a;
                ind++;
            }
        }
    }

    cout<<'{';
    for(int i=0;i<n;i++){
        cout<<arr[i];
        if(i!=n-1){
            cout<<',';
        }
    }
    cout<<'}';
    }
    return 0;
}