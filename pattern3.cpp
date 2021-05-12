#include<iostream>
using namespace std;


int main(){
	int n;
   	cin >> n;
    
    int i = 1;
    while(i<=n){
        int k = i;
        int l = i;
        int j = 1;
        while(n-k > 0){
            cout << " ";
            k = k+1;
        }
        while(j <= i){
             cout << l;
             j = j + 1;
             l = l + 1;
            
         }
         cout << endl;
         i = i + 1;
    }
  
}
