#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter n" << endl;
    cin >> n;
    int i = 2;
    bool divided = false;
    while(i<n){
        if(n%i == 0){
            cout << "Not Prime" << endl;
            divided = true;
        }
        i = i + 1;
    }
    if(!divided){
        cout << "Prime" << endl;
    }
}