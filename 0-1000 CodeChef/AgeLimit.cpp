#include <iostream>
using namespace std;

int main() {
	int tc, x, y, a;
    cin>>tc;
	for(int i=0;i<tc;i++){
	    cin>>x>>y>>a;
	    if(a>=x && a<y){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
