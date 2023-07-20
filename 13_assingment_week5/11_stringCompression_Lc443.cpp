#include <iostream>
#include <vector>
#include <numeric>
#include <string>
#include <algorithm>

using namespace std;

int compress(vector<char> &chars)
{
    int index = 0;
    int count = 1;
    char prev = chars[0];

    for (int i = 1; i < chars.size(); i++)
    {
        if (chars[i] == prev)
        {
            count++;
        }
        else
        {   
            chars[index++] = prev;
            if (count > 1)
            {
                int start = index;
                while (count)
                {
                    chars[index++] = count % 10 + '0';
                    count /= 10;
                }

                reverse(chars.begin() + start, chars.begin() + index);

                // chars[index++] = count;
            }
            prev = chars[i];
            count = 1;
        }
    }

    chars[index++] = prev;
    if (count > 1)
    {
        int start = index;        
        while (count)
        {
            chars[index++] = count % 10 + '0';
            count /= 10;
        }
        reverse(chars.begin() + start, chars.begin() + index);
    }
    return index;
}

int main()
{

    

    return 0;
}