#include <iostream>
using namespace std;

int main() {
	int tc, x;
    cin>>tc;
    for(int i=0;i<tc;i++){
        cin>>x;
        if(x>=2000){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
	return 0;
}
