// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <iostream>
// #include <algorithm>
// using namespace std;

// int output(int val){
//     for(int i=0;i<val;i++){
//         if(i%2==0){
//             if(i+i==val){
//                 cout<<"YES"<<endl;
//                 cout<<i<<" "<<i<<endl;
//                 return 0;
//             }
//         }
//         else{
//             continue;
//         }
//     }
//     cout<<"NO"<<endl;
//     return 0;
// }

// int main() {
//     int test_case;
//     int integer;
//     cin>>test_case;
//     for(int i=0;i<test_case;i++){
//         cin>>integer;
//         output(integer);
//     }
//     return 0;
// }

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int run_calc(int b){
    int runs_scored=0;
    int pre_run=0;
    for(int i=b;i>0;i--){
        if(i%6==0){
            runs_scored+=1;
            continue;
        }

        if(pre_run==0){
            runs_scored+=6;
            pre_run = 6;
            continue;
        }
        runs_scored+=0;
        pre_run = 0;

    }
    return runs_scored;
}

int main() {
    int ball, runs;
    cin>>ball;
    cin>>runs;
    runs = runs-1;
    int result = run_calc(ball);
    if(result<runs){
        cout<<"Lose"<<endl;
    }
    else if(result==runs){
        cout<<"Super Over"<<endl;
    }
    else{
        cout<<"Win"<<endl;
    }
    return 0;
}

// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <iostream>
// #include <algorithm>
// #include <string>
// using namespace std;


// int main() {
//     string input;
//     cin>> input;
//     int len = input.length();
//     if(len==11){
//         cout<<0<<endl;
//         exit(0);
//     }
//     int dig_remain = 11-len;
//     // cout<<pow(10, dig_remain)<<endl;
//     int result=1;
//     for(int i=0;i<dig_remain;i++){
//         result = result*10;
//     }
//     cout<<result<<endl;
//     return 0;
// }