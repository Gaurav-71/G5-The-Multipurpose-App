#include<fstream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<process.h>
#include<ctype.h>
#include<dos.h>
#include<time.h>

// global variables
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int clr=0,replysup=0,againj=0,againf=0,againq=0,againp=0,location,loc,mloc;
int ch;
int co=4;
int add=0;
char home_start;
char userid[20];
char social_file[20];
char contacts_file[20];
char reminders_file[20];
char social_file_temp[20];
char contacts_file_temp[20];
char reminders_file_temp[20];
char opt_md;
char dateStr[9];
int chk_p,chk_p1;
int chk_at,chk_dot;
int chk_n;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// global function declarations
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void gtype(char [],int ,int ,int );
void frame(char [],int ,int ,int );
void menu_graphics(char [],int ,int ,int ,int );
void g5_home();
void g5_menu();
void gbot();
void gbot_reset();
void locker_caller();
void user_caller();
void admin(int );
void admin_login(int );

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// classes
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class userdata
{
private:
	char pword[30];
public:
	char dd1[10];
	char mm1[10];
	char yyyy1[10];
	int dd;
	int mm;
	int yyyy;
	char name[30];
	char uname[30];
	void input();
	void output();
	int find(char []);
	int findp(char []);
	void user_mod_rec(char mod_index[]);


};

class calculator
{
public:
	int pos;
	int trig;
	long float in;
	long float out;
	long float final;
	int ac;
	int operation;
	int operation1;
	long float add(long float ,long float );
	long float subtract(long float ,long float );
	long float multiply(long float ,long float );
	long float divide(long float ,long float );
	long float exponent(long float ,long float );
	int reminder(int ,int );
	void input(int );
	void output();
	void graphics();
	void arr_inp();
	void arr_inp1();
	void fill();
	void fill1();
	void select();
	void prompter(int ,int );
	void prompter1(int , int);
	void function(int );
	void calculator_caller();
	calculator()
		{
		in=0;
		out=0;
		final=0;
		}
};

class horoscope : public userdata
{
public:
	char starsign[15];
	void today();
	void weekly();
	void yearly();
	void stars();
	void arr_inp();
	void fill();
	void hor_sort();
	void hor_frame(int );
	void hor_caller();
	void option(int ,int );
};

class chatbot
{
private :
	char usertxt[200];
public:
	int prompt_var;
	void input();
	void compute();
	void calculate();
	void sqr(float);
	void add(float ,float );
	void sub(float ,float );
	void mul(float ,float );
	void div(float ,float );
	void convert(float );
	void log();
	void note();
	void weather();
	void jokes();
	void facts();
	void time();
	void date();
	void converse(int );
	void poem();
	void quote();
	void luck();
	void minigame();
	void prompt();
	void layout();
	void cb_caller();

};

class games_tod
{
private:
	char p_1[20];
	char p_2[20];
	char p_3[20];
	char p_4[20];
	char p_5[20];
public:
	int players;
	int rndt;
	int rndd;
	int x1;
	char ch;
	void p_input();
	void selector();
	void truth();
	void dare();
	void tdisp();
	void player(int );
	void arr_inp();
	void fill();
	void tod_caller();
		games_tod()
		{
		x1=0;
		rndt=15;
		rndd=15;
		}
};

class social
{
protected:
	char pword[30];
private:
	char platform[30];
	char phone[30];
	char email[30];
public:
	char social_index[30];
	int find(char []);
	void input();
	void output();
	void social_mod_rec(char []);
};

class contacts
{
private:
	char name[20];
	char number[12];
	char type[20];
public:
	char contacts_index[20];
	int find(char []);
	void input();
	void output();
	void contacts_mod_rec(char []);
};

class reminders
{
private:
	char rem[50];
public:
	char reminders_index[20];
	int find(char []);
	void input();
	void output();
	void reminders_mod_rec(char []);
};


// class objects
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

userdata user;
calculator c;
horoscope hor;
chatbot cb;
games_tod d;
social s1;
contacts c1;
reminders r1;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// shared functions
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void gtype(char string[200],int color,int x=wherex(),int y=wherey())
{
gotoxy(x,y);textcolor(color);cprintf(string);
}

void gtype1(char string[200],int x=wherex(),int y=wherey())
{
gotoxy(x,y);cprintf(string);
}

