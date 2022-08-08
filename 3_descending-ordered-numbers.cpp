#include<iostream>
using namespace std;

int main () {
    int n = 0;
    for (int i = 1000; i >= 1; i--) {
        cout<<i<<"\t";

        n++;
        if (n%5 == 0) {
            cout<<"\n";
        }
    }
    return 0;
}

//Link: http://bit.ly/1-52-problem-3
//We used a variable n to make a new line after printing 5 numbers.