#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
#include<dos.h>
void main()
  { randomize();
    int gdriver=DETECT,gmode;
    initgraph(&gdriver,&gmode,"..\\bgi");
    long int midx,midy,k,h,n,m=0;
    long int l=0;
    long char a[1];
    long int  b[8];
    settextstyle(TRIPLEX_FONT, HORIZ_DIR, 6.5);
    outtextxy(0,234,"The Brain Phantasma.");
    loop1:
    while(!kbhit())
    goto loop1;
    cleardevice();
    settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 6);
    outtextxy(0, 0, "How To Play:");
    cout<<"\n\n\n\n\n\n\n\n\n\n";
    cout<<" The Game begins with some Alphabets flashing at the center of the screen. \n Those alphabets keep changing simultaneously at their mean position. \n And between them, EIGHT NUMBERS appear. \n You have to read and remember those numbers in the same sequence as they appear \n Once the alphabets stop changing, the system will ask for the numbers. \n You have to type them.";
    cout<<"\n\n\n Note: \n *Write the numbers one by one only. \n *Do not press any key when the alphabets are flashing. \n\n\n HAVE FUN!";
    getche();
    loop2:
    while(!kbhit())
    goto loop2;
    getche();
    clrscr();
    cleardevice();
    cout<<"Game Initiating in 3...";
    delay(1000);
    cout<<"2...";
    delay(1000);
    cout<<"1...";
    delay(1000);
    clrscr();
    midx=getmaxx()/2;
    midy=getmaxy()/2;
    int q=400;
    for(int i=1;i<5;i++)
     {
       for(int j=65;j<91;j++)
	{
	  a[1]=j;
	  cleardevice();
	  if (j%14!=0)
	  {
	     settextstyle(TRIPLEX_FONT, HORIZ_DIR, 10);
	     outtextxy(midx,midy,a);
	     delay(q);
	     q=q-20;
	     if(q<100)
	     q=100;
	  }
	  else if(j%14==0)
	  {
	     settextstyle(TRIPLEX_FONT, HORIZ_DIR, 10);
	     k=rand() % 10;
	     switch (k)
	      {
		case 1:  outtextxy(midx,midy,"1");
		break;
		case 2:  outtextxy(midx,midy,"2");
		break;
		case 3:  outtextxy(midx,midy,"3");
		break;
		case 4:  outtextxy(midx,midy,"4");
		break;
		case 5:  outtextxy(midx,midy,"5");
		break;
		case 6:  outtextxy(midx,midy,"6");
		break;
		case 7:  outtextxy(midx,midy,"7");
		break;
		case 8:  outtextxy(midx,midy,"8");
		break;
		case 9:  outtextxy(midx,midy,"9");
		break;
		default: outtextxy(midx,midy,"0");
		break;
	      }
	     delay(200);
	     b[m]=k;
	     ++m;
	  }
	}
     }
    cleardevice();
    for(int c=0;c<8;c++)
     {
       cout<<"Enter the "<<c+1<<"th number displayed:";
       cin>>n;
       if (n==b[c])
	{
	  cout<<"Congrats, Your Answer is correct!"<<endl;
	  l=l+1;
	}
       else
	{
	  cout<<"Sorry, but your answer is wrong! The correct answer is"<<b[c]<<endl;
	  break;
	}
     }
    if(l==8)
    cout<<"You Win!";
    else
    cout<<"You Lose! Game Over!";
    kbhit();
    getche();
    clrscr();
    cleardevice();
    getch();
    closegraph();
  }
