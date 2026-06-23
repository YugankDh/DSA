#include <iostream>
using namespace std;

void print_n(int i,int n){
	if(i<1){
		return;
	}
	print_n(i-1,n);
	cout<<i<<" ";
	
}

int main() {
	int n;
	cin>>n;
	print_n(n,n);

    
    return 0;
}