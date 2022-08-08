#include<iostream>
using namespace std;

int main () {
    int T, n;
    cin>>T;
    while (T--) {
        cin>>n;
        if (n%2 == 0) {
            cout<<"even\n";
        } else {
            cout<<"odd\n";
        }
    }
    return 0;
}

//Link: http://bit.ly/1-52-problem-1