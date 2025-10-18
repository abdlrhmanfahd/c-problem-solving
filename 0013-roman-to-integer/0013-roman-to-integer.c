#include <string.h>

int romanToInt(char* s) {

    int length = strlen(s);
    int output = 0;
    bool add = true;

    typedef struct {

        char letter;
        int number;

    } label;

    label arr[7] =
    { {'I', 1},
      {'V', 5},
      {'X', 10},
      {'L', 50},
      {'C', 100},
      {'D', 500},
      {'M', 1000}};

    for(int i = 0; i < length; i++)
    {
        int current = 0;
        for(int k = 0; k < 7; k++)
        {
            if(s[i] == arr[k].letter)
            {
                current += arr[k].number;
                break;
            }

        }

        int next = 0;
        for(int j = 0; j < 7; j++)
        {
            if(s[i+1] == arr[j].letter)
            {
                next += arr[j].number;
                break;
            }

        }


        if(current > next)
        {
            output += current;
        }
        else if(current < next)
        {
            output += next - current;
            i++;
            continue;
        }
        else
        {
            output += current;
        }
        //updated 
    }



    return output;
}