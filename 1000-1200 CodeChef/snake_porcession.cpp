#include<iostream>
using namespace std;

int main(){
    int r;
    cin>>r;
    while (r--)
    {
        int n, valid=1,t=0,h=0;
        char last_char='0';
        cin>>n;
        char arr[n+1];
        cin.get();
        cin.get(arr, n+1);

        for(int i=0;i<n;i++){
            if(arr[i]=='.'){
                continue;
            }

            else if(last_char=='0'&&arr[i]!='H'){
                valid = 0;
                break;
            }

            else if(last_char==arr[i]){
                valid = 0;
                break;
            }

            else{
                if(arr[i]=='T'){
                    t++;
                    last_char = arr[i];
                }
                else if(arr[i]=='H'){
                    h++;
                    last_char = arr[i];
                }
            }

        }

        if(valid==1&&last_char=='T'){
            cout<<"Valid"<<endl;
        }
        else{
            cout<<"Invalid"<<endl;
        }
    }
    return 0;
}