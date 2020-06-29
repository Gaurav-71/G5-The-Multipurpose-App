int check=1;

void fill()
{
for(int x=72;x<80;x++)
	{
	for(int y=1;y<26;y++)
		{
		gtype("\333",6,x,y);
		}
	}
}

void user_graphics(int z)
{
for(int x=2;x<72;x++)
	{
	for(int y=1;y<26;y++)
		{
		gtype("\333",6,x,y);
		}
	}
for(x=10;x<72;x++)
	{
	gtype("\334",4,x,2);
	gtype("\333",4,x,3);
	gtype("\261",2,x,4);
	gtype("\333",4,x,5);
	gtype("\333",4,x,13);
	gtype("\333",4,x,23);
	}
for(int y=4;y<24;y++)
	{
	gtype("\333",4,10,y);
	gtype("\333",4,71,y);
	}
for(x=11;x<71;x++)
	{
	for(y=6;y<13;y++)
		{
		gtype("\261",3,x,y);
		}
	for(y=14;y<23;y++)
		{
		gtype("\261",3,x,y);
		}
	}
gotoxy(11,7);clreol();gtype("\333",4,71,7);
gotoxy(11,9);clreol();gtype("\333",4,71,9);
gotoxy(11,11);clreol();gtype("\333",4,71,11);
gotoxy(11,15);clreol();gtype("\333",4,71,15);
gotoxy(11,18);clreol();gtype("\333",4,71,18);
gotoxy(11,21);clreol();gtype("\333",4,71,21);
gtype(" \4 DATE OF BIRTH \4 ",7,31,13);
if(z==1)
	{
	gtype("\4 Name : ",7,13,7);
	gtype("\4 Username : ",7,13,9);
	}
else if(z==2)
	{
	gtype("\4 Name : ",7,13,9);
	gtype("\4 Username : ",7,13,7);
	}
gtype("\4 Password : ",7,13,11);
gtype("\4 Day (dd) : ",7,13,15);
gtype("\4 Month (mm) : ",7,13,18);
gtype("\4 Year (yyyy) : ",7,13,21);
for(x=72;x<80;x++)
	{
	for(y=1;y<26;y++)
		{
		gtype("\333",6,x,y);
		}
	}
textcolor(7);
}

void userdata :: input()
{
user_graphics(1);
gtype(" \4 ACCOUNT CREATION \4 ",7,30,4);
gtype(" ",7,21,7);
do
	{
	gets(name);
	check=1;
	for(int j=0;j<strlen(name);j++)
		{
		if(isalpha(name[j])||name[j]=='\0');
		else
			{
			check=0;
			gtype("\5 ERROR \5",14,61,7);
			gotoxy(11,8);clreol();gtype("\333",4,71,8);fill();
			gtype("\247 Name ( CHARACTERS ONLY ) : ",7,13,8);
			gtype(" ",7,41,8);
			break;
			}
		}
	}
while(check==0);
gtype("          ",14,61,7);
chk_n=0;
gotoxy(26,9);gets(uname);
/*
do
	{
	gotoxy(26,9);gets(uname);
	ifstream ifile1;
	ifile1.open("user_14.dat",ios::in | ios :: binary);
	ifile1.read((char*)&user,sizeof(user));
	if(ifile1)
		{
		while(!ifile1.eof() && chk_n == 0)
			{
			if(find(uname)==1)
				{
				chk_n=0;
				ifile1.read((char*)&user,sizeof(user));
				}
			else
				{
				chk_n=1;
				ifile1.read((char*)&user,sizeof(user));
				}
			}
		}
	}
	while(chk_n==0);
 */


gotoxy(26,11);gets(pword);

gtype(" ",7,25,15);
do
	{
	cin>>dd1;
	dd=atoi(dd1);
	if(dd<1||dd>31)
		{
		gtype("\5 ERROR \5",14,61,15);
		gotoxy(11,16);clreol();gtype("\333",4,71,16);fill();
		gtype("\247 Day (1-31)[dd] : ",7,13,16);
		gotoxy(32,16);
		}
	}
	while(dd<1||dd>31);

gtype("          ",14,61,15);
gtype(" ",7,27,18);
do
	{
	cin>>mm1;
	mm=atoi(mm1);
	if(mm<1||mm>12)
		{
		gtype("\5 ERROR \5",14,61,18);
		gotoxy(11,19);clreol();gtype("\333",4,71,19);fill();
		gtype("\247 Month (1-12)[mm] : ",7,13,19);
		gotoxy(34,19);
		}
	}
	while(mm<1||mm>12);
gtype("          ",14,61,18);
gtype(" ",7,28,21); //49,19
do
	{
	cin>>yyyy1;
	yyyy=atoi(yyyy1);
	if(yyyy<1900 || yyyy>2017)
		{
		gtype("\5 ERROR \5",14,61,21);
		gotoxy(11,20);clreol();gtype("\333",4,71,20);fill();
		gtype("\247 Year (1900 - 2017)[yyyy] : ",7,13,20);
		gotoxy(42,20);
		}
	}
while(yyyy<1900||yyyy>2017);
gtype("          ",14,61,21);
}

