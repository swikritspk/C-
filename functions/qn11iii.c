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
    float sum = 0.0;
    long long fact;
    int i, j;

    for(i = 1; i <= n; i++)
    {
        fact = 1;
        for(j = 1; j <= i; j++)
        {
            fact *= j;
        }
        if(i % 2 == 1)
        {
            sum -= (float)pow(x, i) / fact;
        }
        else
        {
            sum += (float)pow(x, i) / fact;
        }
    }

    return sum;
}
