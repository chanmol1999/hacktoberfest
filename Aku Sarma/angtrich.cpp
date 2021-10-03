#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a, b, c;
	cin>>a>>b>>c;
	
	if ((a+b+c == 180) && (a+b>c || b+c>a || c+a>b) && (a>0 && b>0 && c>0)) {
	    cout<<"YES";
	} else {
	    cout<<"NO";
	}
	return 0;
}
