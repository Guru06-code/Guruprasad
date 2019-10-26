#include<stdio.h>
int main()
{
    int ch,score=0;
    printf("1) Which among the following is the capital of karnataka?\n");
    printf("1.Delhi\t\t2.Agra\n3.Bangalore\t4.Lahore\n");
    scanf("%d",&ch);
    if(ch!=3)
    {
        score--;
        printf("Wrong answer\n");
    }
    else
    {
        score+=5;
        printf("Right answer\n");
    }
    printf("2) Which among the following is a programming language?\n");
    printf("1.Anaconda\t2.B++\n3.Swift\t\t4.#code\n");
    scanf("%d",&ch);
    if(ch!=3)
    {
        score--;
        printf("Wrong answer\n");
    }
    else
    {
        score+=5;
        printf("Right answer\n");
    }
    printf("3) Which among the following is not a software?\n");
    printf("1.Motherboard\t\t2.HTML\n3.Compiler\t\t4.Application\n");
    scanf("%d",&ch);
    if(ch!=1)
    {
        score--;
        printf("Wrong answer\n");
    }
    else
    {
        score+=5;
        printf("Right answer\n");
    }
    printf("You won the quiz\n");
    printf("Your score is %d",score);
}
