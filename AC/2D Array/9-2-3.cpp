//2D Matrix Search - Brute force

#include <iostream>
using namespace std;

int main(){
    int n1,n2;
    cin>>n1>>n2;

    int arr[n1][n2];
    for(int i=0; i<n1; i++){
        for(int j=0; j<n2; j++){
            cin>>arr[i][j];
        }
    }

    int target;
    cin>>target;

    for(int i=0; i<n1; i++){
        for(int j=0; j<n2; j++){
            if(arr[i][j]==target){
                cout<<"true";
                return 0;
            }
        }
    }

    cout<<"false";
    return 0;
}

