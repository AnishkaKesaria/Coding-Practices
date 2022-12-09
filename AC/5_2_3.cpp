#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int num = n;
    int sum = 0;
    
    while(num>0){
        int digit = num%10;
        sum = sum + (digit*digit*digit);
        num /= 10;
    }

    if(sum == n){
        cout<<"Armstrong Number";
    }
    else{
        cout<<"Not an Armstrong Number";
    }
    return 0;
}