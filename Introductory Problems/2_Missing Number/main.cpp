/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Paul
 *
 * Created on November 23, 2021, 3:58 PM
 */

#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
/*
 * 
 */
int main(int argc, char** argv) {
    ll n;
    ll sum=0;
    cin>>n;
    for (int i=0;i<n-1;i++){
        int x;
        cin>>x;
        sum+=x;
    }
    cout<<(n*(n+1)/2)-sum<<endl;
}

