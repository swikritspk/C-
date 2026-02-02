#include <stdio.h>
#include <conio.h>
#include <math.h>

float seriesSum(int x, int n);

int main()
{
    int x, n;
    float sum;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("Enter number of terms: ");
    scanf("%d", &n);

    sum = seriesSum(x, n);

    printf("Sum of the series = %f", sum);

    getch();
    return 0;
}

float seriesSum(int x, int n)
{
    float sum = 1.0;
    long long fact;
    int i, j, power;

    for(i = 1; i < n; i++)
    {
        power = 2 * i;
        fact = 1;

        for(j = 1; j <= power; j++)
        {
            fact *= j;
        }

        sum += (float)pow(x, power) / fact;
    }

    return sum;
}
