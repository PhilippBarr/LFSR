#include <stdio.h>


int makeTheXor(int a, int b)
{
    if(a==b)
        return 0;
    else
        return 1;
}


int main()
{
    int A[10];
    int ToXor[10];
    int FinalArray[100][10];
    int FinalArrayCounter;
    int bitnum;
    int i;
    int numofXor;
    int numsToXor;
    int bits;


    printf("Give the number of total BITS\n");
    scanf("%d",&bits);

    for(i=0;i<bits;i++)
        {
            printf("GIVE the %dth Element of the bit line\n",i);
            scanf("%d",&bitnum);
            A[i]=bitnum;
        }
    for(i=0;i<bits;i++)
        {
            printf("Array A %d\n",A[i]);
        }


    printf("GIVE the number of bits that will be XORed");
    scanf("%d",&numofXor);

    for(i=0;i<numofXor;i++)
    {
        printf("GIVE %dth element to be XORed Example: 1st = 1  2nd = 2  ETC\n",i);
        scanf("%d",&numsToXor);
        ToXor[i]=numsToXor-1;

    }
    for(i=0;i<numofXor;i++)
    {
        printf("Array toXor %d\n",ToXor[i]);
    }


    int HelpArray[10];
    int xorMade;
    int trueCounter;
    FinalArrayCounter=0;
    int toxor1,toxor2;
    toxor1=ToXor[0];
    toxor2=ToXor[1];
    int keystring[100];
    int startState[10];
    int xorhelp1;
    int xorhelp2;
    int xorhelp3;

    for(i=0;i<bits;i++)
    {
        startState[i]=A[i];
    }

    while(1)
    {
        if(numofXor==2)
        {
            xorMade=makeTheXor(A[ToXor[0]],A[ToXor[1]]);
        }
        if(numofXor==3)
        {
            xorMade=makeTheXor(A[ToXor[2]],makeTheXor(A[ToXor[0]],A[ToXor[1]]));
        }
        if(numofXor==4)
        {
            xorMade=makeTheXor(makeTheXor(A[ToXor[0]],A[ToXor[1]]),makeTheXor(A[ToXor[2]],A[ToXor[3]]));
        }
        if(numofXor==5)

        {
            xorhelp1=makeTheXor(A[ToXor[0]],A[ToXor[1]]);//xor 0 1
            xorhelp2=makeTheXor(A[ToXor[2]],A[ToXor[3]]); // xor 0 2
            xorhelp3=makeTheXor(xorhelp1,xorhelp2);//xor 0 1 2 3
            xorMade=makeTheXor(xorhelp3,A[ToXor[4]]);// xor 0 1 2 3 4
        }

        FinalArray[FinalArrayCounter][0]=xorMade;
        for(i=0;i<bits-1;i++)
        {
            FinalArray[FinalArrayCounter][i+1]=A[i];
        }

        for(i=0;i<bits;i++)
        {
            A[i]=FinalArray[FinalArrayCounter][i];
        }


        for(i=0;i<bits;i++)
        {
            if (FinalArray[FinalArrayCounter][i]==startState[i])
            trueCounter++;
        }
        if(trueCounter==bits)
            break;
        else
            trueCounter=0;

        for(i=0;i<bits;i++)
        {
            printf("FINAL %d\n",FinalArray[FinalArrayCounter][i]);
        }

        FinalArrayCounter++;


        //break;

    }

    int j;
    printf("INITIAL STEP\n");

    for(i=0;i<bits;i++)
    {
        printf(" %d ",startState[i]);
    }
    printf("\n");

    for(i=0;i<FinalArrayCounter+1;i++)
    {
        for(j=0;j<bits;j++)
        {
            printf(" %d ",FinalArray[i][j]);
        }
        printf("\n");
    }

    printf("THE LAST BIT OF EVERY LINE IS THE KEY-FLOW");


    return 0;
}










