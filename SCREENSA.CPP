#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>

int main() {
int gd = DETECT, gm,i,maxx,maxy,key=0;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
maxx = getmaxx();
maxy = getmaxy();
while(!kbhit());
{
for(i=0;i<maxy;i++)
{
cleardevice();
settextstyle(3,0,5);
outtextxy(maxx/2,i,"C Graphics");
delay(30);
}
}
getch();
}

