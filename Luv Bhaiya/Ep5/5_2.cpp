//Check if string is a palindrome

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1;
    cin>>s1;
    int s = 0;
    int e = s1.size() - 1;
    while(s<=e)
    {
        if(s1[s] != s1[e])
        {
            cout<<"Not a palindrome";
            return 0;
        }
        else
        {
            s++;
            e--;
        }
    }
    cout<<"This string is a palindrome";
    return 0;
}