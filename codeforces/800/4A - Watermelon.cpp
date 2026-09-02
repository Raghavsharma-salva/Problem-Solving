#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	
	bool flag;
	for(int i = 2;i<n;i+=2){
	    for(int j = 2;j<n;j+=2){
	        if(i+j==n){
	            flag = true;
	            break;
	            
	        }
	        else{
	            flag = false;
	        }
	    }
	}
	
	if(flag){
	    cout<<"YES";
	}else cout<<"NO";

}