void userdata :: output()
{
user_graphics(1);
gtype(" \4 ACCOUNT DETAILS \4 ",7,30,4);
gotoxy(22,7);puts(name);
gotoxy(26,9);puts(uname);
gotoxy(26,11);puts(pword);
gotoxy(26,15);cout<<dd;
gotoxy(28,18);cout<<mm;
gotoxy(29,21);cout<<yyyy;
}

int userdata :: find(char string[])
	{
	if(!strcmpi(uname,string))
		return 1;
	else
		return 0;
	}

int userdata :: findp(char string[])
	{
	if(!strcmpi(pword,string))
		return 1;
	else
		return 0;
	}
void user_feed()
{
clrscr();
ofstream ofile;
ofile.open("user_14.dat", ios :: app | ios :: binary);
user.input();
ofile.write((char*)&user,sizeof(user));
ofile.close();
}

void user_disp()
{
clrscr();
int ch = 0;
ifstream ifile1;
ifile1.open("user_14.dat",ios::in | ios :: binary);
ifile1.read((char*)&user,sizeof(user));
if(ifile1)
	{
	while(!ifile1.eof() && ch == 0)
		{
		user.output();
		ifile1.read((char*)&user,sizeof(user));
		}
	}
else
	{
	clrscr();
	error();
	}
gtype(" B",15,4,25);gtype("ack",8);gtype(" - ",14);gtype("'b' ",15);
gtype(" H",15,35,25);gtype("ome",8);gtype(" - ",14);gtype("'h' ",15);
gtype(" E",15,66,25);gtype("xit",8);gtype(" - ",14);gtype("'e' ",15);
}

void userdata :: user_mod_rec(char mod_index[])
{
clrscr();
user_graphics(2);
strcpy(mod_index,uname);
gtype(" \4 ACCOUNT CREATION \4 ",7,30,4);
gotoxy(26,7);cout<<mod_index;
gtype(" ",7,21,9);
do
	{
	gets(name);
	check=1;
	for(int j=0;j<15;j++)
		{
		if(isalpha(name[j])||name[j]=='\0');
		else
			{
			check=0;
			gtype("\5 ERROR \5",14,61,7);
			gotoxy(11,8);clreol();gtype("\333",4,71,8);fill();
			gtype("\247 Name ( CHARACTERS ONLY ) : ",7,13,8);
			gtype(" ",7,41,8);
			break;
			}
		}
	}
while(check==0);
gtype("          ",14,61,7);
gotoxy(26,11);gets(pword);
gtype(" ",7,25,15);
do
	{
	cin>>dd1;
	dd=atoi(dd1);
	if(dd<1||dd>31)
		{
		gtype("\5 ERROR \5",14,61,15);
		gotoxy(11,16);clreol();gtype("\333",4,71,16);fill();
		gtype("\247 Day (1-31)[dd] : ",7,13,16);
		gotoxy(32,16);
		}
	}
	while(dd<1||dd>31);
gtype(" ",7,27,18);
do
	{
	cin>>mm1;
	mm=atoi(mm1);
	if(mm<1||mm>12)
		{
		gtype("\5 ERROR \5",14,61,18);
		gotoxy(11,19);clreol();gtype("\333",4,71,19);fill();
		gtype("\247 Month (1-12)[mm] : ",7,13,19);
		gotoxy(34,19);
		}
	}
	while(mm<1||mm>12);
gtype("          ",14,61,18);
gtype(" ",7,28,21); //49,19
do
	{
	cin>>yyyy1;
	yyyy=atoi(yyyy1);
	if(yyyy<1900 || yyyy>2017)
		{
		gtype("\5 ERROR \5",14,61,21);
		gotoxy(11,20);clreol();gtype("\333",4,71,20);fill();
		gtype("\247 Year (1900 - 2017)[yyyy] : ",7,13,20);
		gotoxy(42,20);
		}
	}
while(yyyy<1900||yyyy>2017);
gtype("           ",14,61,21);
}

