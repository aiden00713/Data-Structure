/*
 * C Program to Identify whether the String is Palindrome or not using Stack
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
#define MAX_ITEM	100
typedef struct tagStack
	{
	   char Item[MAX_ITEM];
	   int	Top;
	}Stack;

int Push(Stack *,char );
int IsFull(Stack *);
int Pop(Stack *,char *);
int IsEmpty(Stack *);
void PrintStack(Stack *);

int front = 0;
 
int main()
{
	int n,len,i,j,k;
	char string[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    	Stack topofstk;
    	int count=0,front=0;
    	scanf("%s",string);
    	len = strlen(string);
    	count = len;
    	for(j=0;j<len;j++)
    	{
    		Push(&topofstk,string[j]);
		}
		
		for(k=0;k<len;k++)
		{
        	if(topofstk.Item[count] == string[k])
			{
            	front++;
            	Pop(&topofstk,&string[k]);
        	}
        	else
        	{
        		Pop(&topofstk,&string[k]);
			}
        	count--;
    	}
    	
    	if(front==len)
    	{
    		printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
    return 0;
}

void PrintStack( Stack *s)
{
   int i;
   if  ( IsEmpty(s) )
      return ;
   for (i=s->Top;i >= 0;i--)
      printf("%d ",s->Item[i]);
   printf("\n");
}

int Push(Stack *S,char X)
{
    if(IsFull(S))
		return(0);
    S->Top=S->Top+1;
    S->Item[S->Top]=X;
	return(1);
}

int IsFull(Stack *S)
{
    if (S->Top == (MAX_ITEM-1))
	return(1);
    else
	return(0);
}

int Pop(Stack *S,char *X)
{
    if(IsEmpty(S))
		return (0);
    *X=S->Item[S->Top];
    S->Top--;
	return(1);
}

int IsEmpty(Stack *S)
{
    if(S->Top == -1)
		return(1);
    else
		return(0);
}