void frame(char title[],int c,int x,int y)
{
for(int a=2;a<80;a++)
		{
		gtype("\261",4,a,2);
		gtype("\261",4,a,24);
		gtype("\261",4,a,22);
		gtype("\261",4,a,4);
		}
for(int b=2;b<25;b++)
		{
		gtype("\261",4,1,b);
		gtype("\261",4,80,b);
		}
	gtype("\261",4,14,3);
	gtype("G",9,7,3);gtype("5",10);
	gtype(" B",15,4,23);gtype("ack",8);gtype(" - ",14);gtype("'b' ",15);
	gtype(" H",15,35,23);gtype("ome",8);gtype(" - ",14);gtype("'h' ",15);
	gtype(" E",15,66,23);gtype("xit",8);gtype(" - ",14);gtype("'e' ",15);
	gtype(" \256 ",15,9,24);
	gtype(" \350 ",15,40,24);
	gtype(" \31 ",15,71,24);
	gtype(title,c,x,y);
}

void menu_graphics(char heading[],int c,int x1,int y1,int z)
{
frame(heading,c,x1,y1);
for(int a=2;a<80;a++)
	{
	gtype("-",3,a,5);
	gtype("-",3,a,7);
	}
gtype("|",4,14,5);
gtype("|",4,14,6);
gtype("|",4,14,7);
gotoxy(4,6);textcolor(GREEN);cprintf("\4 ");textcolor(7);cprintf("E");textcolor(BLUE);cprintf("N");;textcolor(YELLOW);cprintf("T");textcolor(3);cprintf("E");textcolor(BLUE);cprintf("R");textcolor(GREEN);cprintf(" \4");
gtype("\333   \333",4,12,10);
gtype("\333   \333",2,12,14);
gtype("\333   \333",1,12,18);
gtype("+",9,14,10);
gtype("\17",7,14,14);
gtype("-",7,14,18);
for(int x=12;x<17;x++)
	{
	gtype("\333",4,x,9);
	gtype("\333",4,x,11);
	gtype("\333",2,x,13);
	gtype("\333",2,x,15);
	gtype("\333",1,x,17);
	gtype("\333",1,x,19);
	}
if(z==1)
	{
	gtype("Add",7,18,10);
	gtype("View",7,18,14);
	gtype("Modify",7,18,18);
	gotoxy(16,6);
	}
else if(z==2)
	{
	gtype("\364",9,14,10);
	gtype("\17",7,14,14);
	gtype("\376",7,14,18);
	gtype("Daily Horoscope",7,18,10);
	gtype("Weekly Horoscope",7,18,14);
	gtype("Yearly Horoscope",7,18,18);
	gotoxy(16,6);
	}
else if(z==3)
	{
	gtype("\342",9,14,10);
	gtype("\-",7,14,14);
	gtype("\17",7,14,18);
	gtype("Modify",7,18,10);
	gtype("Delete",7,18,14);
	gtype("View",7,18,18);
	gotoxy(16,6);
	}
if(z==4)
	{
	gtype("Create Account",7,18,10);
	gtype("Login",7,18,14);
	gtype("Delete",7,18,18);
	gotoxy(16,6);
	}
if(z==5)
	{
	gtype("About",7,18,10);
	gtype("Modify",7,18,14);
	gtype("Delete",7,18,18);
	gotoxy(16,6);
	}

}


void modified()
{
clrscr();
frame("\4 Modify \4",7,37,3);
for(int x=15;x<65;x++)
	{
	gtype("\333",10,x,9);
	gtype("\333",10,x,16);
	}
for(int y=9;y<17;y++)
	{
	gtype("\333",10,15,y);
	gtype("\333",10,65,y);
	}
gtype("\4 File Succesfully Modified \4",15,25,12);
getch();
}

void deleted()
{
clrscr();
frame("\4 Delete \4",7,37,3);
for(int x=15;x<65;x++)
	{
	gtype("\333",10,x,9);
	gtype("\333",10,x,16);
	}
for(int y=9;y<17;y++)
	{
	gtype("\333",10,15,y);
	gtype("\333",10,65,y);
	}
gtype("\4 File Succesfully Deleted \4",15,25,12);
}

void error()
{
clrscr();
frame("\4 Error \4",7,37,3);
for(int x=15;x<65;x++)
	{
	gtype("\333",10,x,9);
	gtype("\333",10,x,16);
	}
for(int y=9;y<17;y++)
	{
	gtype("\333",10,15,y);
	gtype("\333",10,65,y);
	}
gtype("\4 Error 404 : File Not Found \4",15,23,12);
}

