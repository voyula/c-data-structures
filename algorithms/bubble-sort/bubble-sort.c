#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int sort[])
{
    for (int i = 0; i < 5; i++) {
        printf("%d ", sort[i]);
    }
    printf("\n");

    for (int i = 0; i < 5; i++) {
        for (int j = 1; j < 5 - i; j++) {
            if (sort[j - 1] > sort[j]) {
                int temp = sort[j];
                sort[j] = sort[j - 1];
                sort[j - 1] = temp;
            }
        }
    }

    for (int i = 0; i < 5; i++) {
        printf("%d ", sort[i]);
    }
}

int main()
{
    int sort[] = {1, 9, 5, 81, 10};
    bubbleSort(sort);

    return 0;
}
