#include<string.h>
#include<iostream>

using namespace std;

class Solution {
public:
    int value =0 ;

    int romanToInt(string s) {
        int arr[100];
        for (int  i = 0; i < s.length(); i++)
        {
            if((s[i]) == 'I') arr[i] = 1;
                else if(char(s[i]) == 'V') arr[i] = 5;
                    else if(char(s[i]) == 'X') arr[i] = 10;
                        else if(char(s[i]) == 'L') arr[i] = 50;
                            else if(char(s[i]) == 'C') arr[i] = 100;
                                else if(char(s[i]) == 'D') arr[i] = 500;
                                       else  arr[i] = 1000;
        }      
        for (int  i = 0; i < s.length(); i++)
        {
            if(i + 1 == s.length())
            {
                value += arr[i];
            }
            else
            {
                int temp = arr[i];
                if(arr[i] < arr[i+1])
                    value -= temp;
                else value += temp;
            }

        }
        return value;
    }
};

int main()
{
    Solution a;
    cout << a.romanToInt("MCMXCIV");
}