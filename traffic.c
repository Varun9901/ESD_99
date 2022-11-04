#include<reg51.h>
sbit a=P1^0;
sbit lowergreen=P2^1;
sbit lowerred=P2^0;
sbit highergreen=P3^1;
void delay(int time);
int main()
{
	while(1)
	{
		if(a==1)
		{
			lowerred=1;
			highergreen=1;
			lowergreen=0;
		}
		else
		{
			lowergreen=1;
			lowerred=0;
			highergreen=0;
		}
		delay(100);
	}
}
void delay(int time)
{
	int i,j;
	for(i=0;i<time;i++)
	for(j=0;j<1000;j++);
}
