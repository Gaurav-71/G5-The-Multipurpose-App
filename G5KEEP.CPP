int social :: find(char string[])
	{
	if(!strcmpi(social_index,string))
		return 1;
	else
		return 0;
	}

void social :: input()
{
for(int a=2;a<80;a++)
		{
		gtype("-",3,a,6);
		gtype("-",3,a,10);
		}
gtype("\4 Please fill all the details carefully ! \4",5,19,8);
frame("\4 Social \4",9,37,3);
gtype("\20 Platform : ",12,3,12);
gets(platform);
gtype("\20 Username : ",9,3,14);
gets(social_index);
gtype("\20 Password : ",10,3,16);
gets(pword);
gtype("\20 Phone Number : ",6,3,18);
chk_p=1;
chk_p1=1;
do
	{
	gtype(" ",4,21,18);clreol();gtype("\261",4,80,18);
	gotoxy(21,18);gets(phone);
	for(int c_p=0;c_p<strlen(phone);c_p++)
		{
		if(isdigit(phone[c_p])==0)
			{
			chk_p=2;
			}
		else
			{
			chk_p=1;
			}
		}
	if(strlen(phone)>=11)
		{
		gotoxy(72,18);gtype("\5 Error \5",4);
		chk_p1=2;
		}
	else
		{
		chk_p1=1;
		}

	}
	while(chk_p==2 || chk_p1==2);
gtype("\20 Email Id : ",8,3,20);
do
	{
	gtype(" ",4,16,20);clreol();gtype("\261",4,80,20);
	gotoxy(16,20);gets(email);
	chk_at=0,chk_dot=0;
	for(int j1=0;j1<strlen(email);j1++)
		{
		if(chk_at==0)
			{
			if(email[j1]=='@')
				{
				chk_at=1;
				}
			else
				{
				chk_at=0;
				}
			}
		if(chk_dot==0)
			{
			if(email[j1]=='.')
				{
				chk_dot=1;
				}
			else
				{
				chk_dot=0;
				}
			}
		}
	}
	while(chk_at==0 || chk_dot==0);
}

void social_feed()
{
file_namer();
clrscr();
ofstream ofile;
ofile.open(social_file, ios :: app | ios :: binary);
s1.input();
ofile.write((char*)&s1,sizeof(s1));
ofile.close();
}

void social :: output()
{
for(int a=2;a<80;a++)
		{
		gtype("-",3,a,6);
		gtype("-",3,a,10);
		}
frame("\4 Social \4",9,37,3);
gtype("\20 Platform : ",12,3,12);
cout<<platform;
gtype("\20 Username : ",9,3,14);
cout<<social_index;
gtype("\20 Password : ",10,3,16);
cout<<pword;
gtype("\20 Phone Number : ",6,3,18);
cout<<phone;
gtype("\20 Email Id : ",8,3,20);
cout<<email;
gtype("\4 Here are your locker ",5,22,8);
gtype(platform,15);
gtype(" details \4",5);
}

void social_searcher()
{
file_namer();
clrscr();
int ch = 0;
char search[20];	//variable for accepting roll to be searched
ifstream ifile;
ifile.open(social_file,ios::in | ios :: binary);
frame("\4 View Data \4",7,35,3);
for(int a=2;a<80;a++)
		{
		gtype("-",3,a,6);
		gtype("-",3,a,8);
		}
ifile.read((char*)&s1,sizeof(s1));
int x22=20;
int z=9;
if(ifile)
	{
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
		cout<<"  "<<s1.social_index<<endl;
		a=wherey();
		if(a>=19)
			{
			gotoxy(x22,z);
			cout<<"  "<<endl;
			cout<<s1.social_index;
			}
		ifile.read((char*)&s1,sizeof(s1));
		gtype("                     ",4,1,20);
		gtype("                     ",4,1,19);
		}
	frame("\4 View Data \4",7,35,3);
	gotoxy(3,7);cout<<"Enter the userid : ";gets(search);
	ifile.close();
	}
else
	{
	clrscr();
	error();
	}
ifstream ifile1;
ifile1.open(social_file,ios::in | ios :: binary);
ifile1.read((char*)&s1,sizeof(s1));
if(ifile1)
	{
	while(!ifile1.eof() && ch == 0)
		{
		ch = s1.find(search);
		if(ch == 1)
			{
			clrscr();
			s1.output();
			}
		else
			ifile1.read((char*)&s1,sizeof(s1));
		}
	}
