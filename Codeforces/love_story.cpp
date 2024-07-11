// https://codeforces.com/problemset/problem/1829/A
#include<iostream>
#include<string>
using std::cin;
using std::cout;
using std::endl;

int main(){
    int t_cases;
    cin>>t_cases;
    while (t_cases--)
    {
        char str[11];
        char m_str[11] = "codeforces";
        for(int i=0;i<10;i++){ // Taking string from the user
            cin>>str[i];
        }
        int answer=0;
        for(int i=0;i<10;i++){
            if(m_str[i]!=str[i]) answer++; // Matching user's string with the main string
        }
        cout<<answer<<endl;
    }
    return 0;
}