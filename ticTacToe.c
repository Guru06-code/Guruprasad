#include<stdio.h>
char a[3][3]={'1','2','3','4','5','6','7','8','9'};
void loop()
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%c  ",a[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int P1,P2,player,ch,count;
    {
        loop();
        do
        {
            printf("1.P1\n2.P2\n");
            scanf("%d",&player);
            if(player==1)
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
                        printf("Make a valid move\n");
                        loop();
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
                        printf("Make a valid move\n");
                        loop();
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
                        printf("Make a valid move\n");
                        loop();
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
                        printf("Make a valid move\n");
                        loop();
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
                        printf("Make a valid move\n");
                        loop();
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
                        printf("Make a valid move\n");
                        loop();
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
                        printf("Make a valid move\n");
                        loop();
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
                        printf("Make a valid move\n");
                        loop();
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
                        printf("Make a valid move\n");
                        loop();
                        break;
                    }
                    default:
                    {
                        printf("Wrong move make a valid move\n");
                        loop();
                    }
                }
                if(a[0][0]=='X'&&a[1][1]=='X'&&a[2][2]=='X'||a[0][2]=='X'&&a[1][1]=='X'&&a[2][0]=='X'||a[0][0]=='X'&&a[0][1]=='X'&&a[0][2]=='X'||a[1][0]=='X'&&a[1][1]=='X'&&a[1][2]=='X'||a[2][0]=='X'&&a[2][1]=='X'&&a[2][2]=='X'||a[0][0]=='X'&&a[1][0]=='X'&&a[2][0]=='X'||a[0][1]=='X'&&a[1][1]=='X'&&a[2][1]=='X'||a[0][2]=='X'&&a[1][2]=='X'&&a[2][2]=='X')
                {
                   printf("Player 1 WON\n");
                   return 0;   
                }
            }
            else if(player==2)
            {
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
                        printf("Make a valid move\n");
                        loop();
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
                        printf("Make a valid move\n");
                        loop();
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
                        printf("Make a valid move\n");
                        loop();
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
                        printf("Make a valid move\n");
                        loop();
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
                        printf("Make a valid move\n");
                        loop();
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
                        printf("Make a valid move\n");
                        loop();
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
                        printf("Make a valid move\n");
                        loop();
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
                        printf("Make a valid move\n");
                        loop();
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
                        printf("Make a valid move\n");
                        loop();
                        break;
                    }
                    default:
                    {
                        printf("Wrong move make a valid move\n");
                        loop();
                    }
                }
                if(a[0][0]=='O'&&a[1][1]=='O'&&a[2][2]=='O'||a[0][2]=='O'&&a[1][1]=='O'&&a[2][0]=='O'||a[0][0]=='O'&&a[0][1]=='O'&&a[0][2]=='O'||a[1][0]=='O'&&a[1][1]=='O'&&a[1][2]=='O'||a[2][0]=='O'&&a[2][1]=='O'&&a[2][2]=='O'||a[0][0]=='O'&&a[1][0]=='O'&&a[2][0]=='O'||a[0][1]=='O'&&a[1][1]=='O'&&a[2][1]=='O'||a[0][2]=='O'&&a[1][2]=='O'&&a[2][2]=='O')
                {
                    printf("Player 2 WON\n");
                    return 0;
                }
            }
            else
            {
                printf("Only 2 players can play this game\n");
            }
        }
        while(count<9);
        printf("Match tied\n");
    }
    return 0;
}