else
	{
	clrscr();
	error();
	}
if(ch == 0)
	{
	error();
	}
}

void social :: social_mod_rec(char mod_index[])
{
clrscr();
for(int a=2;a<80;a++)
		{
		gtype("-",3,a,6);
		gtype("-",3,a,10);
		}
gtype("\4 Please fill all the details carefully ! \4",5,19,8);
frame("\4 Social \4",9,37,3);
strcpy(mod_index,social_index);
gtype("\20 Username : ",9,3,12);
cout<<mod_index;
gtype("\20 Platform : ",12,3,14);
gets(platform);
gtype("\20 Password : ",10,3,16);
gets(pword);
gtype("\20 Phone Number : ",6,3,18);
gets(phone);
gtype("\20 Email Id : ",8,3,20);
gets(email);
}

void social_modify()
{
file_namer();
clrscr();
int rec = 0;
char del[20];	//variable for accepting roll to be searched
char ch='y';
int i;
ifstream ifile;
ifile.open(social_file,ios::in | ios :: binary);
frame("\4 View Data \4",7,35,3);
for(int a=2;a<80;a++)
		{
		gtype("-",3,a,6);
		gtype("-",3,a,8);
		}
ifile.read((char*)&s1,sizeof(s1));
int x22=20;
int z=9;
if(ifile)
	{
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
		cout<<"  "<<s1.social_index<<endl;
		a=wherey();
		if(a>=19)
			{
			gotoxy(x22,z);
			cout<<"  "<<endl;
			cout<<s1.social_index;
			}
		ifile.read((char*)&s1,sizeof(s1));
		gtype("                     ",4,1,20);
		gtype("                     ",4,1,19);
		}
	ifile.close();
	frame("\4 Modify Data \4",7,35,3);
	gotoxy(3,7);cout<<"Enter the userid : ";
	gets(del);
	}
else
	{
	clrscr();
	error();
	}
fstream mfile;
mfile.open(social_file,ios :: in | ios :: out | ios :: binary);
mfile.read((char*)&s1,sizeof(s1));
rec++;
if(mfile)
	{
	while(!mfile.eof() && ch == 'y')
		{
		i = s1.find(del);
		if(i == 1)
			{
			s1.social_mod_rec(del);
			mfile.seekg((rec-1)*sizeof(s1),ios::beg);
			mfile.write((char*)&s1,sizeof(s1));
			ch = 'n';
			}
		else
			{
			mfile.read((char*)&s1,sizeof(s1));
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
	error();
	}
if(i == 1)
	{
	modified();
	}
}

void soc_del()
{
file_namer();
clrscr();
char del[30];
int ch=0;
ifstream ifile;
ifile.open(social_file,ios::in | ios :: binary);
frame("\4 View Data \4",7,35,3);
for(int a=2;a<80;a++)
		{
		gtype("-",3,a,6);
		gtype("-",3,a,8);
		}
ifile.read((char*)&s1,sizeof(s1));
int x22=20;
int z=9;
if(ifile)
	{
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
		cout<<"  "<<s1.social_index<<endl;
		a=wherey();
		if(a>=19)
			{
			gotoxy(x22,z);
			cout<<"  "<<endl;
			cout<<s1.social_index;
			}
		ifile.read((char*)&s1,sizeof(s1));
		gtype("                     ",4,1,20);
		gtype("                     ",4,1,19);
		}
	}
else
	{
	clrscr();
	error();
	}
ifile.close();
frame("\4 Modify Data \4",7,35,3);
gotoxy(3,7);cout<<"Enter the userid : ";
gets(del);
ifstream ifile1;
ofstream ofile1;
ifile1.open(social_file,ios :: in);
ofile1.open(social_file_temp,ios :: out);
ifile1.read((char*)&s1,sizeof(s1));
if(ifile1)
	{
	while(!ifile1.eof())
		{
		ch=s1.find(del);
		if(ch==0)
			{
			ofile1.write((char*)&s1,sizeof(s1));
			}
		ifile1.read((char*)&s1,sizeof(s1));
		}
	}
else
	{
	clrscr();
	error();
	}
ofile1.close();
ifile1.close();
remove(social_file);
rename(social_file_temp,social_file);
if(ch==0)
	{
	error();
	}
else if(ch==1)
	{
	deleted();
	}
}

//////////////////////////////////

int contacts :: find(char string[])
	{
	if(!strcmpi(contacts_index,string))
		return 1;
	else
		return 0;
	}

