#include <stdio.h>
#include <math.h>
#include "source.h"

void multi_table(unsigned int xsize, unsigned int ysize)
{
    for (unsigned int i = 1; i <= ysize; i++)
    {
        for (unsigned int j = 1; j <= xsize; j++)
        {
            printf("%4d", i * j);
        }
        printf("\n");
    }
}

void draw_triangle(unsigned int size)
{
    for (unsigned int row = 0; row < size; row++)
    {
        for (unsigned int col = 0; col < size; col++)
        {
            if (col >= size - row - 1)
                printf("#");
            else
                printf(".");
        }

        printf("\n");
    }
}

double distance(int x, int y)
{
    return sqrt(x * x + y * y);
}

void draw_ball(unsigned int radius)
{
	for (unsigned int i = 0; i < 2 * radius + 1; i++) {
		for (unsigned int j = 0; j < 2 * radius + 1; j++) {
			if (distance(i - radius, j - radius) <= radius) {
				printf("*");
			} else {
				printf(".");
			}
		}
		printf("\n");
	}
}