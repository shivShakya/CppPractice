#include<iostream>
using namespace std;

int main(){

    int n,k = 0;
    cout << "Enter a Number: ";
    cin >> n;

    for (int j =2 ; j < n ; j++){
        if(n%j == 0 ){
            k = 1;
            break;
           
        }else{
            k = 2;
            
        }
    }
    if(k ==1){
        cout << "not a prime number";
    }else if(k == 2){
        cout << "Prime Number";
    }
}