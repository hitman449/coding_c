#include <cmath>
#include<iostream>
using namespace std;

int main(){
    double basic;
    char grade;

    cin >> basic >> grade;

    int allow;
    double totalSalary;
    

    if(grade == 'A'){
        allow = 1700; 
    }
    else if(grade == 'B'){
        allow = 1500; 
    }
    else{
        allow = 1300;
    }
    totalSalary = ((basic) + ((20*basic)/100)  + ((50*basic)/100) + allow)  - ((11*basic)/100);
    cout << round(totalSalary);
}