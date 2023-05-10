#include<iostream>
#include<string>
using namespace std;

int main(){
    int t_cases,n;
    string s;
    cin>>t_cases;
    for(int i=0;i<t_cases;i++){
        int difficult=0;
        cin>>n;
        cin>>s;
        for(int i=0;i<n;i++){
            if(s.at(i)=='a'||s.at(i)=='e'||s.at(i)=='i'||s.at(i)=='o'||s.at(i)=='u'){
                continue;
            }
            else{
                if((n-i)>=4){
                    if((s.at(i)=='a'||s.at(i)=='e'||s.at(i)=='i'||s.at(i)=='o'||s.at(i)=='u')||(s.at(i+1)=='a'||s.at(i+1)=='e'||s.at(i+1)=='i'||s.at(i+1)=='o'||s.at(i+1)=='u')||(s.at(i+2)=='a'||s.at(i+2)=='e'||s.at(i+2)=='i'||s.at(i+2)=='o'||s.at(i+2)=='u')||(s.at(i+3)=='a'||s.at(i+3)=='e'||s.at(i+3)=='i'||s.at(i+3)=='o'||s.at(i+3)=='u')){
                        continue;
                    }
                    else{
                        difficult=1;
                        break;
                    }
                }
                else{
                    break;
                }
            }
        }
        if(difficult==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}