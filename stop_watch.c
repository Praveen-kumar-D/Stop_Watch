#include <stdio.h>
#include "stop_watch.h"

void copy_array(char num_arr[5][4],char num1_arr[5][4])
{
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4; j++) {
			num1_arr[i][j] = num_arr[i][j];
		}
	}
}

void delay(int seconds)
{
	//clock_t start_time = clock();
	//while (clock() < start_time + milliseconds * (CLOCKS_PER_SEC / 1000));
	time_t start = time(NULL);

    for (int i = 0; i < seconds; i++) {
        time_t now;
        do {
            now = time(NULL);
        } while (now - start < 1);

        start = now;
    }
}

void switch_fun(char num_arr[5][4],int m)
{

	switch(m)
	{
	case 0:
		num_arr[0][0]=' ', num_arr[0][1]='.', num_arr[0][2]='.', num_arr[0][3]=' ';
		num_arr[1][0]='.', num_arr[1][1]=' ', num_arr[1][2]=' ', num_arr[1][3]='.';
		num_arr[2][0]='.', num_arr[2][1]=' ', num_arr[2][2]=' ', num_arr[2][3]='.';
		num_arr[3][0]='.', num_arr[3][1]=' ', num_arr[3][2]=' ', num_arr[3][3]='.';
		num_arr[4][0]=' ', num_arr[4][1]='.', num_arr[4][2]='.', num_arr[4][3]=' ';
		break;
	case 1:
		num_arr[0][0]=' ', num_arr[0][1]=' ', num_arr[0][2]='.', num_arr[0][3]='.';
		num_arr[1][0]=' ', num_arr[1][1]='.', num_arr[1][2]=' ', num_arr[1][3]='.';
		num_arr[2][0]=' ', num_arr[2][1]=' ', num_arr[2][2]=' ', num_arr[2][3]='.';
		num_arr[3][0]=' ', num_arr[3][1]=' ', num_arr[3][2]=' ', num_arr[3][3]='.';
		num_arr[4][0]=' ', num_arr[4][1]=' ', num_arr[4][2]=' ', num_arr[4][3]='.';
		break;
	case 2:
		num_arr[0][0]=' ', num_arr[0][1]='.', num_arr[0][2]='.', num_arr[0][3]=' ';
		num_arr[1][0]='.', num_arr[1][1]=' ', num_arr[1][2]=' ', num_arr[1][3]='.';
		num_arr[2][0]=' ', num_arr[2][1]=' ', num_arr[2][2]='.', num_arr[2][3]=' ';
		num_arr[3][0]=' ', num_arr[3][1]='.', num_arr[3][2]=' ', num_arr[3][3]=' ';
		num_arr[4][0]='.', num_arr[4][1]='.', num_arr[4][2]='.', num_arr[4][3]='.';
		break;
	case 3:
		num_arr[0][0]='.', num_arr[0][1]='.', num_arr[0][2]='.', num_arr[0][3]=' ';
		num_arr[1][0]=' ', num_arr[1][1]=' ', num_arr[1][2]=' ', num_arr[1][3]='.';
		num_arr[2][0]=' ', num_arr[2][1]='.', num_arr[2][2]='.', num_arr[2][3]=' ';
		num_arr[3][0]=' ', num_arr[3][1]=' ', num_arr[3][2]=' ', num_arr[3][3]='.';
		num_arr[4][0]='.', num_arr[4][1]='.', num_arr[4][2]='.', num_arr[4][3]=' ';
		break;
	case 4:
		num_arr[0][0]=' ', num_arr[0][1]=' ', num_arr[0][2]=' ', num_arr[0][3]='.';
		num_arr[1][0]=' ', num_arr[1][1]=' ', num_arr[1][2]='.', num_arr[1][3]='.';
		num_arr[2][0]=' ', num_arr[2][1]='.', num_arr[2][2]=' ', num_arr[2][3]='.';
		num_arr[3][0]='.', num_arr[3][1]='.', num_arr[3][2]='.', num_arr[3][3]='.';
		num_arr[4][0]=' ', num_arr[4][1]=' ', num_arr[4][2]=' ', num_arr[4][3]='.';
		break;
	case 5:
		num_arr[0][0]='.', num_arr[0][1]='.', num_arr[0][2]='.', num_arr[0][3]='.';
		num_arr[1][0]='.', num_arr[1][1]=' ', num_arr[1][2]=' ', num_arr[1][3]=' ';
		num_arr[2][0]='.', num_arr[2][1]='.', num_arr[2][2]='.', num_arr[2][3]=' ';
		num_arr[3][0]=' ', num_arr[3][1]=' ', num_arr[3][2]=' ', num_arr[3][3]='.';
		num_arr[4][0]='.', num_arr[4][1]='.', num_arr[4][2]='.', num_arr[4][3]=' ';
		break;
	case 6:
		num_arr[0][0]=' ', num_arr[0][1]='.', num_arr[0][2]='.', num_arr[0][3]='.';
		num_arr[1][0]='.', num_arr[1][1]=' ', num_arr[1][2]=' ', num_arr[1][3]=' ';
		num_arr[2][0]='.', num_arr[2][1]='.', num_arr[2][2]='.', num_arr[2][3]=' ';
		num_arr[3][0]='.', num_arr[3][1]=' ', num_arr[3][2]=' ', num_arr[3][3]='.';
		num_arr[4][0]=' ', num_arr[4][1]='.', num_arr[4][2]='.', num_arr[4][3]=' ';
		break;
	case 7:
		num_arr[0][0]='.', num_arr[0][1]='.', num_arr[0][2]='.', num_arr[0][3]='.';
		num_arr[1][0]=' ', num_arr[1][1]=' ', num_arr[1][2]=' ', num_arr[1][3]='.';
		num_arr[2][0]=' ', num_arr[2][1]=' ', num_arr[2][2]='.', num_arr[2][3]=' ';
		num_arr[3][0]=' ', num_arr[3][1]='.', num_arr[3][2]=' ', num_arr[3][3]=' ';
		num_arr[4][0]='.', num_arr[4][1]=' ', num_arr[4][2]=' ', num_arr[4][3]=' ';
		break;
	case 8:
		num_arr[0][0]=' ', num_arr[0][1]='.', num_arr[0][2]='.', num_arr[0][3]=' ';
		num_arr[1][0]='.', num_arr[1][1]=' ', num_arr[1][2]=' ', num_arr[1][3]='.';
		num_arr[2][0]=' ', num_arr[2][1]='.', num_arr[2][2]='.', num_arr[2][3]=' ';
		num_arr[3][0]='.', num_arr[3][1]=' ', num_arr[3][2]=' ', num_arr[3][3]='.';
		num_arr[4][0]=' ', num_arr[4][1]='.', num_arr[4][2]='.', num_arr[4][3]=' ';
		break;
	case 9:
		num_arr[0][0]=' ', num_arr[0][1]='.', num_arr[0][2]='.', num_arr[0][3]=' ';
		num_arr[1][0]='.', num_arr[1][1]=' ', num_arr[1][2]=' ', num_arr[1][3]='.';
		num_arr[2][0]=' ', num_arr[2][1]='.', num_arr[2][2]='.', num_arr[2][3]='.';
		num_arr[3][0]=' ', num_arr[3][1]=' ', num_arr[3][2]=' ', num_arr[3][3]='.';
		num_arr[4][0]='.', num_arr[4][1]='.', num_arr[4][2]='.', num_arr[4][3]=' ';
		break;
	case 10:
		break;
	}
}

int fill_num(int range,int min)
{
	char num_arr[5][4],num1_arr[5][4],num2_arr[5][4],num_isto[5][1] = {" ","."," ","."," "};

	switch_fun(num1_arr,range);
	if(range == 6)
	{
		switch_fun(num2_arr,min);
		switch_fun(num1_arr,0);
	}
	else
	{
	    switch_fun(num2_arr,min);
	}

	for(int m=0; m<10; m++)
	{
    if(range == 6)
    {
        switch_fun(num_arr,0);
    }
		switch_fun(num_arr,m);
		for(int i=0; i<5; i++)
		{
			for(int j=0; j<4; j++)
			{
				printf("%c",num2_arr[i][j]);
			}
			printf("  %c  ",num_isto[i][0]);
			for(int j=0; j<4; j++)
			{
				printf("%c",num1_arr[i][j]);
			}
			printf(" ");
			for(int j=0; j<4; j++)
			{
				printf("%c",num_arr[i][j]);
			}

			printf("\n");
		}
	
		delay(1);
	    system("clear");

	}

}