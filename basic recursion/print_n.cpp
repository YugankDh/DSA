#include <iostream>
using namespace std;

int count = 0;

void print_n(){
	if(count == 4){
		return;
	}
	cout << count<<endl;
	count++;
	print_n();
}


int main() {
    print_n();
    return 0;
}