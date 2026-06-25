#include <iostream>
using namespace std;

//2 variables

void reverse(int l,int r,int arr[]){
	if(l>=r){
		return;
	}

	swap(arr[l],arr[r]);
	reverse(l+1,r-1,arr);
}

// 1 variable

void reverse2(int i,int arr[],int n){
	if(i>=n/2){
		return;
	}
	swap(arr[i],arr[n-i-1]);
	reverse2(i+1,arr,n);
}

int main() {
    int arr[5] = {1,2,3,4,5};
    reverse(0,4,arr);
    for(int i = 0; i< 5;i++){
    	cout<<arr[i]<<" ";
    }
    cout<<endl;
    reverse2(0,arr,5);
        for(int i = 0; i< 5;i++){
    	cout<<arr[i]<<" ";
    }


    return 0;
}