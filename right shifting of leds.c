/*
*******************************************************************************************
AUTHOR: PUSHKAL AGARWAL
ROLL NUMBER:	2001034
INSTITUTE:	INDIAN INSTITUTE OF INFORMATION TECHNOLOGY, BHAGALPUR
DEPARTMENT:	ELECTRONICS AND COMMUNICATION ENGINEERING
DATE:	20-11-2022

*******************************************************************************************
*/

#include<reg51.h>

#define port P0;
unsigned char value = 128;
void delay(){
	int i,j;
	for(i=0; i<100; i++)
	{
		for(j=0; j<1000; j++)
		{
			;
		}
	}
}
void main(){
	while(1)
	{
		if( value==0){
			value = 128;
		}
		 P0 = value;
		 value = value >> 1;
		delay();
	}
}
/******************************************************************************************
* This program blinks the number of LEDs located on PORT P2 in decreasing order.
********************************************************************************************/
