//Pair sum problem

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

    int low=0;
    int high =n-1;

    while(low<high){
        int sum = arr[high] + arr[low];
        if(sum==k){
            cout<<high<<" "<<low<<endl;
            return 0;
        }
        else if(sum<k){
            low++;
        }
        else if(sum>k){
            high--;
        }
    }
    cout<<"Non-existant sum";
    return 0;
}