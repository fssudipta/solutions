#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_NUM 100

int main()
{
    srand(time(NULL));
    int n;
    scanf("%d", &n);
    int num[n];
    int count[MAX_NUM + 1] = {0};

    for (int i = 0; i < n; i++)
    {
        num[i] = rand() % MAX_NUM + 1;
        printf("%d\n", num[i]);
        count[num[i]]++;
    }

    printf("\nNumber frequencies:\n");
    for (int i = 0; i < n; i++)
    {
        if (count[num[i]] > 0)
        {
            printf("%d : %d\n", num[i], count[num[i]]);
            //count[num[i]] = 0;
        }
    }

    return 0;
}
