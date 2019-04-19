/* Author:          Aaron Welch
 * Practice -       PEER
 * Problem Code -   TECH04
 * Created:         June 29th, 2010
 * Last Modified:   July 6th, 2010
 */

#include <algorithm>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;

bool anagram(char[],char[]);
bool sameChar(char[],char[]);

int main()
{
    int cases;  //  Number of test cases

    cin >> cases;
    
    for(int i = 0; i < cases; i++)
    {
        char str[100];
        cin >> str;

        char str2[100];
        cin >> str2;

        if(anagram(str,str2))
            cout << "YES" << endl;
        else if(!anagram(str,str2))
            cout << "NO" << endl;
    }

    return (0);
}

/*
 ******************************************************************************* 
 * This function accepts two strings as its arguments and compares them to see *
 * whether or not they are anagrams. In order to accomplish this I calculate   *
 * the total ASCII value for each string (by summing the values of the         *
 * individual letters) and compare the two totals to see whether or not they   *
 * are the same. I also test for matching length and characters                *
 * (in the 'sameChar' function).                                               *
 *******************************************************************************
 */
bool anagram(char str[100],char str2[100])
{
    bool ana;
    bool sameLength;
    int valA = 0;
    int valB = 0;

    int sizeA = strlen(str);
    int sizeB = strlen(str2);

    if(sizeA == sizeB)
    {
        sameLength = true;

        // Since length is equal, go ahead and calculate total ASCII
        for(int i = 0; i < sizeA; i++)
        {
            valA += str[i];
            valB += str2[i];
        }
    }
    else if(sizeA != sizeB)
        sameLength = false;

    /* If length isn't same, the two strings are not anagrams and there is no
     * need to test further. However, if length is the same then continue and
     * test for matching ASCII totals and matching characters.
     */
    if (sameLength)
    {
        if(valA == valB && sameChar(str,str2))
        {
            ana = true;
        }
    }
    else
        ana = false;

    return ana;
}

/*
 *******************************************************************************
 * Assuming that the two strings have the same ASCII totals and same lengths,  * 
 * this function compares them one final time to determine whether or not they *
 * contain exactly the same characters. This way we don't get an incorrect     * 
 * 'YES' for a case such as BB / AC (same length, same ASCII total, but        * 
 * different characters... Therefore not an anagram).                          * 
 *                                                                             * 
 * This function accepts two char arrays as arguments, converts them to        * 
 * vectors, sorts them, then does an element by element comparison.            *
 *******************************************************************************
 */
bool sameChar(char str[100],char str2[100])
{
    bool same;
    vector<char> a;
    vector<char> b;

    for(int i = 0; i < strlen(str); i++)
    {
        a.push_back(str[i]);
        b.push_back(str2[i]);
    }

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    for(int i = 0; i < a.size(); i++)
    {
        if(a[i] == b[i])
            same = true;
        else
        {
            same = false;
            break;
        }
    }

    return same;
}

