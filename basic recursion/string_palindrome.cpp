#include <iostream>
using namespace std;
#include<string>

bool palindrome(int i ,string &str){
	if(i>=str.size()/2){
		return true;
	}
	if(str[i] != str[str.size()-i-1]){
		return false;
	}
	return palindrome(i+1,str);
}

int main() {
    string str = "sdaf";
    // palindrome(0,str);
    // cout<<palindrome(0,str);
    if(palindrome(0,str)){
    	cout<<"True";	
    } 
    else{
    	cout<<"false";
    }
    

    return 0;
}