#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

bool inCircle(float x, float y, float r)
{
    return (x - r) * (x - r) + (y - r) * (y - r) <= r * r;
}
float randFloat()
{
    return ((double)(rand()) / RAND_MAX);
}
int main()
{
    int r = 10;
    int n = INT_MAX / 2;
    srand(time(NULL));
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        float x = randFloat() * 2 * r;
        float y = randFloat() * 2 * r;
        if (inCircle(x, y, r))
        {
            count++;
        }
    }
    double pi = 4.0 * count / n;
    printf("pi = %f\n", pi);
}
