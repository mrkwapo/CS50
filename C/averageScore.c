//this program asks a user for scores and return the average score.
#include <cs50.h>
#include <stdio.h>

float average(int length, int array[]);

int main(void)
{
    //Asks user for the number of scores to declar the length of the "scores" array
    int n = get_int("Number of scores: ");

    int scores[n];

    //Using a for loop to request each nth score
    for (int i = 0; i < n; i++)
    {
        scores[i] = get_int("Score %i: ", i + 1);
    }

    //printing the average score using the function average
    printf("Average: %.1f\n", average(n, scores));
}

//Created a function to add all the scores and then divide them by the length to return the average score
float average(int length, int array[])
{
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += array[i];
    }
    return (float) sum / (float) length;
}
