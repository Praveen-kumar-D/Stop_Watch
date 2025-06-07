/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include "stop_watch.h"

int main()
{
    int num = 0 ,count =0,min =0;
    
    while(num<7)
    {
        fill_num(num,min);
        if(num == 5)
        {
           
           min++; 
        }
        if(num == 6)
        {
            num = 0;
        }
        num++;
        
    }
    
    return 0;
}