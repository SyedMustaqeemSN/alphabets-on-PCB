#include <REGX51.H>
void delay (unsigned int time)
{
	unsigned int i,j;
	for(i=0;i<=time;i++)
	{
		for(j=0;j<=120;j++);
	}
}
void main(void)
{
	while(1)
	{
		P0_0=1;
		delay(500);
		P0_0=0;
		delay(500);
		P0_1=1;
		delay(500);
		P0_1=0;
		delay(500);
		P0_2=1;
		delay(500);
		P0_2=0;
		delay(500);		
	}
}