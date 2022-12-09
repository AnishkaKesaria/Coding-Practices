//Check Palindrome

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    char arr[n+1];
    cin>>arr;

    bool check = 1;
    int start = 0;
    int end = n-1;

    while(start<=end){
        if(arr[start]==arr[end]){
            start++;
            end--;
        }
        else{
            check = 0;
            cout<<"Not a Palindrome";
            return 0;
        }
    }

    if(check==1){
        cout<<"Palindrome";
    }
    return 0;
}