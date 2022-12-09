#include <iostream>
using namespace std;

int main(){
    char arr[100] = "apple a day keeps the doctor away";
    int i=0; 
    while(arr[i] != '\0'){
        cout<<arr[i]<<endl;
        i++;
    }
    return 0;
}