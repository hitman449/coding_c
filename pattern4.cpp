#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int i = 1;
    while(i<= n && n != 0){
        int k = i;
        int j = 1;
        int l = ((2*i) - 1);
        while(n-k>0){
            cout << " ";
            k = k + 1;
        }
        while(j <= l){
            cout << "*";
            j = j + 1;
        }

        cout << endl;
        i = i + 1;
    }
}