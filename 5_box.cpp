#include <iostream>
using namespace std;
int main () {
    int T, N;
    cin>>T;
    while (T--) {
        cin>>N;
        for (int i=0; i< N; i++) {
            for (int j=0 ; j<N; j++) {
                cout<<"*";
            }
            cout<<"\n";
        }
        cout<<"\n";
    }
    return 0;
}

//Link: http://bit.ly/1-52-problem-5