char user_del[30];
int user_del_var=0;

void view_index()
{
	//variable for accepting roll to be searched
ifstream ifile;
ifile.open("user_14.dat",ios::in | ios :: binary);
frame("\4 View Data \4",7,35,3);
for(int a=2;a<80;a++)
		{
		gtype("-",3,a,6);
		gtype("-",3,a,8);
		}
ifile.read((char*)&user,sizeof(user));
int x22=20;
int z=9;
while(!ifile.eof())
	{
	int a=wherey();
	if(z>=19)
		{
		x22=50;
		z=10;
		}
	else
		{
		z++;
		}
	gotoxy(x22,z);
	cout<<"  "<<user.uname<<endl;
	a=wherey();
	if(a>=19)
		{
		gotoxy(x22,z);
		cout<<"  "<<endl;
		cout<<user.uname;
		}
	ifile.read((char*)&user,sizeof(user));
	gtype("                     ",4,1,20);
	gtype("                     ",4,1,19);
	}
ifile.close();
frame("\4 View Data \4",7,35,3);
gotoxy(3,7);cout<<"Enter the name of person or organization : ";
gets(user_del);
}

void user_modify()
{
clrscr();
int rec = 0;
char ch='y';
int i;
view_index();
fstream mfile;
mfile.open("user_14.dat",ios :: in | ios :: out | ios :: binary);
mfile.read((char*)&user,sizeof(user));
rec++;
if(mfile)
	{
	while(!mfile.eof() && ch == 'y')
		{
		i = user.find(user_del);
		if(i == 1)
			{
			user.user_mod_rec(user_del);
			mfile.seekg((rec-1)*sizeof(user),ios::beg);
			mfile.write((char*)&user,sizeof(user));
			ch = 'n';
			}
		else
			{
			mfile.read((char*)&user,sizeof(user));
			rec++;
			}
		}
	}
else
	{
	clrscr();
	error();
	}
if(i == 0)
	{
	clrscr();
	error();
	}
if(i == 1)
	{
	clrscr();
	modified();
	}
}

void login(int z)
{
clrscr();
frame("\4 Login \4",10,36,3);
char login_u[30];
char login_p[30];
for(int x=20;x<62;x++)
	{
	gtype("\333",8,x,8);
	gtype("\333",8,x,12);
	gtype("\333",8,x,16);
	}
for(int y=8;y<17;y++)
	{
	gtype("\333",8,20,y);
	gtype("\333",8,61,y);
	gtype("\306",15,34,y);
	gtype("\264",15,35,y);
	}
gtype("Username ",4,24,10);
gtype("Password ",4,24,14);
gotoxy(38,10);gets(login_u);
gotoxy(38,14);readpword(login_p);
int ch=0;
int ch_p=0;
char allow='y';
ifstream ifile1;
ifile1.open("user_14.dat",ios::in | ios :: binary);
ifile1.read((char*)&user,sizeof(user));
if(ifile1)
	{
	while(!ifile1.eof() && ch == 0 && ch_p==0)
		{
		ch = user.find(login_u);
		ch_p=user.findp(login_p);
		if(ch == 1 && ch_p ==  1)
			{
			allow='y';
			}
		else
			ifile1.read((char*)&user,sizeof(user));
		}
	}
else
	{
	clrscr();
	error();
	}
ifile1.close();
if(ch == 0 || ch_p == 0)
	{
	gtype("\20 Error : Wrong Username Or Password.",15,23,19);
	allow='n';
	getch();
	}
if(allow=='y'&& z==1)
	{
	clrscr();
	g5_home();
	clrscr();
	g5_menu();
	getch();
	}
else if(allow=='y'&& z==2)
	{
	user_del_var=1;
	}
else
	{
	clrscr();
	user_del_var=0;
	user_caller();
	}
}

