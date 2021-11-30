/* 
 * File:   main.cpp
 * Author: Paul
 *
 * Created on November 30, 2021, 9:30 AM
 */

#include <bits/stdc++.h>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    vector<string> v;
    string c;
    
    cin>>c;
    
    char temp='1';
    int count=0, max=-1;
    for(int i=0;i<c.size();i++){
        if(c[i]!=temp){
            temp=c[i];
            count=0;
            count++;
        }
        else{
            count++;
        }
        if(count>max){
            max=count;
        }
    }
    cout<<max;
    return 0;
}

