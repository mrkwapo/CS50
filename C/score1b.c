#include <stdio.h>
#include <cs50.h>

void chart(int score);
int main(void)
{
    //Get number of scores to record from user
    const int COUNT = get_int("how many scores to record: ");
    
    //Get scores from user
    int scores[COUNT];
    for (int i = 0; i < COUNT; i++)
    {
        scores[i] = get_int("Score %i: ", i + 1);
    }
    //Chart Scores
    for (int i = 0; i < COUNT; i++)
    {
        printf("Score %i: ", i + 1);
        chart(scores[i]);   
    }  
}
//Generating bars
void chart(int score)
{
    for (int i = 0; i < score; i++)
    {
        printf("#");
    }
    printf("\n");
}