void admin_login(int z)
{
clrscr();
frame("\4 Login \4",10,36,3);
char login_u[30];
char login_p[30];
for(int x=20;x<62;x++)
	{
	gtype("\333",8,x,8);
	gtype("\333",8,x,12);
	gtype("\333",8,x,16);
	}
for(int y=8;y<17;y++)
	{
	gtype("\333",8,20,y);
	gtype("\333",8,61,y);
	gtype("\306",15,34,y);
	gtype("\264",15,35,y);
	}
gtype("Username ",4,24,10);
gtype("Password ",4,24,14);
gotoxy(38,10);gets(login_u);
gotoxy(38,14);readpword(login_p);
if(!(strcmpi(login_u,"admin")) && !(strcmpi(login_p,"8071")))
	{
	clrscr();
	admin(z);
	}
else
	{
	gtype("\20 Error : Wrong Username Or Password.",15,23,19);
	}
}

void user_delete()
{
clrscr();
int ch=0;
view_index();
clrscr();
login(2);
if(user_del_var==1)
	{
	ifstream ifile1;
	ofstream ofile1;
	ifile1.open("user_14.dat",ios :: in);
	ofile1.open("user_14_temp.dat",ios :: out);
	ifile1.read((char*)&user,sizeof(user));
	if(ifile1)
		{
		while(!ifile1.eof())
			{
			ch=user.find(user_del);
			if(ch==0)
				{
				ofile1.write((char*)&user,sizeof(user));
				}
			ifile1.read((char*)&user,sizeof(user));
			}
		ofile1.close();
		ifile1.close();
		remove("user_14.dat");
		rename("user_14_temp.dat","user_14.dat");
		deleted();
		}
	else
		{
		clrscr();
		error();
		}
	}
else if(user_del_var==0)
	{
	gtype("\20 Error : Unauthorized Action !",15,23,19);
	getch();
	}
}

void admin_delete()
{
clrscr();
int ch=0;
view_index();
clrscr();
	ifstream ifile1;
	ofstream ofile1;
	ifile1.open("user_14.dat",ios :: in);
	ofile1.open("user_14_temp.dat",ios :: out);
	ifile1.read((char*)&user,sizeof(user));
	if(ifile1 && ofile1)
		{
		while(!ifile1.eof())
			{
			ch=user.find(user_del);
			if(ch==0)
				{
				ofile1.write((char*)&user,sizeof(user));
				}
			ifile1.read((char*)&user,sizeof(user));
			}
			ofile1.close();
			ifile1.close();
			remove("user_14.dat");
			rename("user_14_temp.dat","user_14.dat");
			deleted();
		}
	else
		{
		clrscr();
		error();
		}

}

void s_fill()
{
for(int y=10;y<19;y++)
	{
	gtype(" ",15,10,y);
	}
}

void s_option(int x,int y)
{
if(x == 10 && y == 10)
	{
	gtype("                         ",7,16,6);
	gtype("Modify Account Details",7,16,6);
	}
if(x == 10 && y == 14)
	{
	gtype("                        ",7,16,6);
	gtype("Delete Account ",7,16,6);
	}
if(x == 10 && y == 18)
	{
	gtype("                        ",7,16,6);
	gtype("View Account",7,16,6);
	}
}

void a_fill()
{
for(int y=10;y<19;y++)
	{
	gtype(" ",15,10,y);
	}
}

