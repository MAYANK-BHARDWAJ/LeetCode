/*
 Author:     Annie Kim, anniekim.pku@gmail.com
 Date:       Apr 29, 2013
 Update:     Jul 19, 2013
 Problem:    Valid Palindrome
 Difficulty: Easy
 Source:     http://leetcode.com/onlinejudge#question_125
 Notes:
 Given a string, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.
 For example,
 "A man, a plan, a canal: Panama" is a palindrome.
 "race a car" is not a palindrome.
 Note:
 Have you consider that the string might be empty? This is a good question to ask during an interview.
 For the purpose of this problem, we define empty string as valid palindrome.

 Solution: traverse from both side.
 */
#include <cctype> // needed for isalnum(), isupper() and tolower().

class Solution {
public:
    bool isPalindrome(string s) {
        int stringLength = l;
        for (int i = 0, i < l/2; ++i)
        {
             if (tolower(s[i]) != tolower(s[l-i-1]))
                 return false;
        }
        return true;
    }
};
