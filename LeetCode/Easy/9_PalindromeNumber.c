/**
 * Problem Link : https://leetcode.com/problems/palindrome-number/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int x) {
    if(x<0)
        return false;
    long int rev_num=0;
    int temp=x;
    while(temp)
    {
        int dig=temp%10;
        rev_num=(rev_num*10)+dig;
        temp=temp/10;
    }
    if(rev_num==x)
        return true;
    else
        return false;
}
