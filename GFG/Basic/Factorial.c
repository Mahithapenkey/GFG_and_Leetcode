/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/factorial5739/1
 * Platform     : GFG
 * Difficulty   : Basic
 */

#include <bits/stdc++.h>
using namespace std;

int factorial(int n) {
    // code here
    int fact=1;
    if(n==1 || n==0)
    {
     return 1;
     return 0;
    }
    while(n)
    {
       fact*=n;
       n--;
    }
    return fact;
}

