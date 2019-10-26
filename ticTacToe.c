#include<stdio.h>
#include<stdlib.h>
char a[3][3]={'1','2','3','4','5','6','7','8','9'};
void loop()
{
    system("clear");
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%c  ",a[i][j]);
            if(j<2)
            printf("|  ");
        }
        printf("\n");
        if(i<2)
        printf("-------------\n");
    }
}
int main()
{
    int ch,count;
    {
        loop();
        do
        {
            printf("Player 1 make a move\n");
            scanf("%d",&ch);
            count++;
            switch(ch)
            {
                case 1:
                if(a[0][0]!='X'&&a[0][0]!='O')
                {
                    a[0][0]='X';
                    loop();
                    break;
                }
                else
                {
                    loop();
                    printf("Make a valid move\n");
                    break;
                }
                case 2:
                if(a[0][1]!='X'&&a[0][1]!='O')
                {
                    a[0][1]='X';
                    loop();
                    break;
                }
                else
                {
                    loop();
                    printf("Make a valid move\n");
                    break;
                }
                case 3:
                if(a[0][2]!='X'&&a[0][2]!='O')
                {
                    a[0][2]='X';
                    loop();
                    break;
                }
                else
                {
                    loop();
                    printf("Make a valid move\n");
                    break;
                }
                case 4:
                if(a[1][0]!='X'&&a[1][0]!='O')
                {
                    a[1][0]='X';
                    loop();
                    break;
                }
                else
                {
                    loop();
                    printf("Make a valid move\n");
                    break;
                }
                case 5:
                if(a[1][1]!='X'&&a[1][1]!='O')
                {
                    a[1][1]='X';
                    loop();
                    break;
                }
                else
                {
                    loop();
                    printf("Make a valid move\n");
                    break;
                }
                case 6:
                if(a[1][2]!='X'&&a[1][2]!='O')
                {
                    a[1][2]='X';
                    loop();
                    break;
                }
                else
                {
                    loop();
                    printf("Make a valid move\n");
                    break;
                }
                case 7:
                if(a[2][0]!='X'&&a[2][0]!='O')
                {
                    a[2][0]='X';
                    loop();
                    break;
                }
                else
                {
                    loop();
                    printf("Make a valid move\n");
                    break;
                }
                case 8:
                if(a[2][1]!='X'&&a[2][1]!='O')
                {
                    a[2][1]='X';
                    loop();
                    break;
                }
                else
                {
                    loop();
                    printf("Make a valid move\n");
                    break;
                }
                case 9:
                if(a[2][2]!='X'&&a[2][2]!='O')
                {
                    a[2][2]='X';
                    loop();
                    break;
                }
                else
                {
                    loop();
                    printf("Make a valid move\n");
                    break;
                }
                default:
                {
                    loop();
                    printf("Make a valid move\n");
                }
            }
            if(a[0][0]=='X'&&a[1][1]=='X'&&a[2][2]=='X'||a[0][2]=='X'&&a[1][1]=='X'&&a[2][0]=='X'||a[0][0]=='X'&&a[0][1]=='X'&&a[0][2]=='X'||a[1][0]=='X'&&a[1][1]=='X'&&a[1][2]=='X'||a[2][0]=='X'&&a[2][1]=='X'&&a[2][2]=='X'||a[0][0]=='X'&&a[1][0]=='X'&&a[2][0]=='X'||a[0][1]=='X'&&a[1][1]=='X'&&a[2][1]=='X'||a[0][2]=='X'&&a[1][2]=='X'&&a[2][2]=='X')
            {
               printf("Player 1 WON\n");
               return 0;   
            }
            printf("Player 2 make a move\n");
            scanf("%d",&ch);
            count++;
            switch(ch)
            {
                case 1:
                if(a[0][0]!='X'&&a[0][0]!='O')
                {
                    a[0][0]='O';
                    loop();
                    break;
                }
                else
                {
                    loop();
                    printf("Make a valid move\n");
                    break;
                }
                case 2:
                if(a[0][1]!='X'&&a[0][1]!='O')
                {
                    a[0][1]='O';
                    loop();
                    break;
                }
                else
                {
                    loop();
                    printf("Make a valid move\n");
                    break;
                }
                case 3:
                if(a[0][2]!='X'&&a[0][2]!='O')
                {
                    a[0][2]='O';
                    loop();
                    break;
                }
                else
                {
                    loop();
                    printf("Make a valid move\n");
                    break;
                }
                case 4:
                if(a[1][0]!='X'&&a[1][0]!='O')
                {
                    a[1][0]='O';
                    loop();
                    break;
                }
                else
                {
                    loop();
                    printf("Make a valid move\n");
                    break;
                }
                case 5:
                if(a[1][1]!='X'&&a[1][1]!='O')
                {
                    a[1][1]='O';
                    loop();
                    break;
                }
                else
                {
                    loop();
                    printf("Make a valid move\n");
                    break;
                }
                case 6:
                if(a[1][2]!='X'&&a[1][2]!='O')
                {
                    a[1][2]='O';
                    loop();
                    break;
                }
                else
                {
                    loop();
                    printf("Make a valid move\n");
                    break;
                }
                case 7:
                if(a[2][0]!='X'&&a[2][0]!='O')
                {
                    a[2][0]='O';
                    loop();
                    break;
                }
                else
                {
                    loop();
                    printf("Make a valid move\n");
                    break;
                }
                case 8:
                if(a[2][1]!='X'&&a[2][1]!='O')
                {
                    a[2][1]='O';
                    loop();
                    break;
                }
                else
                {
                    loop();
                    printf("Make a valid move\n");
                    break;
                }
                case 9:
                if(a[2][2]!='X'&&a[2][2]!='O')
                {
                    a[2][2]='O';
                    loop();
                    break;
                }
                else
                {
                    loop();
                    printf("Make a valid move\n");
                    break;
                }
                default:
                {
                    loop();
                    printf("Make a valid move\n");
                }
            }
            if(a[0][0]=='O'&&a[1][1]=='O'&&a[2][2]=='O'||a[0][2]=='O'&&a[1][1]=='O'&&a[2][0]=='O'||a[0][0]=='O'&&a[0][1]=='O'&&a[0][2]=='O'||a[1][0]=='O'&&a[1][1]=='O'&&a[1][2]=='O'||a[2][0]=='O'&&a[2][1]=='O'&&a[2][2]=='O'||a[0][0]=='O'&&a[1][0]=='O'&&a[2][0]=='O'||a[0][1]=='O'&&a[1][1]=='O'&&a[2][1]=='O'||a[0][2]=='O'&&a[1][2]=='O'&&a[2][2]=='O')
            {
                printf("Player 2 WON\n");
                return 0;
            }
        }
        while(count<9);
        printf("Nobody wins\n");
    }
    return 0;
}
