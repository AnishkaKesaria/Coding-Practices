//Pair sum problem - Brute force

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n; 
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int k;
    cin>>k;

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]+arr[j]==k){
                cout<<"True";
                return 0;                
            }
        }
    }

    cout<<"False";
    return 0;
}
