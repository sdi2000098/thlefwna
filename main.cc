/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cstring>
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    char onomata2020[1633][300],onomata2021[1665][300];
    char thlefwna2020[1633][11],thlefwna2021[1665][11];
    char * help;
    FILE * onoma2020,*thl2020,*onoma2021,*thl2021;
    unsigned long long t2020[1633],t2021[1665];
    thl2020 = fopen("thl2020.txt","r");
    onoma2020 = fopen("onomata2020.txt","r");
    thl2021 = fopen("thlefwna2021.txt","r");
   onoma2021= fopen("onomata2021.txt","r");
   
    for (int i =0;i<1633;i++){
        fgets(onomata2020[i],300,onoma2020);
        help = new char[30];
        fgets(help,30,thl2020);
        for (int j =0,k=0;j<10 && k<30;k++){
            if ( help[k] <'0' || help[k]>'9')
                continue;
            thlefwna2020[i][j] = help[k];
            j++;
            if ( j == 10 || help[k] =='\0'){
                thlefwna2020[i][10] = '\0';
                break;
            }
        }
        delete []help;
        t2020[i] = stoll(thlefwna2020[i],nullptr,10);
    }
    for (int i = 0; i<1665;i++){
        fgets(onomata2021[i],300,onoma2021);
        help = new char[30];
        fgets(help,30,thl2021);
        for (int j =0,k=0;j<10 && k<30;k++){
            if ( help[k] <'0' || help[k]>'9')
                continue;
            thlefwna2021[i][j] = help[k];
            j++;
            if ( j == 10 || help[k] =='\0'){
                thlefwna2021[i][10] = '\0';
                break;
            }
        }
        delete []help;
        t2021[i] = stoll(thlefwna2021[i],nullptr,10);
    }
    for ( int i =0;i<1633;i++){
        bool Yparxei = false;
        for ( int j =0;j<1665;j++){
            if (t2020[i] == t2021[j]){
                Yparxei = true;
                break;
            }
        }
        if (!Yparxei)
            cout << t2020[i] << "\n" ;
    }
}