void contacts :: input()
{
for(int a=2;a<80;a++)
		{
		gtype("-",3,a,6);
		gtype("-",3,a,10);
		}
gtype("\4 Please fill all the details carefully ! \4",5,19,8);
frame("\4 Contacts \4",9,35,3);
gtype("\20 Name : ",12,3,12);gets(name);
gtype("\20 Nickname : ",10,3,14);gets(contacts_index);
gtype("\20 Type(mobile/landline) : ",9,3,16);gets(type);
gtype("\20 Number : ",6,3,18);
chk_p=1;
chk_p1=1;
do
	{
	gtype(" ",4,14,18);clreol();gtype("\261",4,80,18);
	gotoxy(14,18);gets(number);
	for(int c_p=0;c_p<strlen(number);c_p++)
		{
		if(isdigit(number[c_p])==0)
			{
			chk_p=2;
			}
		else
			{
			chk_p=1;
			}
		}
	if(strlen(number)>=11)
		{
		gotoxy(72,18);gtype("\5 Error \5",4);
		chk_p1=2;
		}
	else
		{
		chk_p1=1;
		}
	}
	while(chk_p==2 || chk_p1==2);
}

void contacts_feed()
{
file_namer();
clrscr();
ofstream ofile;
ofile.open(contacts_file, ios :: app | ios :: binary);
c1.input();
ofile.write((char*)&c1,sizeof(c1));
ofile.close();
}

void contacts :: output()
{
for(int a=2;a<80;a++)
		{
		gtype("-",3,a,6);
		gtype("-",3,a,10);
		}
gtype("\4 Details of ",5,19,8);cout<<contacts_index;
frame("\4 Contacts \4",9,35,3);
gtype("\20 Name : ",12,3,12);cout<<name;
gtype("\20 Nickname : ",10,3,14);cout<<contacts_index;
gtype("\20 Type(mobile/landline) : ",9,3,16);cout<<type;
gtype("\20 Number : ",6,3,18);cout<<number;
}

void contacts_searcher()
{
file_namer();
clrscr();
int ch = 0;
char search[20];	//variable for accepting roll to be searched
ifstream ifile;
ifile.open(contacts_file,ios::in | ios :: binary);
frame("\4 View Data \4",7,35,3);
for(int a=2;a<80;a++)
		{
		gtype("-",3,a,6);
		gtype("-",3,a,8);
		}
ifile.read((char*)&c1,sizeof(c1));
int x22=20;
int z=9;
if(ifile)
	{
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
		cout<<"  "<<c1.contacts_index<<endl;
		a=wherey();
		if(a>=19)
			{
			gotoxy(x22,z);
			cout<<"  "<<endl;
			cout<<c1.contacts_index;
			}
		ifile.read((char*)&c1,sizeof(c1));
		gtype("                     ",4,1,20);
		gtype("                     ",4,1,19);
		}
	frame("\4 View Data \4",7,35,3);
	gotoxy(3,7);cout<<"Enter the Nickname : ";gets(search);
	ifile.close();
	}
else
	{
	clrscr();
	error();
	}
ifstream ifile1;
ifile1.open(contacts_file,ios::in | ios :: binary);
ifile1.read((char*)&c1,sizeof(c1));
if(ifile1)
	{
	while(!ifile1.eof() && ch == 0)
		{
		ch = c1.find(search);
		if(ch == 1)
			{
			clrscr();
			c1.output();
			}
		else
			ifile1.read((char*)&c1,sizeof(c1));
		}
	}
else
	{
	clrscr();
	error();
	}
if(ch == 0)
	{
	clrscr();
	error();
	}
getch();
}

void contacts :: contacts_mod_rec(char mod_index[])
{
clrscr();
for(int a=2;a<80;a++)
		{
		gtype("-",3,a,6);
		gtype("-",3,a,10);
		}
gtype("\4 Enter all the details carefully ! \4",5,19,8);
frame("\4 Modify Data \4",9,35,3);
strcpy(mod_index,contacts_index);
gtype("\20 Nickname : ",10,3,12);cout<<contacts_index;
gtype("\20 Name : ",12,3,14);gets(name);
gtype("\20 Type(mobile/landline) : ",9,3,16);gets(type);
gtype("\20 Number : ",6,3,18);gets(number);
}

