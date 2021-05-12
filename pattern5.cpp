#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int i = 1;
    int j = 1;

    while(i<=n){
        j = 1;
        while(j<=n){
            cout << n;
            j++;
        }
        cout << endl;
        i++;
    }
}