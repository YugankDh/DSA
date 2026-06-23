#include <iostream>
using namespace std;


void print_n(int N){

	if(N==0){
		return;
	}

	cout<<N << " ";
	print_n(N-1);
}


int main() {
	int N;
	cin>>N;
    print_n(N);

    return 0;
}