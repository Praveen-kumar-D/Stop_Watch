/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num;
    char num_arr[5][4];
    start:
    scanf("%d",&num);
    switch(num)
    {
        case 0:
               num_arr[0][0]=' ', num_arr[0][1]='.', num_arr[0][2]='.', num_arr[0][3]=' ';
               num_arr[1][0]='.', num_arr[1][1]=' ', num_arr[1][2]=' ', num_arr[1][3]='.';
               num_arr[2][0]='.', num_arr[2][1]=' ', num_arr[2][2]=' ', num_arr[2][3]='.';
               num_arr[3][0]='.', num_arr[3][1]=' ', num_arr[3][2]=' ', num_arr[3][3]='.';
               num_arr[4][0]=' ', num_arr[4][1]='.', num_arr[4][2]='.', num_arr[4][3]=' ';
               goto end;
        case 1:
               num_arr[0][0]=' ', num_arr[0][1]=' ', num_arr[0][2]='.', num_arr[0][3]='.';
               num_arr[1][0]=' ', num_arr[1][1]='.', num_arr[1][2]=' ', num_arr[1][3]='.';
               num_arr[2][0]=' ', num_arr[2][1]=' ', num_arr[2][2]=' ', num_arr[2][3]='.';
               num_arr[3][0]=' ', num_arr[3][1]=' ', num_arr[3][2]=' ', num_arr[3][3]='.';
               num_arr[4][0]=' ', num_arr[4][1]=' ', num_arr[4][2]=' ', num_arr[4][3]='.';
               goto end;
        case 2:
               num_arr[0][0]=' ', num_arr[0][1]='.', num_arr[0][2]='.', num_arr[0][3]=' ';
               num_arr[1][0]='.', num_arr[1][1]=' ', num_arr[1][2]=' ', num_arr[1][3]='.';
               num_arr[2][0]=' ', num_arr[2][1]=' ', num_arr[2][2]='.', num_arr[2][3]=' ';
               num_arr[3][0]=' ', num_arr[3][1]='.', num_arr[3][2]=' ', num_arr[3][3]=' ';
               num_arr[4][0]='.', num_arr[4][1]='.', num_arr[4][2]='.', num_arr[4][3]='.';
               goto end;
        case 3:
               num_arr[0][0]='.', num_arr[0][1]='.', num_arr[0][2]='.', num_arr[0][3]=' ';
               num_arr[1][0]=' ', num_arr[1][1]=' ', num_arr[1][2]=' ', num_arr[1][3]='.';
               num_arr[2][0]=' ', num_arr[2][1]='.', num_arr[2][2]='.', num_arr[2][3]=' ';
               num_arr[3][0]=' ', num_arr[3][1]=' ', num_arr[3][2]=' ', num_arr[3][3]='.';
               num_arr[4][0]='.', num_arr[4][1]='.', num_arr[4][2]='.', num_arr[4][3]=' ';
               goto end;
        case 4:
               num_arr[0][0]=' ', num_arr[0][1]=' ', num_arr[0][2]=' ', num_arr[0][3]='.';
               num_arr[1][0]=' ', num_arr[1][1]=' ', num_arr[1][2]='.', num_arr[1][3]='.';
               num_arr[2][0]=' ', num_arr[2][1]='.', num_arr[2][2]=' ', num_arr[2][3]='.';
               num_arr[3][0]='.', num_arr[3][1]='.', num_arr[3][2]='.', num_arr[3][3]='.';
               num_arr[4][0]=' ', num_arr[4][1]=' ', num_arr[4][2]=' ', num_arr[4][3]='.';
               goto end;
        case 5:
               num_arr[0][0]='.', num_arr[0][1]='.', num_arr[0][2]='.', num_arr[0][3]='.';
               num_arr[1][0]='.', num_arr[1][1]=' ', num_arr[1][2]=' ', num_arr[1][3]=' ';
               num_arr[2][0]='.', num_arr[2][1]='.', num_arr[2][2]='.', num_arr[2][3]=' ';
               num_arr[3][0]=' ', num_arr[3][1]=' ', num_arr[3][2]=' ', num_arr[3][3]='.';
               num_arr[4][0]='.', num_arr[4][1]='.', num_arr[4][2]='.', num_arr[4][3]=' ';
               goto end;
        case 6:
               num_arr[0][0]=' ', num_arr[0][1]='.', num_arr[0][2]='.', num_arr[0][3]='.';
               num_arr[1][0]='.', num_arr[1][1]=' ', num_arr[1][2]=' ', num_arr[1][3]=' ';
               num_arr[2][0]='.', num_arr[2][1]='.', num_arr[2][2]='.', num_arr[2][3]=' ';
               num_arr[3][0]='.', num_arr[3][1]=' ', num_arr[3][2]=' ', num_arr[3][3]='.';
               num_arr[4][0]=' ', num_arr[4][1]='.', num_arr[4][2]='.', num_arr[4][3]=' ';
               goto end;
        case 7:
               num_arr[0][0]='.', num_arr[0][1]='.', num_arr[0][2]='.', num_arr[0][3]='.';
               num_arr[1][0]=' ', num_arr[1][1]=' ', num_arr[1][2]=' ', num_arr[1][3]='.';
               num_arr[2][0]=' ', num_arr[2][1]=' ', num_arr[2][2]='.', num_arr[2][3]=' ';
               num_arr[3][0]=' ', num_arr[3][1]='.', num_arr[3][2]=' ', num_arr[3][3]=' ';
               num_arr[4][0]='.', num_arr[4][1]=' ', num_arr[4][2]=' ', num_arr[4][3]=' ';
               goto end;
        case 8:
               num_arr[0][0]=' ', num_arr[0][1]='.', num_arr[0][2]='.', num_arr[0][3]=' ';
               num_arr[1][0]='.', num_arr[1][1]=' ', num_arr[1][2]=' ', num_arr[1][3]='.';
               num_arr[2][0]=' ', num_arr[2][1]='.', num_arr[2][2]='.', num_arr[2][3]=' ';
               num_arr[3][0]='.', num_arr[3][1]=' ', num_arr[3][2]=' ', num_arr[3][3]='.';
               num_arr[4][0]=' ', num_arr[4][1]='.', num_arr[4][2]='.', num_arr[4][3]=' ';
               goto end;
        case 9:
               num_arr[0][0]=' ', num_arr[0][1]='.', num_arr[0][2]='.', num_arr[0][3]=' ';
               num_arr[1][0]='.', num_arr[1][1]=' ', num_arr[1][2]=' ', num_arr[1][3]='.';
               num_arr[2][0]=' ', num_arr[2][1]='.', num_arr[2][2]='.', num_arr[2][3]='.';
               num_arr[3][0]=' ', num_arr[3][1]=' ', num_arr[3][2]=' ', num_arr[3][3]='.';
               num_arr[4][0]='.', num_arr[4][1]='.', num_arr[4][2]='.', num_arr[4][3]=' ';
               goto end;
        case 10:
             break;
             end:
             for(int i=0;i<5;i++)
             {
               for(int j=0;j<4;j++)
               {
                   printf("%c",num_arr[i][j]);
               }
               printf("\n");
             }
             goto start;
    }
    
    return 0;
}