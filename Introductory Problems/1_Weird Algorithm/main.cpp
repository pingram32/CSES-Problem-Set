
/* 
 * File:   main.cpp
 * Author: Paul
 *
 * Created on November 20, 2021, 12:01 PM
 */

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char** argv) {
    int long long n;
    cin>>n;
    while(n!=1){
        cout<<n<<" ";
        if(n%2){
            n=(n*3)+1;
        }
        else{
            n=n/2;
        }
    }
    cout<<n;
    return 0;
}

