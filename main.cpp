#include<iostream>
#include<windows.h>
#include<conio.h>
#include<math.h>
using namespace std;

void gotoRowCol(int rpos, int cpos)
{
	int xpos=cpos, ypos = rpos;
	COORD scrn;
	HANDLE hOuput = GetStdHandle(STD_OUTPUT_HANDLE);
	scrn.X = cpos;
	scrn.Y = rpos;
	SetConsoleCursorPosition(hOuput, scrn);
}
void sleep(int m)
{
        for(int j=0;j<m*21000;j++)
        {

        }
}int row=1,col=1,ri=30,ci=58,num,d1=0,d2=0,b;
using namespace std;
int s1=0,s2=0;
void Print_Box(int rdim, int cdim,int row,int col,char ch)
{
    for(int i=1;i<=10;i++)
{
    for(int r=1;r<=rdim;r++)
    {
        for(int c=1;c<=cdim;c++)
        {
            if((r==row &&c<=cdim)||(c==col&&r<=rdim)||(r==rdim && c<=cdim)||(c==cdim&&r<=rdim))
            {
                gotoRowCol((r-1)+row,(c-1)+col);
                cout<<ch;
            }
        }
    }
    col=col+6;
}
}
void Print_in_Box(int rdim, int cdim,int ri,int ci,int num)
{
  if(num<=100)
  {
     for(int i=1;i<=10;i++)
       {
             gotoRowCol(ri,ci);
                cout<<num;
                ci=ci-6;
               num++;
      }
Print_in_Box( rdim,  cdim, ri-3, ci=58, num);
  }
}

int dice(int row,int col)
{

while (!kbhit())
 {
            gotoRowCol(row,col);

            cout << "Roll the dice-1: ";
            b = (rand() % 6) + 1;
            cout<<b;
            }
            return b;
}
void roll_dice1(int row,int col)
{
    int a;

while (!kbhit()) {
            gotoRowCol(row,col);
            cout << "Roll the dice-1: ";
            a = (rand() % 6) + 1;
            cout<<a;
            }
            if(d1==0)
            {
               if(a>5)
            {
                d1++;
            }}
            else
            {
                int c,d;
             s1=s1+a;
             if(s1>100)
            {
                s1=s1-a;
            }
             if(a==6)
             {
                c=dice(5,65);
              s1=s1+c;
            if(c==6)
            {
                d=dice(5,65);

            s1=s1+d;
            if(d==6)
            {
                s1=s1-18;
            }
            }
            }
             gotoRowCol(6,65);
            cout<<"s1=="<<s1;
             }
       if(s1==47)
       {
           s1=97;
       }
           if(s1==83)
       {
           s1=33;
       }
getch();
}
 void roll_dice2(int row,int col)
{
    int a;
while (!kbhit()) {
            gotoRowCol(row,col);
            cout << "Roll the dice-2: ";
            a = (rand() % 6) + 1;
            cout<<a;
            }
            sleep(1000);
            if(d2==0)
            {
                if(a>5)
                {
                    d2++;
                }
            }

            else

            { int c,d;
             s2=s2+a;
            if(s2>100)
            {
                s2=s2-a;
            }
        if(a==6)
             {
            c=dice(7,65);
            s2=s2+c;
            if(c==6)
            {
            d=dice(7,65);
            s2=s2+d;
            if(d==6)
            {
                s2=s2-18;
            }
            }
             }
             gotoRowCol(8,65);
             cout<<"s2=="<<s2;
            }
            if(s2==47)
       {
           s2=97;
       }
           if(s2==83)
       {
           s2=33;
       }
getch();
}
void change_position1(int s1)
{if(s1>1)
   {
    int q,s;
 q=33-(((s1/10+1)*3)+1);
 if( (s1==10) || (s1==20) || (s1==30) || (s1==40) || (s1==50) || (s1==60) || s1==70 || s1==80 || s1==90 )
 {
     q=q+3;
     s=5;
 }
 else
 {
 s=66-((s1%10)*6)-1;
 }
 gotoRowCol(q,s);
 cout<<"@";
sleep(10000);
}
}
void erase_position1(int s1)
{if(s1>1)
   {
    int q,s;
 q=33-(((s1/10+1)*3)+1);
 if( (s1==10) || (s1==20) || (s1==30) || (s1==40) || (s1==50) || (s1==60) || s1==70 || s1==80 || s1==90 )
 {
     q=q+3;
     s=5;
 }
 else
 {
 s=66-((s1%10)*6)-1;
 }
 gotoRowCol(q,s);
 cout<<" ";
sleep(10000);
}
}
void change_position2(int s2)
{if(s2>1)
   {
    int q,s;
 q=33-(((s2/10+1)*3)+1);
 if(s2==10 || s2==20 || s2==30 || s2==40 || s2==50 || s2==60 || s2==70 || s2==80 || s2==90)
 {
     q=q+3;
     s=3;
 }
 else
 {
 s=58-(((s2%10)*6)-6);
 }

 gotoRowCol(q,s);
 cout<<"#";
sleep(10000);
}
}

