#include <stdio.h>
#include <math.h>
int main()
{
char k;
int tot = 0;
int tot2 = 0;
while ( scanf("%c", &k) ==1)
{tot2++;  
if (k == 'c' || k== 'C' )
{tot++;} 
printf("Total Cs : %d\n", tot );
printf("Total Gs : %d\n", tot2);}
}
