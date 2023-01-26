#include <stdio.h>
int main()
{
    int arr[] = {5, 6, 1, 2, 3, 4, 5, 4, 3, 2, 0, 1, 2, 3, -2, 4};
    int n = sizeof(arr) / sizeof(int);

    int maxPeaklen = 0;
    for (int i = 1; i <= n - 2; i++)
    {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
        {

            // cal the length of left half
            int l = i - 1;

            int leftLen = 1;
            while (l > 0 && arr[l] > arr[l - 1])
            {
                l--;
                leftLen++;
            }

            int rightLen = 1;
            i++;
            while (i <= n - 2 && arr[i] > arr[i + 1])
            {
                i++;
                rightLen++;
            }
            
            int currentLen = leftLen + rightLen + 1;
            if (currentLen > maxPeaklen)
                maxPeaklen = currentLen;
        }
    }
    printf("\nMax Peak Length is: %d", maxPeaklen);
}