void clear()
{
clrscr();
frame("\4 Clear \4",7,37,3);
for(int x=15;x<65;x++)
	{
	gtype("\333",10,x,9);
	gtype("\333",10,x,16);
	}
for(int y=9;y<17;y++)
	{
	gtype("\333",10,15,y);
	gtype("\333",10,65,y);
	}
gtype("\4 All data cleared \4",15,26,12);
}

void select_md()
{
clrscr();
frame("\4 Selection \4",7,37,3);
for(int x=15;x<65;x++)
	{
	gtype("\333",10,x,9);
	gtype("\333",10,x,16);
	}
for(int y=9;y<17;y++)
	{
	gtype("\333",10,15,y);
	gtype("\333",10,65,y);
	}
int copt=0;
gtype("\20 Press 'm' to Modify The Data.",15,23,11);
gtype("\20 Press 'd' to Delete The Data.",15,23,13);
do
	{
	opt_md=getch();
	if(opt_md=='m')
		{
		copt=1;
		}
	else if(opt_md=='d')
		{
		copt=1;
		}
	else if(opt_md!='m' || opt_md!='d')
		{
		copt=0;
		}
	}
	while(copt==0);
}

void file_namer()
{
strcpy(userid,user.uname);
strcpy(social_file,userid);
strcpy(contacts_file,userid);
strcpy(reminders_file,userid);
strcat(social_file,"_social.dat");
strcat(contacts_file,"_contacts.dat");
strcat(reminders_file,"_reminders.dat");
strcpy(social_file_temp,userid);
strcpy(contacts_file_temp,userid);
strcpy(reminders_file_temp,userid);
strcat(social_file_temp,"_social_temp.dat");
strcat(contacts_file_temp,"_contacts_temp.dat");
strcat(reminders_file_temp,"_reminders_temp.dat");
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// graphic functions
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void gbot()
{
textcolor(7);cprintf("\260");textcolor(LIGHTGREEN);cprintf(" G");textcolor(7);cprintf("-");textcolor(RED);cprintf("bot");textcolor(YELLOW);cprintf(" : ");
for(int x=1;x<4;x++)
	{
	delay(100);
	gtype("\t",x);
	delay(200);
	}
gtype("        ",15,11,wherey());
gotoxy(11,wherey());
}

void gbot_reset()
{
loc=6;
location=6;
}

void header()
{
clrscr();
for(int x=1;x<21;x++)
	{
	for(int y=3;y<7;y++)
		{
		gotoxy(x,y);textcolor(7);cprintf("\26");
		}
	}
	for(x=61;x<81;x++)
		{
		for(int y=3;y<7;y++)
			{
			gotoxy(x,y);textcolor(7);cprintf("\26");
			}
		}
		for(int y=2;y<8;y++)
			{
			gotoxy(22,y);textcolor(RED);cprintf("\26");
			gotoxy(23,y);textcolor(GREEN);cprintf("\26");
			gotoxy(24,y);textcolor(BLUE);cprintf("\26");
			gotoxy(59,y);textcolor(RED);cprintf("\26");
			gotoxy(58,y);textcolor(GREEN);cprintf("\26");
			gotoxy(57,y);textcolor(BLUE);cprintf("\26");
			}
			for(y=2;y<9;y++)
				{
				gotoxy(26,y);textcolor(RED);cprintf("\333");
				gotoxy(55,y);textcolor(RED);cprintf("\333");
				}
				for(y=3;y<8;y++)
					{
					gotoxy(28,y);textcolor(GREEN);cprintf("\333");
					gotoxy(53,y);textcolor(GREEN);cprintf("\333");
					}
					for(y=4;y<7;y++)
						{
						gotoxy(30,y);textcolor(BLUE);cprintf("\333");
						gotoxy(51,y);textcolor(BLUE);cprintf("\333");
						}
						for(x=31;x<51;x++)
							{
							for(int y=4;y<7;y++)
								{
								gotoxy(x,y);textcolor(BROWN);cprintf("\262");
								gotoxy(x,y);textcolor(BROWN);cprintf("\262");
								}
							}
for(y=9;y<24;y++)
	{
	gotoxy(1,y);textcolor(RED);cprintf("\262");
	gotoxy(80,y);textcolor(RED);cprintf("\262");
	}
	for(x=1;x<81;x++)
		{
		gotoxy(x,24);textcolor(RED);cprintf("\262");
		}
		for(x=1;x<25;x++)
			{
			gotoxy(x,8);textcolor(RED);cprintf("\262");
			}
			for(x=57;x<81;x++)
				{
				gotoxy(x,8);textcolor(RED);cprintf("\262");
				}
for(x=3;x<25;x++)              //tips
	{
	gotoxy(x,10);textcolor(3);cprintf("\262");
	gotoxy(x,22);textcolor(3);cprintf("\262");
	}
	for(y=10;y<22;y++)           //tips
		{
		gotoxy(3,y);textcolor(3);cprintf("\262");
		gotoxy(24,y);textcolor(3);cprintf("\262");
		}
		for(x=26;x<79;x++)         //rem
			{
			gotoxy(x,10);textcolor(3);cprintf("\262");
			gotoxy(x,14);textcolor(3);cprintf("\262");
			}
			for(x=26;x<55;x++)
				{
				gotoxy(x,16);textcolor(3);cprintf("\262");
				gotoxy(x,22);textcolor(3);cprintf("\262");
				}
				for(y=17;y<22;y++)
					{
					gotoxy(26,y);textcolor(3);cprintf("\262");
					gotoxy(54,y);textcolor(3);cprintf("\262");
					}
					for(x=56;x<79;x++)
						{
						gotoxy(x,16);textcolor(3);cprintf("\262");
						gotoxy(x,20);textcolor(3);cprintf("\262");
						}
						for(y=17;y<20;y++)
							{
							gotoxy(56,y);textcolor(3);cprintf("\262");
							gotoxy(78,y);textcolor(3);cprintf("\262");
							}

gotoxy(39,5);textcolor(LIGHTBLUE);cprintf(" G");
gotoxy(41,5);textcolor(LIGHTGREEN);cprintf("5 ");
gotoxy(70,20);textcolor(10);cprintf(" \4 Date \4 ");
gotoxy(16,22);textcolor(10);cprintf(" \4 Tips \4 ");
gotoxy(78,11);textcolor(3);cprintf("\262");
gotoxy(26,11);textcolor(3);cprintf("\262");
gotoxy(78,11);textcolor(3);cprintf("\262");
gotoxy(78,12);textcolor(3);cprintf("\262");
gotoxy(26,12);textcolor(3);cprintf("\262");
gotoxy(78,12);textcolor(3);cprintf("\262");
gotoxy(78,13);textcolor(3);cprintf("\262");
gotoxy(26,13);textcolor(3);cprintf("\262");
gotoxy(78,13);textcolor(3);cprintf("\262");
gotoxy(67,14);textcolor(10);cprintf(" \4 Thought \4 ");
gotoxy(37,22);textcolor(10);cprintf(" \4 Notifications \4 ");
gotoxy(57,22);textcolor(6);cprintf("Press enter to begin !");
}

void readpword(char str[])
{
	for(int i=0;;i++)
	{
		str[i]=getch();
		if(str[i]==13)
		break;
		cout<<"*";
	}
	str[i]='\0';
}

void g5_home()
{
header();
//tips
gotoxy(3,12);textcolor(15);cprintf("\5 Use arrow keys in");
gotoxy(5,13);textcolor(15);cprintf("all menus.");
gotoxy(3,15);textcolor(15);cprintf("\5 Press 'L' to go to");
gotoxy(5,16);textcolor(15);cprintf("login menu.");
gotoxy(3,18);textcolor(15);cprintf("\5 'A' -> Admin.");
gotoxy(3,20);textcolor(15);cprintf("\5 Press 'E' to exit.");
_strdate(dateStr);
gtype(dateStr,15,64,18);
gtype("Design is a journey of discovery !",7,34,12);
//notifs
gotoxy(26,18);textcolor(15);cprintf("\5 G-bot says hi !");
gotoxy(26,20);textcolor(15);cprintf("\5 Check your new Horoscope.");
gotoxy(78,23);
home_start=getch();
switch(home_start)
	{
	case 'b':
		clrscr();
		g5_menu();
		break;
	case 'e':
		exit(0);
		break;
	case 'l':
		clrscr();
		user_caller();
		break;
	case 'L':
		clrscr();
		user_caller();
		break;
	case 'a':
		clrscr();
		admin_login(1);
		break;
	case 'A':
		clrscr();
		admin_login(1);
		break;
	case 13:
		clrscr();
		g5_menu();
		break;
	case 27:
		exit(0);
		break;
	default:
		clrscr();
		g5_menu();
		break;

	}
}



void hi()
{
for(int y=4;y<12;y++)
	{
	gtype("\333",7,5,y);
	gtype("\333",7,7,y);
	gtype("\333",7,14,y);
	gtype("\333",7,16,y);
	}
for(int x=7;x<14;x++)
	{
	gtype("\333",7,x,7);
	gtype("\333",7,x,8);
	}
for(y=8;y<12;y++)
	{
	gtype("\333",7,19,y);
	gtype("\333",7,21,y);
	}
	gtype("\333",7,19,6);
	gtype("\333",7,21,6);
for(y=4;y<12;y++)  //
	{
	delay(150);
	gtype("\263",3,6,y);
	gtype("\263",3,15,y);
	}
for(y=11;y>7;y--)    //
	{
	delay(150);
	gtype("\263",3,20,y);
	}
gtype("\261",3,20,6);
for(y=4;y<11;y++)
	{
	gtype("\263",4,25,y);
	}
	gtype("\t",4,25,11);
	delay(350);
for(y=6;y<11;y++)
	{
	gtype("\263",2,27,y);
	}
	gtype("\t",2,27,11);
	delay(350);
for(y=8;y<11;y++)
	{
	gtype("\263",1,29,y);
	}
	gtype("\t",1,29,11);
}

void thi_s()
{
for(int x=39;x<50;x++)//43,46
	{
	gtype("\333",7,x,4);
	}
for(int y=4;y<12;y++)
	{
	gtype("\333",7,43,y);
	gtype("\333",7,45,y);
	}
for(y=6;y<12;y++)
	{
	gtype("\333",7,47,y);
	gtype("\333",7,49,y);
	gtype("\333",7,54,y);
	gtype("\333",7,56,y);
	}
for(x=49;x<55;x++)
	{
	gtype("\334",7,x,9);
	gtype("\334",7,x,8);
	}
for(y=8;y<12;y++)
	{
	gtype("\333",7,58,y);
	gtype("\333",7,60,y);
	}
	gtype("\333",7,58,6);
	gtype("\333",7,60,6);
for(x=62;x<68;x++)
	{
	gtype("\334",7,x,7);
	gtype("\334",7,x,9);
	gtype("\334",7,x,11);
	}
for(y=8;y<10;y++)
	{
	gtype("\333",7,62,y);
	gtype("\335",7,64,y);
	}
for(y=10;y<12;y++)
	{
	gtype("\333",7,67,y);
	gtype("\335",7,66,y);
	}
for(y=4;y<12;y++)//
	{
	delay(150);
	gtype("\263",5,44,y);
	gtype("\263",5,55,y);
	gtype("\263",5,48,y);
	gtype("\333",7,48,4);
	gtype(" ",0,48,5);
	gtype(" ",0,55,4);
	gtype(" ",0,55,5);
	}
for(y=11;y>7;y--)    //
	{
	delay(150);
	gtype("\263",5,59,y);
	}
gtype("\261",5,59,6);
gtype("\263",5,63,8);
}

void is()
{
for(int y=19;y<23;y++)
	{
	gtype("\333",7,52,y);
	gtype("\333",7,54,y);
	}
	gtype("\333",7,52,17);
	gtype("\333",7,54,17);
for(int x=57;x<64;x++)
	{
	gtype("\333",7,x,18);
	gtype("\334",7,x,20);
	gtype("\333",7,x,22);
	}
gtype("\335",7,57,19);
gtype("\336",7,63,21);
gtype("\335",7,59,19);
for(y=22;y>18;y--)
	{
	delay(150);
	gtype("\263",12,53,y);
	}
gtype("\261",12,53,17);
gtype("\263",12,58,19);
}

void g5()
{
for(int x=1;x<17;x++)
	{
	gtype("\333",4,x,2);
	gtype("\333",4,x,24);
	}
for(x=65;x<81;x++)
	{
	gtype("\333",4,x,24);
	gtype("\333",4,x,2);
	}
for(int y=2;y<10;y++)
	{
	gtype("\333",4,1,y);
	gtype("\336",7,2,y);
	gtype("\333",4,80,y);
	gtype("\335",7,79,y);
	}
for(y=16;y<25;y++)
	{
	gtype("\333",4,1,y);
	gtype("\336",7,2,y);
	gtype("\333",4,80,y);
	gtype("\335",7,79,y);
	}
for(y=22;y>4;y--)
	{
	gtype("\333",2,39,y);
	}
for(x=39;x<66;x++)
	{
	gtype("\333",2,x,4);
	}
for(y=5;y<23;y++)
	{
	gtype("\333",2,65,y);
	}
for(x=65;x>38;x--)
	{
	gtype("\333",2,x,22);
	}
for(x=38;x>15;x--)
	{
	gtype("\333",1,x,22);
	}
for(y=22;y>4;y--)
	{
	gtype("\333",1,15,y);
	}
for(x=38;x>14;x--)
	{
	gtype("\333",1,x,4);
	}
for(x=39;x>12;x--)
	{
	for(y=21;y>4;y--)
		{
		gtype("\260",3,x,y);
		}
	}
for(x=39;x<68;x++)
	{
	for(y=21;y>4;y--)
		{
		gtype("\260",10,x,y);
		}
	}
for(int c=2;c<32;c++)
	{

	textcolor(c);
	delay(150);
	for(x=33;x>20;x--)
		{
		gtype1("\333",x,8);
		gtype1("\334",x,9);
		}
	for(x=33;x>20;x--)
		{
		gtype1("\333",x,15);
		}
	for(x=33;x>28;x--)
		{
		gtype1("\334",x,13);
		}
	for(y=8;y<16;y++)
		{
		gtype1("\333",20,y);
		gtype1("\336",21,y);
		}
	for(y=8;y<15;y++)
		{
		gtype1("\333",46,y);
		gtype1("\336",47,y);
		}
	for(y=14;y<20;y++)
		{
		gtype1("\333",32,y);
		gtype1("\336",33,y);
		gtype1("\333",60,y);
		gtype1("\336",61,y);
		}
	for(x=46;x<60;x++)
		{
		gtype1("\334",x,8);
		}
	for(x=46;x<62;x++)
		{
		gtype1("\334",x,14);
		gtype1("\337",x,19);
		}
	for(y=10;y<16;y++)
		{
		gtype("\t",c+2,1,y);
		gtype("\t",c+3,2,y);
		gtype("\t",c+2,80,y);
		gtype("\t",c+3,79,y);
		}
	for(x=17;x<65;x++)
		{
		gtype("\t",c+7,x,2);
		gtype("\t",c+7,x,24);
		}
	}
}

void hi_blind()
{
for(int y=2;y<25;y++)
	{
	delay(55);
	for(int x=1;x<34;x++)
		{
		gtype("\334",4,x,y);
		}
	}
for(int x=1;x<34;x++)
	{
	delay(15);
	for(y=3;y<13;y++)
		{
		gtype("\262",4,x,y);
		gtype(" ",0,x,y);
		}
	}
}

void this_blind()
{
for(int x=35;x<81;x++)
	{
	delay(15);
	gtype("\334",2,x,13);
	}
for(int y=13;y>2;y--)
	{
	delay(15);
	gtype("\333",2,80,y);
	}
for(x=80;x>34;x--)
	{
	delay(15);
	gtype("\334",2,x,2);
	}
for(y=3;y<14;y++)
	{
	delay(15);
	gtype("\333",2,35,y);
	}

}

void is_blind()
{
for(int x=35;x<81;x++)
	{
	delay(15);
	for(int y=15;y<25;y++)
		{
		gtype("\262",3,x,y);
		}
	}

for(x=35;x<81;x++)
	{
	gtype("\334",3,x,14);
	}
for(int y=23;y>15;y--)
	{
	delay(45);
	for(x=42;x<73;x++)
		{
		gtype(" ",0,x,y);
		}
	}
}

void f_transition()
{
for(int x=80;x>0;x--)
	{
	delay(25);
	for(int y=24;y>1;y--)
		{
		gtype("\376",14,x,y);
		}
	}
}

void graphics()
{
clrscr();
hi_blind();
hi();
this_blind();
thi_s();
is_blind();
is();
f_transition();
clrscr();
g5();
delay(2000);
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
