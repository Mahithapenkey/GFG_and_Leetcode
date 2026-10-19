/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/armstrong-numbers2727/1
 * Platform     : GFG
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool armstrongNumber(int n) {
        // code here
        int temp=n;
        long long int arm_sum=0;
        while(temp)
        {
            int dig=temp%10;
            arm_sum+=(dig*dig*dig);
            temp=temp/10;
            
        }
        if(arm_sum==n)
            return true;
        else
            return false;
    }
};
