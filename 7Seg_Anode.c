#include<lpc21xx.h>
void delay(unsigned int c)
{unsigned int a;
for(a=1;a<=10000;a++);}int main()
{
PINSEL0=0x00000000;
PINSEL1=0x00000000;
IO0DIR=0x000000FF;

while(1)
{ unsigned long int j;
	if(IO0PIN &= 0x00010000)
	{
		int i,a[]={0xC0,0xF9,0xA4,0xB0,0x99,0x92,0x82,0xF8,0x80,0x90};
		for(j=0;j<10;j++)
		{ IO0SET=IO0SET|a[j];
		for(i=0;i<10;i++)
		{
		IO0SET= IO0SET|(a[i]<<8);
		delay(5000);
		IO0CLR= IO0CLR|(a[i]<<8);
		}
		IO0CLR=a[j];
		}
	}
	else
	{
		int i,a[]={0x90,0x80,0xF8,0x82,0x92,0x99,0xB0,0xA4,0xF9,0xC0};
		for(j=0;j<10;j++)
		{ IO0SET=IO0SET|a[j];
		for(i=0;i<10;i++)
		{
		IO0SET= IO0SET|(a[i]<<8);
		delay(5000);
		IO0CLR= IO0CLR|(a[i]<<8);
		}
		IO0CLR=a[j];
		}
	}
}
}