#include<graphics.h>
#include<conio.h>

int main() {
int gd = DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
bar(100,100,200,200);
getch();
closegraph();
return 0;
}
