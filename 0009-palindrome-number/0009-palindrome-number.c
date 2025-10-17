#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPalindrome(int x) {

    if(x < 0)
    {
        return false;
    }

    int digits = 0; 
    int num = x;

    if(num == 0)
    {
        digits = 1;
    }
    else
    {
         while (num != 0) {
        num /= 10;
        digits++; }
    }

    int arr[digits];
    int count = 0;

    for(int i = 0; i < digits; i++)
    {
        arr[i] = (x / (int)pow(10, digits - i - 1)) % 10;
    }

        for(int i = 0, j = digits-1 ; i < j; i++, j--)
        {
            if(arr[i] == arr[j])
            {
                count++;
            }
            
        }
        if(count == (digits/2))
        {
            return true;
        }
        else
        {
            return false;
        }


    return false;
}