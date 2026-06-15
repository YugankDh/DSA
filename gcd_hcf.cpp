#include <iostream>
using namespace std;

int main() {
    int n1 = 20;
    int n2 = 470;
    int divisor = 1;

    for (int i = 1; i < n2; ++i)
    {
    	if (n2%i==0 && n1%i==0)
    	{
    	divisor = i;
    	
    	}
    	
    }
    cout<<divisor;
    return 0;
}