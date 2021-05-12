#include <iostream>
using namespace std;

int main(){
    int x,n;
    cin >> x >> n;
    
    long powNum = 1;

    while(n>0){
        if(x == 0){
            powNum = 0;
        }
        else{
             powNum = powNum * x;
        }
        n = n - 1;
    } 
    cout << powNum;
}