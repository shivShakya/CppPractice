#include <iostream>
using namespace std;

int main() {
	int T;
	cin >>T;
	while(T--){
	   int N;
	   cin >> N;
       for(int i = 1 ; i < N ; i++){
            N = N*i;
        }
    	cout << N <<endl;
	  }
	return 0;
}
