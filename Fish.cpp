#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main()
{
int gd,gm;
detectgraph(&gd,&gm);

initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
ellipse(200,200,0,360,130,50);

line(325,185,390,155);
line(390,155,360,200);
line(360,235,325,215);
line(360,235,335,150);


ellipse(100,200,315,45,50,60);
circle(120,180,3);



line(170,150,260,90);
line(260,90,220,150);

line(170,250,260,290	);
line(260,290,230,250);


arc(220,185,270,90,6);
arc(200,185,270,90,6);
arc(180,185,270,90,6);
arc(200,215,270,90,6);
arc(220,215,270,90,6);
arc(180,215,270,90,6);
arc(240,200,270,90,6);

getch();
closegraph();
}
