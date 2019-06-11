#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<dos.h>
int main()
{
	int i,gd=DETECT,gm=DETECT;
	clrscr();
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
       //	circle(200,100,80);
       //	rectangle(350,50,450,100);
      // line(0,240,650,240);
       for(i=0;i<500;i++)
       {
	line(0,240,650,240);
       line(50+i,180,100+i,180);
       line(50+i,180,25+i,200);
       line(100+i,180,125+i,200);
       line(25+i,200,125+i,200);
       circle(50+i,217,19);
       circle(100+i,217,19);
       delay(10);
       cleardevice();


       }
       //	line(0,240,650,240);
	getch();
	closegraph();
	return 0;
}

