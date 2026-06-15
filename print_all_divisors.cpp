#include <iostream>
using namespace std;

// int main() {
    
//     int n = 36;
    

//     for (int i = 1; i <= n; i++)
//     {
//     	if(n%i == 0){
//     		cout<<i<<" ";
//     	}
//     }

//     return 0;
// }

// optimised approach

int main(){
    int n = 17;
    int cnt = 0;
    for (int i = 1; i*i <= n; i++)
    {               
        if(n%i==0){
            cnt++;
            if ((n/i)!=i)
            {
                cnt++;
            }
        }
    }
    if(cnt==2){
        cout<<"prime";
    }
    else{
        cout<<"not prime";
    }
}