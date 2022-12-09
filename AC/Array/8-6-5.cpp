//Maximun Circular Subarray Sum

#include <iostream>
#include <climits>
using namespace std;

int Kadane(int arr[], int n){
    int currsum = 0;
    int maxsum = INT_MIN;
    for(int i=0; i<n; i++){
        currsum += arr[i];
        maxsum = max(maxsum, currsum);
        if(currsum<0){
            currsum = 0;
        }
    }
    return maxsum;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int wrapsum = 0;
    int nonwrapsum = 0;

    nonwrapsum = Kadane(arr,n);

    int totsum = 0;
    for(int i=0; i<n; i++){
        totsum += arr[i];
        arr[i] = -arr[i];
    }
    wrapsum = totsum + Kadane(arr,n);

    int sum = max(wrapsum, nonwrapsum);
    cout<<sum;
    return 0;

}