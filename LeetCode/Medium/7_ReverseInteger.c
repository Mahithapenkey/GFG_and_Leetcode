/**
 * Problem Link : https://leetcode.com/problems/reverse-integer/
 * Platform     : LeetCode
 * Difficulty   : Medium
 */

#include <bits/stdc++.h>
using namespace std;

int reverse(int x){
    int temp=x;
   long int rev_num=0;
   while(temp)
   {
    int r=temp%10;
    rev_num=(rev_num*10)+r;
    temp=temp/10;
   }
   if(rev_num>INT_MAX || rev_num < INT_MIN)
            return 0;
    return (int)rev_num;
}
