#include <REGX52.H>

sbit st1 = P1^0;
sbit st2 = P1^1;
sbit st3 = P1^2;
sbit st4 = P1^3;

void Delay_ms(unsigned  int n){
	unsigned int x, y;
	for( x = 0; x<n; x++){
		for(y=0; y<123; y++);
	}
}

unsigned char  day_1[8] = {0xfe, 0xfc, 0xf8, 0xf0, 0x70, 0x30, 0x10, 0x00};
unsigned char  day_2[8] = {0x7f, 0x3f, 0x1f, 0x0f, 0x07, 0x03, 0x01,0x00};

void effect_1(){
	unsigned char i ; 
	for( i=0;i<8; i++){
		Delay_ms(100);
		P0 = day_1[i];
	}
	for( i= 0 ; i<8;i++){
		Delay_ms(100);
		P2 = day_2[i];
	}
	Delay_ms(100);
	P2 = 0xff;
	P0 = 0xff;
}

void effect_2() // sang dan tung tang
{
	P2 = 0x00;
	P0 = 0x00;
	P1 = 0x00;
	Delay_ms(100);
	st1 = 1;
	Delay_ms(100);
	st1 = 0;
	st2 = 1;
	Delay_ms(100);
	st2 = 0;
	st3 = 1;
	Delay_ms(100);
	st3 = 0;
	st4 = 1;
	Delay_ms(100);
	st4 = 0;
	
}

void effect_3() // sang tat theo duong cheo
{
	st1 = st2 = st3 = st4 = 1;
	P2 = 0xFF;
	P0 = 0xFE;
	Delay_ms(100);
	P0 = 0xED;
	Delay_ms(100);
	P0 = 0xDB;
	P2 = 0x7F;
	Delay_ms(100);
	P0 = 0xB7;
	P2 = 0xBE;
	Delay_ms(100);
	P0 = 0x7F;
	P2 = 0xDD;
	Delay_ms(100);
	P0 = 0xFF;
	P2 = 0xEB;
	Delay_ms(100);
	P2 = 0xF7;
	Delay_ms(100);
	P2 = 0xFF;
	P0 = 0xF7;
	Delay_ms(100);
	P0 = 0x7B;
	Delay_ms(100);
	P0 = 0xBD;
	P2 = 0xEF;
	Delay_ms(100);
	P0 = 0xDE;
	P2 = 0xD7;
	Delay_ms(100);
	P0 = 0xEF;
	P2 = 0xBB;
	Delay_ms(100);
	P0 = 0xFF;
	P2 = 0x7D;
	Delay_ms(100);
	P2 = 0xFE;
	Delay_ms(100);
}

void effect_4() // sang trai qua phai, phai qua trai
{
	st1 = 1; st2 = 1; st3 = 1; st4 = 1;
	P0 = 0x77; P2 = 0xE7;
	Delay_ms(100);
	P0 = 0xBB; P2 = 0xDB;
	Delay_ms(100);
	P0 = 0xDD; P2 = 0xBD;
	Delay_ms(100);
	P0 = 0xEE; P2 = 0x7E;
	Delay_ms(100);
	P0 = 0xDD; P2 = 0xBD;
	Delay_ms(100);
	P0 = 0xBB; P2 = 0xDB;
	Delay_ms(100);
	P0 = 0x77; P2 = 0xE7;
	Delay_ms(100);
}

unsigned char i;

void effect_5() // sang chay vong tung mat
{
	st1 = 1; st2 = 1; st3 = 1; st4 = 1;
	
	for (i = 0; i < 6; ++i)
	{
		P0 = 0x77; P2 = 0xE7;
		Delay_ms(100);
		P0 = 0xFF; P2 = 0xFF;
		Delay_ms(100);
	}
	for (i = 0; i < 6; ++i)
	{
		P0 = 0xFF; P2 = 0xF0;
		Delay_ms(100);
		P0 = 0xFF; P2 = 0xFF;
		Delay_ms(100);
	}
	for (i = 0; i < 6; ++i)
	{	
		P0 = 0xEE; P2 = 0x7E;
		Delay_ms(100);
		P0 = 0xFF; P2 = 0xFF;
		Delay_ms(100);
	}
	for (i = 0; i < 6; ++i)
	{
		P0 = 0xF0; P2 = 0xFF;
		Delay_ms(100);
		P0 = 0xFF; P2 = 0xFF;
		Delay_ms(100);
	}
	for (i = 0; i < 6; ++i)
	{
		P0 = 0xBF; P2 = 0xDF;
		Delay_ms(100);
		P0 = 0xFF; P2 = 0xFF;
		Delay_ms(100);
	}
	for (i = 0; i < 6; ++i)
	{
		P0 = 0xFF; P2 = 0x9F;
		Delay_ms(100);
		P0 = 0xFF; P2 = 0xFF;
		Delay_ms(100);
	}
	for (i = 0; i < 6; ++i)
	{
		P0 = 0xDF; P2 = 0xBF;
		Delay_ms(100);
		P0 = 0xFF; P2 = 0xFF;
		Delay_ms(100);
	}
	for (i = 0; i < 6; ++i)
	{
		P0 = 0x9F; P2 = 0xFF;
		Delay_ms(100);
		P0 = 0xFF; P2 = 0xFF;
		Delay_ms(100);
	}
	for (i = 0; i < 6; ++i)
	{
		P0 = 0x00; P2 = 0x00;
		Delay_ms(100);
		P0 = 0xFF; P2 = 0xFF;
		Delay_ms(100);
	}
}

void main(){
	unsigned char j;
	
	while(1)
	{
		for (j = 0; j < 3; j++)
		{
			effect_1();
		}
		for (j = 0; j < 5; j++)
		{
			effect_2();
		}
		for (j = 0; j < 3; j++)
		{
			effect_4();
		}
		for (j = 0; j < 3; j++)
		{
			effect_3();
		}
		
		effect_5();
	}
}
