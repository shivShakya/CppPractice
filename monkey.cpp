#include <iostream>
using namespace std;

int main(){

    int hands,legs,eyes;
   for (;;){
    // legs
    cout << "\nHow much hands? : ";
    cin >> hands;
    // hands
    cout << "\nHow much legs? : ";
    cin >> legs;
    // eyes
    cout << "\nHow much eyes? : ";
    cin >> eyes;

    if( hands == 2 && legs == 2 && eyes == 2){
        cout<< "Monkey h ";
    }else{
        cout << "Koi aur janwar h bhai";
    }

   }
    return 0;
}
