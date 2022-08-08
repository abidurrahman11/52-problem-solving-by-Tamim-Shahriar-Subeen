#include<iostream>
using namespace std;

int main () {
    int T, N, i, j;
    cin>>T;
    for (i = 1; i <= T; i++) {
        cin>>N;

        cout<<"Case "<<i<<":";

        for (j = 1; j <= N; j++) {
            if (N%j == 0) {
                cout<<" "<<j;
            }
        }
        cout<<"\n";
    }
    return 0;
}


//Link: http://bit.ly/1-52-problem-4