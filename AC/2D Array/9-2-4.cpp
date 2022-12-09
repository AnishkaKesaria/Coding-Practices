//2D Matrix Search

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

    int r = 0, c = n2-1;

    while(r<n1 and c>=0){
        if(arr[r][c]==target){
            cout<<"true";
            return 0;
        }
        else if(arr[r][c]<target)
            c--;
        else if(arr[r][c]>target)
            r++;
    }

    cout<<"false";
    return 0;
}