#include<stdio.h>
#include<stdlib.h>
void design(int r,char turn,char s[]);
int main()
{
	printf("Let's play tic tac toe\n");
	printf("Choose either X or O and other will be appointed to computer\n");
	char ch;
	scanf("%c",&ch);
	
	int arr[9];
	char s[9]={};
	char turn;
	int randomNumber=0;
	int flag2=0;
	
	printf("%c_|_ %c _|_ %c _|_\n",s[0],s[1],s[2]);
	printf("%c_|_ %c _|_ %c _|_\n",s[3],s[4],s[5]);
	printf("%c |  %c  |  %c  |\n",s[6],s[7],s[8]);
	int pattern[3][3];
	printf("1_|_ 2 _|_ 3 _|\n");
	printf("4_|_ 5 _|_ 6 _|\n");
	printf("7 |  8  |  9  |\n");	
    printf("The Code For Each Block Is Given Above\n");
	int flag=0;
	
	int flag3=0;
	int userTurn=0;
		
	
	for(int i=0;i<9;i++)
	{
		flag=0;
		flag3=0;
		userTurn=0;
		
		
		if (i%2==0)
		{
			printf("Computer's turn:\n");
			if (i==0)
			{
		       randomNumber=rand()%10;
		       if (randomNumber==0)
		       {
			   
			        i--;
			        continue;
		       }
		       else
		       {
		       	     arr[i]=randomNumber;
		       	     if (ch=='O')
		       	     {
					   turn='X';
		       	     }
		       	     else
		       	     {
					   turn='O';
				     }
		       	     design(randomNumber,turn,s);
		       	     printf("%d\n",randomNumber);
		       	     
						    
			   }
		    }
		   else
		    { 
		        randomNumber=rand()%10;
		    	for(int p=0;p<9;p++)
		    	{
		    		
		    		if(arr[p]==randomNumber||randomNumber==0)
		    		{
		    			flag=1;
					}
					if (flag==1)
					{
						flag3=1;
						break;
					}
					
					
				}
				if (flag3==1)
				{
					i--;
					continue;
				}
				if (flag!=1)
				{
					arr[i]=randomNumber;
					if (ch=='O')
		       	     {
					   turn='X';
		       	     }
		       	     else
		       	     {
					   turn='O';
				     }
					design(randomNumber,turn,s);
					printf("%d",randomNumber);
					printf("\n");
				}
				
		    }
		}
		
		
		else
		{
			printf("User's turn\n");
			printf("Enter The Block Number in which you wanna move\n");
			scanf("%d",&userTurn);
			printf("\n");
			randomNumber=userTurn;
			if (ch=='O')
		       	{
					   turn='O';
		       	}
		    else
		       	{
					   turn='X';
			    }
			design(randomNumber,turn,s);
			arr[i]=userTurn;
			 
		}
		while(1)
		{
			if(i>=3)
			{
				if(ch=='O')
				{
				    if((s[0]=='X'&&s[1]=='X'&&s[2]=='X')||(s[3]=='X'&&s[4]=='X'&&s[5]=='X')||(s[6]=='X'&&s[7]=='X'&&s[8]=='X')||
				    (s[0]=='X'&&s[3]=='X'&&s[6]=='X')||(s[1]=='X'&&s[4]=='X'&&s[7]=='X')||(s[2]=='X'&&s[5]=='X'&&s[8]=='X')||
				    (s[0]=='X'&&s[5]=='X'&&s[8]=='X')||(s[2]=='X'&&s[5]=='X'&&s[6]=='X'))
				      {
					     printf("Computer Wins\n");
					     flag2=1;
					     break;
				      }
		       
		       else if((s[0]=='O'&&s[1]=='O'&&s[2]=='O')||(s[3]=='O'&&s[4]=='O'&&s[5]=='O')||(s[6]=='O'&&s[7]=='O'&&s[8]=='O')||
				    (s[0]=='O'&&s[3]=='O'&&s[6]=='O')||(s[1]=='O'&&s[4]=='O'&&s[7]=='O')||(s[2]=='O'&&s[5]=='O'&&s[8]=='O')||
				    (s[0]=='O'&&s[5]=='O'&&s[8]=='O')||(s[2]=='O'&&s[5]=='O'&&s[6]=='O'))
			           {
				          printf("User Wins\n");
					      flag2=1;
					      break;
				       }
				else
				       {
				       	break;
					   }       
			   }
			   else
			   {
			   	if((s[0]=='X'&&s[1]=='X'&&s[2]=='X')||(s[3]=='X'&&s[4]=='X'&&s[5]=='X')||(s[6]=='X'&&s[7]=='X'&&s[8]=='X')||
				    (s[0]=='X'&&s[3]=='X'&&s[6]=='X')||(s[1]=='X'&&s[4]=='X'&&s[7]=='X')||(s[2]=='X'&&s[5]=='X'&&s[8]=='X')||
				    (s[0]=='X'&&s[5]=='X'&&s[8]=='X')||(s[2]=='X'&&s[5]=='X'&&s[6]=='X'))
				      {
					     printf("User Wins\n");
					     flag2=1;
					     break;
				      }
		       
		       else if((s[0]=='O'&&s[1]=='O'&&s[2]=='O')||(s[3]=='O'&&s[4]=='O'&&s[5]=='O')||(s[6]=='O'&&s[7]=='O'&&s[8]=='O')||
				    (s[0]=='O'&&s[3]=='O'&&s[6]=='O')||(s[1]=='O'&&s[4]=='O'&&s[7]=='O')||(s[2]=='O'&&s[5]=='O'&&s[8]=='O')||
				    (s[0]=='O'&&s[5]=='O'&&s[8]=='O')||(s[2]=='O'&&s[5]=='O'&&s[6]=='O'))
			           {
				          printf("Computer Wins\n");
					      flag2=1;
					      break;
				       }
				else
				       {
				       	break;
					   }       
			   	
			   }
		}
			else
			{
			   	break;
			}
	    } 
		
		if(flag2==1)
		{
			break;
		}
	}
	if(flag2!=1)
	{
		printf("The Game Ends In A Draw");
	}
	return 0;
	
}
void design(int r,char turn,char s[])
{
	s[r-1]=turn;
	printf("%c_|_ %c _|_ %c _|_\n",s[0],s[1],s[2]);
	printf("%c_|_ %c _|_ %c _|_\n",s[3],s[4],s[5]);
	printf("%c |  %c  |  %c  |\n",s[6],s[7],s[8]);
}
				
		        
				
					
				
			
		
	   
		    
		
		
	

