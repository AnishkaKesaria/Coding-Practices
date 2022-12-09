//Kadane's Algorithm

#include <iostream>
#include <climits>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int currsum = 0;
    int maxsum = INT_MIN;

    for(int i=0; i<n; i++){
        currsum += arr[i];
        maxsum = max(currsum,maxsum);
        if(currsum<0){
            currsum = 0;
        }
    }

    cout<<maxsum;
    return 0;
}