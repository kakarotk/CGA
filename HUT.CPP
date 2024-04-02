#include<graphics.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
int main(){
int gdriver=DETECT,gmode;
int xmax,ymax;
initgraph(&gdriver,&gmode,"c:/TURBOC3//BGI");
setcolor(getmaxcolor());
xmax=getmaxx();
ymax=getmaxy();
rectangle(209,297,406,454);
rectangle(257,311,362,454);
line(300,58,210,295);
line(300,58,405,296);
circle(306,189,35);
getch();
closegraph();
return 0;
}

