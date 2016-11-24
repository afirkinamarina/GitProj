#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
 int main()
{
     const int len = 8, quant = 10;
     char pass[quant][len];
     int count1 = 0, count2 = 0, count3 = 0, choose;
     srand(time(NULL));
     int x = 0, y = 0, k= 0;
     for (int i = 0; i<quant; i++)
     {
         for (k = 0; k<len; k++)
         {
             choose = rand() % 3;
             switch (choose)
             {  
             case 0:
                 pass[x][y]=rand() % ('z' - 'a') + 'a';
                count1++;
                break;
             case 1:
                 pass[x][y] = (rand() % ('Z' - 'A') + 'A');
                 count2++;
                 break;
             case 2:
                 pass[x][y] = (rand() % ('9' - '0') + '0');
                 count3++;
             } 
             y++;  
         } 
         if (count1 == 0 || count2 == 0 || count3 == 0)
         {
             i--;
             y=y- len;
             k--;
             x -=x;
         } 
        else
            x+=x;
         count1 = 0;
         count2 = 0;
         count3 = 0;
     } 
     for (int i = 0; i<quant; i++)
     {
         for (int j = 0; j<len; j++)
             putchar(pass[i][j]);
         putchar('\n');
     }
     getchar();
     return 0;
   
}