void a_option(int x,int y)
{
if(x == 10 && y == 10)
	{
	gtype("                         ",7,16,6);
	gtype("About",7,16,6);
	}
if(x == 10 && y == 14)
	{
	gtype("                        ",7,16,6);
	gtype("Modify Account ",7,16,6);
	}
if(x == 10 && y == 18)
	{
	gtype("                        ",7,16,6);
	gtype("Delete Account",7,16,6);
	}
}

void settings()
{
int x = 10;
int y = 10;
gtype("\20",15,x,y);
cout<<"\b";
s_option(x,y);
int loopbreaker=0;
while(loopbreaker==0)
	{
	char a;
	a = getch();
	switch(a)
		{
		case 27:
			exit(0);
			break;
		case 'e':
			loopbreaker=1;
			exit(0);
			break;
		case 'E':
			loopbreaker=1;
			exit(0);
			break;
		case 'b':
			loopbreaker=1;
			clrscr();
			g5_menu();
			break;
		case 'B':
			loopbreaker=1;
			clrscr();
			g5_menu();
			break;
		case 'h':
			loopbreaker=1;
			clrscr();
			g5_home();
			break;
		case 72:
			gotoxy(x,y);
			s_fill();
			if(y == 10)
				{
				y = 18;
				}
			else
				{
				y -= 4;
				}
			gtype("\20",15,x,y);
			cout<<"\b";
			s_option(x,y);
			break;
			case 80:
				gotoxy(x,y);
				s_fill();
				if(y == 18)
					{
					y = 10;
					}
				else
					{
					y += 4;
					}
				gtype("\20",15,x,y);
				cout<<"\b";
				s_option(x,y);
				break;
			case 13:
				if(x == 10 && y == 10)
					{
					clrscr();
					user_modify();
					}
				if(x == 10 && y == 14)
					{
					clrscr();
					user_delete();
					loopbreaker=1;
					user_caller();
					}
				if(x == 10 && y == 18)
					{
					clrscr();
					user_disp();
					}

		}
	}
}

void admin(int k)
{
menu_graphics("\4 Admin \4",10,37,3,5);
int x = 10;
int y = 10;
gtype("\20",15,x,y);
cout<<"\b";
a_option(x,y);
int loopbreaker=0;
while(loopbreaker==0)
	{
	char a;
	a = getch();
	switch(a)
		{
		case 27:
			exit(0);
			break;
		case 'e':
			loopbreaker=1;
			exit(0);
			break;
		case 'E':
			loopbreaker=1;
			exit(0);
			break;
		case 'b':
			loopbreaker=1;
			clrscr();
			if(k==1)
				{
				g5_home();
				}
			else if(k==2)
				{
				user_caller();
				}
			break;
		case 'B':
			loopbreaker=1;
			clrscr();
			if(k==1)
				{
				g5_home();
				}
			else if(k==2)
				{
				user_caller();
				}
			break;
		case 'h':
			loopbreaker=1;
			clrscr();
			if(k==1)
				{
				g5_home();
				}
			else if(k==2)
				{
				user_caller();
				}
			break;
		case 72:
			gotoxy(x,y);
			a_fill();
			if(y == 10)
				{
				y = 18;
				}
			else
				{
				y -= 4;
				}
			gtype("\20",15,x,y);
			cout<<"\b";
			a_option(x,y);
			break;
			case 80:
				gotoxy(x,y);
				a_fill();
				if(y == 18)
					{
					y = 10;
					}
				else
					{
					y += 4;
					}
				gtype("\20",15,x,y);
				cout<<"\b";
				a_option(x,y);
				break;
			case 13:
				if(x == 10 && y == 10)
					{
					clrscr();
					frame("\4 About \4",15,36,3);
					gtype("Programmer : Gaurav.v",3,5,10);
					gtype("Lines of code : 8996",3,5,12);
					gtype("Version : 1.0",3,5,14);
					}
				if(x == 10 && y == 14)
					{
					clrscr();
					user_modify();
					}
				if(x == 10 && y == 18)
					{
					clrscr();
					admin_delete();
					}

		}
	}
}







