/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void copy_array(char num_arr[5][4],char num1_arr[5][4])
{
    for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 4; j++) {
        num1_arr[i][j] = num_arr[i][j];
    }
}
}

void delay(int milliseconds) {
    clock_t start_time = clock();
    while (clock() < start_time + milliseconds * (CLOCKS_PER_SEC / 1000));
}

int main()
{
    int num = 0 ,count =0;
    char num_arr[5][4],num1_arr[5][4],num_isto[5][1] = {" ","."," ","."," "};
    start:
    for(int m=0;m<=9;m++)
    {
    system("clear");

    num = m;
    switch(num)
    {
        case 0:
               num_arr[0][0]=' ', num_arr[0][1]='.', num_arr[0][2]='.', num_arr[0][3]=' ';
               num_arr[1][0]='.', num_arr[1][1]=' ', num_arr[1][2]=' ', num_arr[1][3]='.';
               num_arr[2][0]='.', num_arr[2][1]=' ', num_arr[2][2]=' ', num_arr[2][3]='.';
               num_arr[3][0]='.', num_arr[3][1]=' ', num_arr[3][2]=' ', num_arr[3][3]='.';
               num_arr[4][0]=' ', num_arr[4][1]='.', num_arr[4][2]='.', num_arr[4][3]=' ';
               copy_array(num_arr,num1_arr);
               goto end;
        case 1:
               num_arr[0][0]=' ', num_arr[0][1]=' ', num_arr[0][2]='.', num_arr[0][3]='.';
               num_arr[1][0]=' ', num_arr[1][1]='.', num_arr[1][2]=' ', num_arr[1][3]='.';
               num_arr[2][0]=' ', num_arr[2][1]=' ', num_arr[2][2]=' ', num_arr[2][3]='.';
               num_arr[3][0]=' ', num_arr[3][1]=' ', num_arr[3][2]=' ', num_arr[3][3]='.';
               num_arr[4][0]=' ', num_arr[4][1]=' ', num_arr[4][2]=' ', num_arr[4][3]='.';
               copy_array(num_arr,num1_arr);
               goto end;
        case 2:
               num_arr[0][0]=' ', num_arr[0][1]='.', num_arr[0][2]='.', num_arr[0][3]=' ';
               num_arr[1][0]='.', num_arr[1][1]=' ', num_arr[1][2]=' ', num_arr[1][3]='.';
               num_arr[2][0]=' ', num_arr[2][1]=' ', num_arr[2][2]='.', num_arr[2][3]=' ';
               num_arr[3][0]=' ', num_arr[3][1]='.', num_arr[3][2]=' ', num_arr[3][3]=' ';
               num_arr[4][0]='.', num_arr[4][1]='.', num_arr[4][2]='.', num_arr[4][3]='.';
               copy_array(num_arr,num1_arr);
               goto end;
        case 3:
               num_arr[0][0]='.', num_arr[0][1]='.', num_arr[0][2]='.', num_arr[0][3]=' ';
               num_arr[1][0]=' ', num_arr[1][1]=' ', num_arr[1][2]=' ', num_arr[1][3]='.';
               num_arr[2][0]=' ', num_arr[2][1]='.', num_arr[2][2]='.', num_arr[2][3]=' ';
               num_arr[3][0]=' ', num_arr[3][1]=' ', num_arr[3][2]=' ', num_arr[3][3]='.';
               num_arr[4][0]='.', num_arr[4][1]='.', num_arr[4][2]='.', num_arr[4][3]=' ';
               copy_array(num_arr,num1_arr);
               goto end;
        case 4:
               num_arr[0][0]=' ', num_arr[0][1]=' ', num_arr[0][2]=' ', num_arr[0][3]='.';
               num_arr[1][0]=' ', num_arr[1][1]=' ', num_arr[1][2]='.', num_arr[1][3]='.';
               num_arr[2][0]=' ', num_arr[2][1]='.', num_arr[2][2]=' ', num_arr[2][3]='.';
               num_arr[3][0]='.', num_arr[3][1]='.', num_arr[3][2]='.', num_arr[3][3]='.';
               num_arr[4][0]=' ', num_arr[4][1]=' ', num_arr[4][2]=' ', num_arr[4][3]='.';
               copy_array(num_arr,num1_arr);
               goto end;
        case 5:
               num_arr[0][0]='.', num_arr[0][1]='.', num_arr[0][2]='.', num_arr[0][3]='.';
               num_arr[1][0]='.', num_arr[1][1]=' ', num_arr[1][2]=' ', num_arr[1][3]=' ';
               num_arr[2][0]='.', num_arr[2][1]='.', num_arr[2][2]='.', num_arr[2][3]=' ';
               num_arr[3][0]=' ', num_arr[3][1]=' ', num_arr[3][2]=' ', num_arr[3][3]='.';
               num_arr[4][0]='.', num_arr[4][1]='.', num_arr[4][2]='.', num_arr[4][3]=' ';
               copy_array(num_arr,num1_arr);
               goto end;
        case 6:
               num_arr[0][0]=' ', num_arr[0][1]='.', num_arr[0][2]='.', num_arr[0][3]='.';
               num_arr[1][0]='.', num_arr[1][1]=' ', num_arr[1][2]=' ', num_arr[1][3]=' ';
               num_arr[2][0]='.', num_arr[2][1]='.', num_arr[2][2]='.', num_arr[2][3]=' ';
               num_arr[3][0]='.', num_arr[3][1]=' ', num_arr[3][2]=' ', num_arr[3][3]='.';
               num_arr[4][0]=' ', num_arr[4][1]='.', num_arr[4][2]='.', num_arr[4][3]=' ';
               copy_array(num_arr,num1_arr);
               goto end;
        case 7:
               num_arr[0][0]='.', num_arr[0][1]='.', num_arr[0][2]='.', num_arr[0][3]='.';
               num_arr[1][0]=' ', num_arr[1][1]=' ', num_arr[1][2]=' ', num_arr[1][3]='.';
               num_arr[2][0]=' ', num_arr[2][1]=' ', num_arr[2][2]='.', num_arr[2][3]=' ';
               num_arr[3][0]=' ', num_arr[3][1]='.', num_arr[3][2]=' ', num_arr[3][3]=' ';
               num_arr[4][0]='.', num_arr[4][1]=' ', num_arr[4][2]=' ', num_arr[4][3]=' ';
               copy_array(num_arr,num1_arr);
               goto end;
        case 8:
               num_arr[0][0]=' ', num_arr[0][1]='.', num_arr[0][2]='.', num_arr[0][3]=' ';
               num_arr[1][0]='.', num_arr[1][1]=' ', num_arr[1][2]=' ', num_arr[1][3]='.';
               num_arr[2][0]=' ', num_arr[2][1]='.', num_arr[2][2]='.', num_arr[2][3]=' ';
               num_arr[3][0]='.', num_arr[3][1]=' ', num_arr[3][2]=' ', num_arr[3][3]='.';
               num_arr[4][0]=' ', num_arr[4][1]='.', num_arr[4][2]='.', num_arr[4][3]=' ';
               copy_array(num_arr,num1_arr);
               goto end;
        case 9:
               num_arr[0][0]=' ', num_arr[0][1]='.', num_arr[0][2]='.', num_arr[0][3]=' ';
               num_arr[1][0]='.', num_arr[1][1]=' ', num_arr[1][2]=' ', num_arr[1][3]='.';
               num_arr[2][0]=' ', num_arr[2][1]='.', num_arr[2][2]='.', num_arr[2][3]='.';
               num_arr[3][0]=' ', num_arr[3][1]=' ', num_arr[3][2]=' ', num_arr[3][3]='.';
               num_arr[4][0]='.', num_arr[4][1]='.', num_arr[4][2]='.', num_arr[4][3]=' ';
               copy_array(num_arr,num1_arr);
               goto end;
        case 10:
             break;
             end:
             for(int i=0;i<5;i++)
             {
               for(int j=0;j<4;j++)
               {
                   printf("%c",num1_arr[i][j]);
               }
                printf("  %c  ",num_isto[i][0]);
               for(int j=0;j<4;j++)
               {
                   printf("%c",num1_arr[i][j]);
               }
               printf(" ");
               for(int j=0;j<4;j++)
               {
                   printf("%c",num_arr[i][j]);
               }
               count++;
               printf("\n");
             }
             
             delay(1000);
    }
    }    
           goto start;
    
    
    
    return 0;
}