void contacts_modify()
{
file_namer();
clrscr();
int rec = 0;
char del[20];	//variable for accepting roll to be searched
char ch='y';
int i;
ifstream ifile;
ifile.open(contacts_file,ios::in | ios :: binary);
frame("\4 Modify Data \4",7,35,3);
for(int a=2;a<80;a++)
		{
		gtype("-",3,a,6);
		gtype("-",3,a,8);
		}
ifile.read((char*)&c1,sizeof(c1));
int x22=20;
int z=9;
if(ifile)
	{
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
		cout<<"  "<<c1.contacts_index<<endl;
		a=wherey();
		if(a>=19)
			{
			gotoxy(x22,z);
			cout<<"  "<<endl;
			cout<<c1.contacts_index;
			}
		ifile.read((char*)&c1,sizeof(c1));
		gtype("                     ",4,1,20);
		gtype("                     ",4,1,19);
		}
	ifile.close();
	frame("\4 View Data \4",7,35,3);
	gotoxy(3,7);cout<<"Enter the Nickname  : ";
	gets(del);
	}
else
	{
	clrscr();
	error();
	}
fstream mfile;
mfile.open(contacts_file,ios :: in | ios :: out | ios :: binary);
mfile.read((char*)&c1,sizeof(c1));
rec++;
if(mfile)
	{
	while(!mfile.eof() && ch == 'y')
		{
		i = c1.find(del);
		if(i == 1)
			{
			c1.contacts_mod_rec(del);
			mfile.seekg((rec-1)*sizeof(c1),ios::beg);
			mfile.write((char*)&c1,sizeof(c1));
			ch = 'n';
			}
		else
			{
			mfile.read((char*)&c1,sizeof(c1));
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
	modified();
	}
}

void con_del()
{
file_namer();
clrscr();
char del[30];
int ch=0;
ifstream ifile;
ifile.open(contacts_file,ios::in | ios :: binary);
frame("\4 View Data \4",7,35,3);
for(int a=2;a<80;a++)
		{
		gtype("-",3,a,6);
		gtype("-",3,a,8);
		}
ifile.read((char*)&c1,sizeof(c1));
int x22=20;
int z=9;
if(ifile)
	{
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
		cout<<"  "<<c1.contacts_index<<endl;
		a=wherey();
		if(a>=19)
			{
		gotoxy(x22,z);
		cout<<"  "<<endl;
		cout<<c1.contacts_index;
			}
	ifile.read((char*)&c1,sizeof(c1));
	gtype("                     ",4,1,20);
	gtype("                     ",4,1,19);
		}
	ifile.close();
	frame("\4 Modify Data \4",7,35,3);
	gotoxy(3,7);cout<<"Enter Nickname : ";
	gets(del);
	}
else
	{
	clrscr();
	error();
	}
ifstream ifile1;
ofstream ofile1;
ifile1.open(contacts_file,ios :: in);
ofile1.open(contacts_file_temp,ios :: out);
ifile1.read((char*)&c1,sizeof(c1));
if(ifile1)
	{
	while(!ifile1.eof())
		{
		ch=c1.find(del);
		if(ch==0)
			{
			ofile1.write((char*)&c1,sizeof(c1));
			}
		ifile1.read((char*)&c1,sizeof(c1));
		}
	}
else
	{
	clrscr();
	error();
	}
ofile1.close();
ifile1.close();
remove(contacts_file);
rename(contacts_file_temp,contacts_file);
if(ch==0)
	{
	error();
	}
else if(ch==1)
	{
	deleted();
	}
}



//////////////////////////////////////////////////////

void common_fill()
{
for(int y=10;y<19;y++)
	{
	gtype(" ",15,10,y);
	}
}

void common_option(int x,int y,int z)
{
if(z==1)
	{
	if(x == 10 && y == 10)
		{
		gtype("                  ",7,16,6);
		gtype("Today's Horoscope",7,16,6);
		}
	if(x == 10 && y == 14)
		{
		gtype("                  ",7,16,6);
		gtype("Weekly Horoscope",7,16,6);
		}
	if(x == 10 && y == 18)
		{
		gtype("                  ",7,16,6);
		gtype("Yearly Horoscope",7,16,6);
		}
	}
else if(z==2)
	{
	if(x == 10 && y == 10)
		{
		gtype("                  ",7,16,6);
		gtype("Add Data",7,16,6);
		}
	if(x == 10 && y == 14)
		{
		gtype("                  ",7,16,6);
		gtype("View Data",7,16,6);
		}
	if(x == 10 && y == 18)
		{
		gtype("                  ",7,16,6);
		gtype("Modify / Delete",7,16,6);
		}
	}
}

