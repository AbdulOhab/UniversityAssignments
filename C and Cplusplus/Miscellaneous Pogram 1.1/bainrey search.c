#include <stdio.h>
int main()
{
    int ara[] = {1, 4, 6, 8, 9, 11, 14, 15, 20, 25, 33,83, 87, 97, 99, 100};
    int low = 0;
    int high = 20;
    int mid;
    int num = 100;

    while (low <= high)
    {
        mid_ = (low+ high) / 2;

        if (num == ara[mid])
        {
            break;
        }

        if (num < ara[mid])
        {
            high = mid-1;
        }
        else
        {
            low = mid + 1;
        }

        if (low > high)
        {

            printf("%d is not in the array\n", num);
        }
        else
        {
            printf("%d is found in the array. It is the %d th element of the array\n", ara[mid], mid);
        }
    }
}
