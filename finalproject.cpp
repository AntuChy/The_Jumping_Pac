
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include <time.h>
#include<string.h>



 int fo=0;
 int co=rand() % 10 + 6;
 int score=0,high=0;
// char a[50];
// sprintf(a,"%d",score) ;
  char a[50];
  void formalities()
{

    printf("(1)Press '1' to enter your name\n");
    printf("\t\t\t\t\t  (2)Press '2' to see the highscores\n");
    printf("\t\t\t\t\t  (3)Press '3' to exit the game\n");
}

int intro()
{
    printf("\n\n\n\n\t\t\t\t\tTHE JUMPING PAC\t\t\t\t\t\n\n\n\n\n\n");
}

void gotoxy(int x, int y)
{

 COORD coord;

 coord.X = x;

 coord.Y = y;

 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);

}
int  pac(int jump=0)
{

     score++;
    int j,n=0,k=60,l=70;

    int x, y, i;
    setcolor(3);
     settextstyle(1,0,1);
    outtextxy(500,10,"score: ");

     setcolor(3);
     settextstyle(1,0,1);
    outtextxy(20,10,"press x to exit, press space to jump");
    srand (time(NULL));
    static int t=0,p=0;

    if(jump==0)
        p=0;
    else if(jump==2)
        p-=30;
    else p+=30;
    setcolor(15);
    line(0,300,800,300);
    line(0,301,800,301);
    line(0,302,800,302);
    line(0,303,800,303);

    setfillstyle(1,RED);
    rectangle(600-t,230,650-t,300);
    floodfill (640-t,231, 15);
    t+=20;


     //score++;
    for (i=1; i<40; i++)
    {
        setcolor(2);

        arc(k, 260-p, 40, 330,i );

    }

    for(j=1; j<6; j++)
    {

        setcolor(0);

        arc(l,230-p,0,360,j);
    }


    setcolor(co);
     for(int i=0;i<=10;i++){
    circle(600-fo,165,i);
     }


     fo+=3;
    if(p>=80 && fo>=497){
    fo=0;
    score+=20;
    co=rand() % 10 + 6;
   }
   if(fo==600){
    fo=0;
    co=rand() % 10 + 6;
   }

    delay(70);


    cleardevice();
    settextstyle(1,0,1);
    outtextxy(500,10,"score: ");
     setcolor(3);
     settextstyle(1,0,1);
    outtextxy(20,10,"press x to exit, press space to jump");

    setcolor(co);

   for(int i=0;i<=10;i++){
    circle(600-fo,165,i);
     }


     fo+=3;
   if(p>=80 && fo>=497){
    fo=0;
    score+=20;
    co=rand() % 10 + 6;
   }
   if(fo==600){
    fo=0;
    co=rand() % 10 + 6;
   }

    setcolor(15);
    line(0,300,800,300);
    line(0,301,800,301);
    line(0,302,800,302);
    line(0,303,800,303);
    setfillstyle(1,RED);
    rectangle(600-t,230,650-t,300);
    floodfill (640-t, 231,15);
    t+=20;


    for (i=1; i<40; i++)
    {

        setcolor(2);

        arc(k, 260-p, 0, 360,i );
    }

    for(j=1; j<6; j++)
    {

        setcolor(0);

        arc(l,230-p,0,360,j);
    }
    if(t>=660)
    {
        t=0;
    }
     if(t>=550 && p<70)
    {

         setcolor(4);

         settextstyle(1,0,5);

        outtextxy(150,100,"Game over");
          settextstyle(1,0,1);

            outtextxy(580,10,a);
        getch();

        fo=0;
        co=rand() % 10 + 6;
        t=0;
        if(high<score){
            high=score;
        }

        score=0;


    }


    delay(120);

    cleardevice();
    settextstyle(1,0,1);
    outtextxy(500,10,"score: ");
     setcolor(3);
     settextstyle(1,0,1);
    outtextxy(20,10,"press x to exit, press space to jump");
     setcolor(co);

    for(int i=0;i<=10;i++){
    circle(600-fo,165,i);

     }


     fo+=3;
    if(p>=80 && fo>=497 ){
    fo=0;
    co=rand() % 10 + 6;
    score+=20;
   }
   if(fo==600){
    fo=0;
    co=rand() % 10 + 6;
   }

}
int play()
{
    int gd = DETECT,gm;
     int i=0;

    initgraph(&gd,&gm,"");
    char ch;

    while(true)
    {

    while(!kbhit())
    {
        //flush=_getch();
        sprintf(a,"%d",score) ;
           settextstyle(1,0,1);

            outtextxy(580,10,a);

        pac();

    }

    ch=getch();
    if(ch==' ')
    {
        for(i=0; i<40; i+=10)
        {
             sprintf(a,"%d",score) ;
             settextstyle(1,0,1);

             outtextxy(580,10,a);
            pac(1);

        }
        for(i=0; i<40; i+=10)
        {
             sprintf(a,"%d",score) ;
            settextstyle(1,0,1);

            outtextxy(580,10,a);
            pac(2);

        }
    }
    if(ch=='x'){

        closegraph();
        break;
    }
    }
}
int main()
{

    char ch1,ch2;
    char name[100];
    int x=1,y=1,z,w=0,op;
    gotoxy(40,12);
     printf("Project By : team_71\n");
      gotoxy(40,15);
  printf("Team Members : \n\t\t\t\t\t(1)Antu Chowdhury\n\t\t\t\t\t(2)Jahid Hasan\n\t\t\t\t\t(3)Md.Shofiqul Islam\n\t\t\t\t\t(4)Mohammad Rony\n\t\t\t\t\t(5)Wasiuzzaman Shadin\n");
  for(int j=0;j<1000000000;j++);
  system("cls");
  gotoxy(40,10);
  intro();

        for(int j=0;j<1000000000;j++);
        system("cls");
        int r , q ;
        gotoxy(45,10);
        printf("Loading.....");
        gotoxy(45,12);

        for(r=1;r<=20;r++)
        {
            for(q=0;q<=100000000;q++);
            printf("%c",254);
        }

        system("cls");

        play();
        gotoxy(42,10);
        formalities();


      while(op!=3){
       scanf("%d",&op);
       if(op==1){
        system("cls");
        gotoxy(40,8);
        printf("\n\n\n\t\t\tEnter your name : ");

        scanf("%s",name);

        FILE *highscore;
        highscore = fopen("highscore.txt","a+");
        fprintf(highscore,"%s",name);
        fputs(" --> ",highscore);
        fprintf(highscore,"%d",high);

        fputs("\n",highscore);
        fclose(highscore);
        gotoxy(23,15);
         printf("Press any key to return to the main menues\n");
        if(_getch >=0 && _getch()<=255)
        {
          system("cls");
           gotoxy(42,10);
          formalities();
        }

       }
       if(op==2){
            system("cls");
          FILE *highscore;
          highscore = fopen("highscore.txt","r");
          char singleline[1000];

          while(!feof(highscore))
          {
              fgets(singleline,1000,highscore);
              puts(singleline);
          }
          fclose(highscore);
        printf("\n\nPress any key to return to the main menues\n");
        if(_getch >=0 && _getch()<=255)
        {
          system("cls");
         formalities();
        }

       }
       if(z==3){
        return 0;
       }
      }

    return 0;

}