void social_caller();
void contacts_caller();
void locker_arr_inp();
void locker_menu();

void  common_arr_inp(int f,int z)
{
int x = 10;
int y = 10;
gtype("\20",15,x,y);
cout<<"\b";
common_option(x,y,z);
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
			exit(0);
			break;
		case 'E':
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
			common_fill();
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
			common_option(x,y,z);
			break;
			case 80:
				gotoxy(x,y);
				common_fill();
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
				common_option(x,y,z);
				break;
			case 13:
				if(f==2)
					{
					if(x == 10 && y == 10)
						{
						social_feed();
						loopbreaker=1;
						}
					if(x == 10 && y == 14)
						{
						social_searcher();
						loopbreaker=1;
						}
					if(x == 10 && y == 18)
						{
						select_md();
						if(opt_md=='m')
							{
							social_modify();
							}
						else if(opt_md=='d')
							{
							soc_del();
							}
						loopbreaker=1;
						}
					}
				else if(f==3)
					{
					if(x == 10 && y == 10)
						{
						contacts_feed();
						loopbreaker=1;
						}
					if(x == 10 && y == 14)
						{
						contacts_searcher();
						loopbreaker=1;
						}
					if(x == 10 && y == 18)
						{
						select_md();
						if(opt_md=='m')
							{
							contacts_modify();
							}
						else if(opt_md=='d')
							{
							con_del();
							}
						loopbreaker=1;
						}
					}


		}
	}
}




//////////////////////////////////////////////////////

void social_caller()
{
clrscr();
menu_graphics("\4 Social \4",7,36,3,1);
common_arr_inp(2,2);
}

void contacts_caller()
{
clrscr();
menu_graphics("\4 Contacts \4",7,35,3,1);
common_arr_inp(3,2);
}

///////////////////////////////

void locker_menu()
{
frame("\4 Locker \4",10,35,3);
for(int a=2;a<80;a++)
	{
	gtype("-",3,a,6);
	gtype("-",3,a,8);
	}
gtype("|",4,14,6);
gtype("|",4,14,7);
gtype("|",4,14,8);
gotoxy(4,7);textcolor(GREEN);cprintf("\4 ");textcolor(7);cprintf("E");textcolor(BLUE);cprintf("N");;textcolor(YELLOW);cprintf("T");textcolor(3);cprintf("E");textcolor(BLUE);cprintf("R");textcolor(GREEN);cprintf(" \4");
gtype("\333",4,26,12);
gtype("\333",4,53,12);
gtype("\333",1,26,16);
gtype("\333",1,53,16);
for(int x=26;x<54;x++)
	{
	gtype("\333",4,x,11);
	gtype("\333",4,x,13);
	gtype("\333",1,x,15);
	gtype("\333",1,x,17);
	}
for(x=14;x<25;x++)
	{
	gtype("\333",2,x,11);
	gtype("\333",2,x,12);
	gtype("\333",2,x,13);
	gtype("\333",6,x,15);
	gtype("\333",6,x,16);
	gtype("\333",6,x,17);
	}
gtype("Contacts",15,28,12);
gtype("Social",15,28,16);
gotoxy(16,7);
}

void pointer(int x,int y)
{
if(x==18 && y==12)
	{
	gtype(" \20 ",15,x,y);
	gtype("          ",15,16,7);
	gtype("Contacts",15,16,7);
	}
if(x==18 && y==16)
	{
	gtype(" \20 ",15,x,y);
	gtype("          ",15,16,7);
	gtype("Social",15,16,7);
	}
}

void lock_fill()
{
gtype("\333\333\333",2,18,12);
gtype("\333\333\333",6,18,16);
}

void locker_arr_inp()
{
int x = 18;
int y = 12;
pointer(x,y);
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
			exit(0);
			break;
		case 'E':
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
			lock_fill();
			if(y == 12)
				{
				y = 16;
				}
			else
				{
				y -= 4;
				}
			pointer(x,y);
			break;
		case 80:
				gotoxy(x,y);
				lock_fill();
				if(y == 16)
					{
					y = 12;
					}
				else
					{
					y += 4;
					}
				pointer(x,y);
				break;
			case 13:
				if(x==18 && y==12)
					{
					contacts_caller();
					}
				if(x==18 && y==16)
					{
					social_caller();
					}

		}
	}
}

/////////////////////////////////

///////////////////////////////

void locker_caller()
{
clrscr();
locker_menu();
locker_arr_inp();
}
