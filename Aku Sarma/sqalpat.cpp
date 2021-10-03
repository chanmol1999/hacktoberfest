#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int prin = 1;
	
	for(int i=0; i<n; i++) {
	    if (i%2 == 0){
	        for (int i=0; i<5; i++) {
	            cout<<prin<<" ";
	            prin++;
	        }
	        cout<<endl;
	    } else {
	        int arr[5] = {};
	        for (int i=0; i<5; i++) {
	            arr[i] = prin;
	            prin++;
	        }
	        for(int i=4; i>=0; i--) {
	            cout<<arr[i]<<" ";
	        }
	        cout<<endl;
	    }
	}
	return 0;
}