void erase_position2(int s2)
{if(s2>1)
   {
    int q,s;
 q=33-(((s2/10+1)*3)+1);
 if(s2==10 || s2==20 || s2==30 || s2==40 || s2==50 || s2==60 || s2==70 || s2==80 || s2==90)
 {
     q=q+3;
     s=3;
 }
 else
 {
 s=58-(((s2%10)*6)-6);
 }
 gotoRowCol(q,s);
 cout<<" ";
sleep(10000);
}
}
int main()
{
Print_Box(4,7,1,1,219);
Print_Box(7,7,1,1,219);
Print_Box(10,7,1,1,219);
Print_Box(13,7,1,1,219);
Print_Box(16,7,1,1,219);
Print_Box(19,7,1,1,219);
Print_Box(22,7,1,1,219);
Print_Box(25,7,1,1,219);
Print_Box(28,7,1,1,219);
Print_Box(31,7,1,1,219);
Print_in_Box(25,6,30,58,1);

gotoRowCol(3,65);
cout<<"Player1=@"<<endl;
gotoRowCol(4,65);
cout<<"Player2=#"<<endl;
gotoRowCol(4,21);
cout<<"|_|"<<endl;
gotoRowCol(5,21);
cout<<"|_|"<<endl;
gotoRowCol(6,21);
cout<<"|_|"<<endl;
gotoRowCol(7,21);
cout<<"|_|"<<endl;
gotoRowCol(8,21);
cout<<"|_|"<<endl;
gotoRowCol(9,21);
cout<<"|_|"<<endl;
gotoRowCol(10,21);
cout<<"|_|"<<endl;
gotoRowCol(11,21);
cout<<"|_|"<<endl;
gotoRowCol(12,21);
cout<<"|_|"<<endl;
gotoRowCol(13,21);
cout<<"|_|"<<endl;
gotoRowCol(14,21);
cout<<"|_|"<<endl;
gotoRowCol(15,21);
cout<<"|_|"<<endl;
gotoRowCol(16,21);
cout<<"|_|"<<endl;
gotoRowCol(17,21);
cout<<"|_|"<<endl;

gotoRowCol(5,43);
cout<<"/*_*\\";
gotoRowCol(6,45);
cout<<"*"<<endl;
gotoRowCol(7,45);
cout<<"*"<<endl;
gotoRowCol(8,45);
cout<<"*"<<endl;
gotoRowCol(9,45);
cout<<"*"<<endl;
gotoRowCol(10,45);
cout<<"*"<<endl;
gotoRowCol(11,45);
cout<<"*"<<endl;
gotoRowCol(12,45);
cout<<"*"<<endl;
gotoRowCol(13,45);
cout<<"*"<<endl;
gotoRowCol(14,45);
cout<<"*"<<endl;
gotoRowCol(15,45);
cout<<"*"<<endl;
gotoRowCol(16,45);
cout<<"*"<<endl;
gotoRowCol(17,45);
cout<<"*"<<endl;
gotoRowCol(18,45);
cout<<"*"<<endl;
gotoRowCol(19,45);
cout<<"*"<<endl;
gotoRowCol(20,45);
cout<<"*"<<endl;
gotoRowCol(21,45);
cout<<"*"<<endl;
gotoRowCol(11,65);
cout<<"LADDER: 47-97";
gotoRowCol(13,65);
cout<<"SNAKE: 83-33";
while(s1!=100 && s2!=100)
{
    roll_dice1(5,65);
 change_position1(s1);
 sleep(30000);
  erase_position1(s1);
  roll_dice2(7,65);
  change_position2(s2);
  sleep(30000);
  erase_position2(s2);

}
gotoRowCol(20,65);
if(s1==100)
{
    cout<<"player1 is winner";
}
else
{
    cout<<"player2 is winner";
}
gotoRowCol(35,50);
getch();
return 0;
}
