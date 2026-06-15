#include <iostream>
using namespace std;

int main() {
    int n = 153;
    int last_digit;
    int sum = 0;
    int original = n;

    while(n>0){
    	last_digit = n%10;
    	sum = sum + (last_digit*last_digit*last_digit);
    	n = n/10;
    }

    if(sum == original){
    	cout<<"Number is armstrong";
    }
    else{
    	cout<<"number is not armstrong";
    }

    return 0;
}