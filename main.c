#include<stdio.h>
#include<stdlib.h>
# define size 3
#define pf printf
#define sf scanf
int f1,f2,e1,e2;
f1=-1;f2=-1;
e1=-1;e2=size-1;
int Q1[size],Q2[size];
void enQ();
void deQ();
void display();

 int main()
 {

     int ch;
     do {
     printf("\nenter choice 1:push 2:pop 3:display 4:end:");
     scanf("%d",&ch);
        switch(ch)
        {
            case 1:enQ();  break;
            case 2:deQ();  break;
            case 3:display();  break;
            case 4:printf("pgm ends"); break;
            default:printf("wrong choice"); break;
        }
     }while(ch!=4);
    return 0;
}
void enQ()
{
    int x,i;
    if( e1==(size-1))
    {
        pf("Q is full\n");
        return;
    }
    pf("enter data: ");
    sf("%d",&x);
    if((e1==-1)&&(e2==(size-1)))
       {
        f1=e1=0;
        f2=0;
       }
    else
    {
      e1++;
    }
      Q1[e1]=x;
      Q2[e2]=x;
      e2--;
}
void display()
{

    int i,j;
    pf("inputs are:\n");
    for(i=f1;i<=(size-1);i++)
    {

        pf("%d\n",Q1[i]);

    }
    pf("outputs are:\n");
    for(j=f2;j<=(size-1);j++)
    {
        pf("%d\n",Q2[j]);
    }
}

void deQ()
{
    int i,j;

       if(f2>(size-1))
        {
            pf("hence all elements are popped\n");
            for(j=0;j==f2;j++)
            {
                Q2[j]=0;
                pf("%d ",Q2[j]);
            }

        }

       else
            {

        pf("%d\n",Q2[f2]);
        f2++;

            }

}

