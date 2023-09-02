//part 2

#include <stdio.h>
#include <stdlib.h>

// Function to add a new score to the dynamic list
int* addScore(int* scores, int* size, int newScore)
{
    // Allocate memory for the new score
    int* newScores;

    if (*size == 0)
    {
        newScores = (int*)malloc(sizeof(int));
    }
    else
    {
        newScores = (int*)realloc(scores, (*size + 1) * sizeof(int));
    }

    if (newScores == NULL)
    {
        printf("Memory allocation failed.\n");
        exit(1);
    }

    // Add the new score to the end of the list
    newScores[*size] = newScore;
    (*size)++;

    return newScores;
}

// Function to free dynamically allocated memory
void freeMemory(int* scores)
{
    free(scores);
}

int main()
{
    int* scores = NULL;
    int size = 0;
    int newScore;

    printf("Enter student scores (enter a negative number to stop):\n\n");

    while (1)
        {
            printf("\tEnter a score: ");
            scanf("%d", &newScore);

            if (newScore < 0)
            {
                break;
            }

            scores = addScore(scores, &size, newScore);
        }

    printf("\n\nStudent Scores:\n");
    int i;
    for (i = 0; i < size; i++)
    {
        printf("\t%d ", scores[i]);
    }
    printf("\n");

    // Free dynamically allocated memory
    freeMemory(scores);

getch();
    return 0;
}

