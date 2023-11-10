#include<iostream>
using namespace std;

int main(){
       
        int arr[] = {11,1,13,21,3,7};
        int arr2[] = {11,3,7,1,13};

        int arr1_length = sizeof(arr) / sizeof(arr[0]);
        int arr2_length = sizeof(arr2) / sizeof(arr2[0]);

        int c = 0;

        for (int i = 0 ; i < arr2_length ; i++){
                
                 for(int j = 0 ; j < arr1_length ; j++){
                        
                          if(arr2[i] == arr[j]){
                                c = c + 1;
                                break;
                          }
                 }
        }

        if ( c == arr2_length){
               cout << "sub array ";
        }else{
                cout << "not a sub array";
        }
}