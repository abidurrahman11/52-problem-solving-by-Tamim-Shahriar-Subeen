#include<iostream>
using namespace std;

int main () {
    int T;
    string n;
    cin>>T;
    while (T--) {
        cin>>n;
        int lastDigit = n.length()-1;
        if (n[lastDigit]%2 == 0) {
            cout<<"even\n";
        } else {
            cout<<"odd\n";
        }
    }

    return 0;
}

//Linl: http://bit.ly/1-52-problem-2
//Here the value of n could be upto of 100 digit. We cannot take 100 digit by int or long long. So, we take it as a string. Then we divide its last digit to determine whether it is even or odd.