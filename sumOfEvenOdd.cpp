#include <iostream>
using namespace std;

int main(){
    long n;
    cin >> n;
    int even = 0;
    int odd = 0;
    while(n > 0){
         int k = n%10;

        if(k%2 == 0){
            cout << "Even" << k << endl;
            even = k + even;
        }
        else{
            cout << "Odd" << k << endl; 
            odd = k + odd;
        }
        n = n/10;
    }
    cout << even << " " << odd;
}