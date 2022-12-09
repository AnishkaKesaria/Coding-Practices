//Cumulative sum approach for maxsum of a subarray

#include <iostream>
using namespace std;

int largestsum(int arr[], int n){
    int csum[n];
    csum[0] = arr[0]; 
    for(int i=1; i<n; i++){
        csum[i] = csum[i-1] + arr[i];
    }

    int maxsum = 0;
    int sum = 0; 
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            sum = csum[j] - csum[i-1];
            if(sum>maxsum){
                maxsum = sum;
            }
        }
    }

    return maxsum;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[n];
    }
    cout<<largestsum(arr,n);
    return 0;
}
