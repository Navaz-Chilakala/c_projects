#include<stdio.h>
#include<stdlib.h>
#include <time.h>
#include<conio.h>
char p1[50], p2[50];
char square[10] = {'o','1','2','3','4','5','6','7','8','9'};
int checkwin();
void board();
void tic_tac_toe()
{
    int player=1,i,choice;char mark;
    do
    {
        board();
        player=(player%2)?1:2;

        printf("Player %d, enter a number:  ", player);
        scanf("%d",&choice);

        mark=(player==1)?'X':'O';

        if(choice==1 && square[1] =='1')
        {
        	square[1]=mark;
		}
        else if(choice==2 && square[2]=='2')
        {
        	square[2] = mark;
		}
            
            
        else if(choice==3 && square[3]=='3')
        {
        	square[3] = mark;
		}
        else if(choice==4 && square[4]=='4')
        {
        	square[4]=mark;
		}
            
        else if(choice==5 && square[5]=='5')
        {
        	square[5]=mark;
		}
            
            
        else if(choice==6 && square[6]=='6')
        {
        	square[6] = mark;
		}
            
            
        else if(choice==7 && square[7]=='7')
        {
        	square[7] = mark;
		}
            
            
        else if(choice==8 && square[8]=='8')
        {
        	square[8] = mark;
		}
            
            
        else if(choice==9 && square[9]=='9')
        {
        	square[9] = mark;
		}
            
        else
        {
            printf("Invalid move ");
            player--;
            getch();
        }
        i=checkwin();
        player++;
    }while (i==-1);
    
    board();
    
    if (i==1)
        printf("==>\aPlayer %d win ",--player);
    else
        printf("==>\aGame draw");

    getch();


}
int checkwin()
{
    if(square[1]==square[2] && square[2]==square[3])
    {
    	return 1;
	}
        
        
    else if(square[4]==square[5] && square[5]==square[6])
    {
    	return 1;
	}
        
        
    else if(square[7]==square[8] && square[8]==square[9])
    {
    	return 1;
	}
        
        
    else if(square[1]==square[4] && square[4]==square[7])
    {
    	return 1;
	}
        
        
    else if(square[2]==square[5] && square[5]==square[8])
    {
    	return 1;
	}
        
        
    else if(square[3]==square[6] && square[6]==square[9])
    {
    	return 1;
	}
        
        
    else if(square[1]==square[5] && square[5]==square[9])
    {
    	return 1;
	}
        
        
    else if(square[3]==square[5] && square[5]==square[7])
    {
    	return 1;
	}
        
        
    else if(square[1]!='1' && square[2]!='2' && square[3]!='3' && square[4]!='4' && square[5]!='5' && square[6]!='6' &&square[7]!='7'&& square[8] != '8' && square[9] != '9')
    {
    	return 0;
    	
	}
    else
    {
    	return  - 1;
	}
}
void board()
{
    system("cls");
    printf("\n\n\tTic Tac Toe\n\n");

    printf("Player 1 (X) %s -  Player 2 (O) %s\n\n\n",p1,p2);


    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", square[1], square[2], square[3]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", square[4], square[5], square[6]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", square[7], square[8], square[9]);

    printf("     |     |     \n\n");
}
int target;
int check(int x)
{
	if(x>=target)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void Rolling_A_Die()
{
    
   int target;
   printf("enter 2 player names:\n");
    scanf("%s%s",p1,p2);
    printf("enter a target:\n");
    scanf("%d",&target);
    int p1score=0, p2score=0;
    int count=1;
    while(p1score<target && p2score<target)
    {
        int temp=rand()%6+1;
        p1score=p1score+temp;
        printf("\npass %d %s rolled die is %d",count,p1,temp);
        temp=rand()%6+1;
        printf("\npass %d %s rolled die is %d",count,p2,temp);
        p2score=p2score+temp;
        count++;
    }
    if(p1score<p2score)
    {
        printf("\n%s is the winner",p1);
    }
    else if(p1score>p2score)
    {
        printf("\n%s is the winner",p2);
    }
    else{
    	printf("\nboth players %s and %s scored equal in equal no of pasess",p1,p2);
	}
    
}
void RockPaperScissor()
{
	int R=1;
    int P=2;
    int S=3;
    int i;
    int Pscore =0;
    int Cscore =0;
    int choice;
    srand(time(NULL));
    int count;
    printf("\nenter no of times you want to play :");
    scanf("%d",&count);
    
    printf("Rock=1 , Paper= 2, and Scissors= 3\n");

    for(i=0;i<count;i++)
	{
        printf("Enter your choice:");
        scanf("%d",&choice);
            int computer=rand()%3+1;
            if(choice==1)
			{
                if(computer==1)
				{
                    printf("Draw\n");
                }
                if(computer==2)
				{
                    printf("Computer Wins!\n");
                    Cscore= Cscore + 1;
                }
                if(computer==3)
				{
                    printf("Player Wins\n");
                    Pscore = Pscore + 1;
                }
            }
              else  if(choice==2)
			  {
                    if(computer==2)
					{
                        printf("Draw\n");
                    }
                    if(computer==3)
					{
						printf("Computer Wins!\n");
                        Cscore= Cscore + 1;
                       
                    }
                    if(computer==1)
					{
						
						printf("Player Wins!\n");
                        Pscore = Pscore + 1;
                        
                    }
                }
                else if(choice==3)
				{
                    if(computer==3)
					{
                        printf("Draw\n");
                    }
                    if(computer==2)
					{
						printf("Player Wins!\n");
                        Pscore = Pscore + 1;
                        
                    }
                    if(computer==1)
					{
						printf("Computer Wins!\n");
                        Cscore= Cscore + 1;
                        

                    }
                }
        else
		{
            printf("Wrong Answer\n");
        }

            }
            if(Cscore > Pscore)
			{
                printf("Computer wins %d to %d\n",Cscore,Pscore);
            }
            else if(Cscore < Pscore ){
                printf("Player wins %d to %d\n",Pscore,Cscore);
            }
           else if(Cscore = Pscore )
		   {
                printf("No winner it is a draw!\n");
            }
}


int main()
{
    char c;
    printf("enter a choice:\n1.press 1 for rolling a die\n2.press 2 for tic-tac-toe\n3.RockPaperScissor\n4.exit\n");
    scanf("%c",&c);
   switch(c)
    {
        case '1':
        Rolling_A_Die();
        break;
        case '2':
        tic_tac_toe();
        break;
        case '3':
        RockPaperScissor();
        break;
        case '4':
        exit(1);
        default:
        printf(" you have entered a wrong choice");
    }
}


