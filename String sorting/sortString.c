#include <string.h> 
#include <stdio.h>

int main()
{
    char arr[20] = { 0 };
    while ((scanf("%s", &arr)) != EOF)
    {
        int length = strlen(arr);
        while (length > 1)
        {
            int exchange = 0;
            for (int i = 1; i < length; ++i)
            {
                if (arr[i] < arr[i - 1])
                {
                    char tmp = arr[i - 1];
                    arr[i - 1] = arr[i];
                    arr[i] = tmp;
                    exchange = 1;
                }
            }
            if (exchange == 0)
            {
                break;
            }
            --length;
        }
        printf("%s\n", arr);
    }

    return 0;
}