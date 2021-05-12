#include <iostream>
using namespace std;

int main(){
    int start, end , size;
    cin >> start >> end >> size; 

    while(start <= end){
        int celcius = ((start - 32) * 5)/9;
        cout << start << " " << celcius << endl;
        start = start + size;  
    }
}