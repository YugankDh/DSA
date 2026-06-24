// paramerterized
#include <iostream>
using namespace std;

void sum_n(int i, int sum){
	if(i<1){
		cout<<sum<<endl;
		return;
	}

	sum_n(i-1,sum+i);
}
int sum_n2(int n2){
 	if(n2==0){
 		return 0;
 	}

 	return n2 + sum_n2(n2-1);

 }


int main() {
    int n;
    cin>>n;
    sum_n(n,0);
    cout<<sum_n2(n);
    return 0;
}

//functional

