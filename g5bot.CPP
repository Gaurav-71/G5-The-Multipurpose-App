
void chatbot :: layout()
{
prompt();
frame("\360 Messaging \360",9,35,3);
for(int y=5;y<22;y++)
	{
	gtype("\261",4,60,y);
	}
for(int x=2;x<60;x++)
	{
	gtype("\261",4,x,18);
	}
gtype("\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337",7,61,7);
gtype("\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333",7,61,5);
gtype("Jokes",5,63,9);
gtype("Facts",6,69,9);
gtype("Log",9,75,9);
gtype("Convert",9,67,11);
gtype("Weather",10,67,13);
gtype("Poem",12,63,15);
gtype("Quote",13,68,15);
gtype("Luck",14,74,15);
gtype("+ - * / ^",3,63,17);
gtype(" Open",15,73,17);
gtype("Minigame",5,64,19);
gtype("Help",8,73,19);
gtype("Keyword",3,67,6);
gotoxy(1,6);
}


void chatbot :: sqr(float base)
{
gotoxy(1,loc+2);
gbot();cout<<powl(base,2);
location=wherey();
}

void chatbot :: mul(float int1,float int2)
{
gotoxy(1,loc+2);
gbot();textcolor(7);cout<<int1*int2;
location=wherey();
}

void chatbot :: div(float int1,float int2)
{
gotoxy(1,loc+2);
gbot();cout<<int1/int2;
location=wherey();
}

void chatbot :: add(float int1,float int2)
{
gotoxy(1,loc+2);
gbot();cout<<int1+int2;
location=wherey();
}

void chatbot :: sub(float int1,float int2)
{
gotoxy(1,loc+2);
gbot();cout<<int1-int2;
location=wherey();
}

void chatbot :: convert(float con)
{
float int1;
int findx;
prompt_var=6;
layout();
gotoxy(1,loc+1);
gbot();textcolor(7);cprintf("OK give me a number -> ");
while(!(cin>>int1))
	{
	cin.clear();
	cin.ignore(999,'\n');
	gtype("                   ",4,34,loc+1);
	gtype("",4,34,loc+1);
	}
if(con==1)  // cm to inch
	{
	gotoxy(1,loc+2);
	gbot();cout<<int1*(0.394)<<" inches";
	location=wherey();
	}
else if(con==2)  // cm to m
	{
	gotoxy(1,loc+2);
	gbot();cout<<int1*(0.01)<<" metre";
	location=wherey();
	}
else if(con==3)  // inch to cm
	{
	gotoxy(1,loc+2);
	gbot();cout<<int1*(2.54)<<" centimetres";
	location=wherey();
	}
else if(con==4)  // inch to m
	{
	gotoxy(1,loc+2);
	gbot();cout<<int1*(0.0254)<<" metres";
	location=wherey();
	}
else if(con==5)  // inch to feet
	{
	gotoxy(1,loc+2);
	gbot();cout<<int1*(0.0833)<<" feet";
	location=wherey();
	}
else if(con==6)  // feet to inch
	{
	gotoxy(1,loc+2);
	gbot();cout<<int1*(12)<<" inches";
	location=wherey();
	}
else if(con==7)  // feet to cm
	{
	gotoxy(1,loc+2);
	gbot();cout<<int1*(30.48)<<" centimetres";
	location=wherey();
	}
else if(con==8)  // feet to m
	{
	gotoxy(1,loc+2);
	gbot();cout<<int1*(0.305)<<" metre";
	location=wherey();
	}
else if(con==9)  // cm to feet
	{
	if(int1<=30.48)
		{
		gotoxy(1,loc+2);
		gbot();cout<<"0 feet "<<int1*(0.394)<<" inches";
		location=wherey();
		}
	else if(int1>30.48)  // cm to inch
		{
		gotoxy(1,loc+2);
		gbot();cout<<int1*(0.0328084)<<" feet";
		location=wherey();
		}

	}
else if(con==10)  // kg to g
	{
	gotoxy(1,loc+2);
	gbot();cout<<int1*(1000)<<" grams";
	location=wherey();
	}
else if(con==11)  // g to kg
	{
	gotoxy(1,loc+2);
	gbot();cout<<int1*(0.001)<<" kilogram";
	location=wherey();
	}
else if(con==12)  // g to mg
	{
	gotoxy(1,loc+2);
	gbot();cout<<int1*(1000)<<" milligrams";
	location=wherey();
	}
else if(con==13)  // mg to g
	{
	gotoxy(1,loc+2);
	gbot();cout<<int1*(0.001)<<" gram";
	location=wherey();
	}
else if(con==14)  // kg to mg
	{
	gotoxy(1,loc+2);
	gbot();cout<<int1+10.0<<" milligrams";
	location=wherey();
	}
else if(con==15)  // mg to kg
	{
	gotoxy(1,loc+2);
	gbot();cout<<int1*(0.000001)<<" kilogram";
	location=wherey();
	}
else if(con==16)  // c to f
	{
	gotoxy(1,loc+2);
	gbot();cout<<((int1*1.8)+32)<<" \370farenheit";
	location=wherey();
	}
else if(con==17)  // f to c
	{
	gotoxy(1,loc+2);
	gbot();cout<<((int1-32)/1.8)<<" \370celsius";
	location=wherey();
	}
else if(con==18)  // k to c
	{
	gotoxy(1,loc+2);
	gbot();cout<<int1-(273.15)<<" \370celsius";
	location=wherey();
	}
else if(con==19)  // c to k
	{
	gotoxy(1,loc+2);
	gbot();cout<<int1+(273.15)<<" K";
	location=wherey();
	}
else if(con==20)  // k to f
	{
	gotoxy(1,loc+2);
	gbot();cout<<((int1*(1.8))-459.67)<<" \370farenheit";
	location=wherey();
	}
else if(con==21)  // f to k
	{
	gotoxy(1,loc+2);
	gbot();cout<<((int1+(459.67))*(0.55555556))<<" K";
	location=wherey();
	}
else if(con==22)  // rupee to dollar
	{
	gotoxy(1,loc+2);
	gbot();cout<<int1/(64.70)<<" $ USD";
	location=wherey();
	}
else if(con==23)  // dollar to rupee
	{
	gotoxy(1,loc+2);
	gbot();cout<<int1*(64.70)<<" INR";
	location=wherey();
	}

}

void chatbot :: converse(int other=0)
{
if(other==0)
{
	if(replysup==1)
		{
		int c_rand=random(3);
		randomize();
		if(c_rand==0)
			{
			gotoxy(1,loc+1);
			gbot();textcolor(7);cprintf("Im learning some new tricks \2 !");
			location=wherey();
			}
		else if(c_rand==1)
			{
			gotoxy(1,loc+1);
			gbot();textcolor(7);cprintf("Just hanging out with the motherboard \1");
			location=wherey();
			}
		else if(c_rand==2)
			{
			gotoxy(1,loc+1);
			gbot();textcolor(7);cprintf("Im reading some binary dont tell me how it ends !");
			location=wherey();
			}
		}
	else if(replysup==0)
		{
		int c_rand=random(4);
		randomize();
		if(c_rand==0)
			{
			gotoxy(1,loc+1);
			gbot();textcolor(7);cprintf("Hey \2 !");
			location=wherey();
			}
		else if(c_rand==1)
			{
			gotoxy(1,loc+1);
			gbot();textcolor(7);cprintf("Hello \1 !!!");
			location=wherey();
			}
		else if(c_rand==2)
			{
			gotoxy(1,loc+1);
			gbot();textcolor(7);cprintf("Hi ! ");
			location=wherey();
			}
		else if(c_rand==3)
			{
			gotoxy(1,loc+1);
			gbot();textcolor(7);cprintf("Yo ! ");
			location=wherey();
			}
		}
	}
if(other==1)
	{
	gotoxy(1,loc+1);
	gbot();textcolor(7);cprintf("I am fine, Thanks for asking \2                   ");
	location=wherey();
	}
else if(other==2)
	{
	gotoxy(1,loc+1);
	gbot();textcolor(7);cprintf("I am G-bot ! the chatbot \2                       ");
	location=wherey();
	}
else if(other==3)
	{
	gotoxy(1,loc+1);
	gbot();textcolor(7);cprintf("I was made by Mr.Headboy Gaurav.v \2              ");
	location=wherey();
	}
else if(other==4)
	{
	gotoxy(1,loc+1);
	gbot();textcolor(7);cprintf("I Know Right ! haha \2                            ");
	location=wherey();
	}
else if(other==5)
	{
	gotoxy(1,loc+1);
	gbot();textcolor(7);cprintf(".... ?");
	location=wherey();
	}
else if(other==6)
	{
	clrscr();
	layout();
	gotoxy(1,5);
	gbot();textcolor(7);cprintf("Here are a few things you can ask me");
	gtype(".> I can be the weatherman and check the",15,3,wherey()+2);gtype(" weather.",12);
	gtype(".> I can ",15,3,wherey()+1);gtype("convert",12);gtype(" 23 Different units.",15);
	gtype(".> I am a mathematician I can do basic math",15,3,wherey()+1);gtype(" (+ - * / ^)",12);
	gtype(".> I can be a poet and send a ",15,3,wherey()+1);gtype("poem.",12);
	gtype(".> I am a Funny bot, ask me to tell a",15,3,wherey()+1);gtype(" joke.",12);
	gtype(".> I am Factual as well, ask me to tell a ",15,3,wherey()+1);gtype("fact.",12);
	gtype(".> Philosophical at times ask me to quote a ",15,3,wherey()+1);gtype("quote.",12);
	gtype(".> I am fun to play with ask me to play a ",15,3,wherey()+1);gtype("minigame.",12);
	gtype(".> I can check your",15,3,wherey()+1);gtype(" luck ",12);gtype("too ! Just ask me \2",15);
	gtype(".> Just say ",15,3,wherey()+1);gtype("bye",12);gtype(" to leave. ",15);
	location=wherey();
	clr=clr+2;
	}
}

void chatbot :: minigame()
{
prompt_var=8;
clrscr();
layout();
randomize();
char ans[20];
int ans1;
int rand_g=random(3);
int rand_g1=random(2);
int rand_g2=random(4);
if(rand_g==1)
	{
	gotoxy(1,6);gbot();textcolor(7);cprintf("Let us play a game of chance ");
	gotoxy(1,8);gbot();textcolor(7);cprintf("Im going to flip a coin  ");
	gotoxy(1,9);gbot();textcolor(7);cprintf("Guess the Outcome \2 ");
	gotoxy(1,10);gbot();textcolor(7);cprintf("Heads or tails ? : ");gets(ans);
	if(rand_g1==0)
		{
		gotoxy(1,12);gbot();textcolor(7);cprintf("Oops ! It's not ");cout<<ans;
		}
	else if(rand_g1==1)
		{
		gotoxy(1,12);gbot();textcolor(7);cprintf("Yay ! It's ");cout<<ans;
		}
	}
else if(rand_g==2)
	{
	gotoxy(1,6);gbot();textcolor(7);cprintf("Let us play a game of chance ");
	gotoxy(1,8);gbot();textcolor(7);cprintf("Im going to roll an die it can give any value ");
	gotoxy(1,9);gbot();textcolor(7);cprintf("Guess the Outcome \2 ");
	gotoxy(1,10);gbot();textcolor(7);cprintf("What is the number ? : ");
	while(!(cin>>ans1))
		{
		cin.clear();
		cin.ignore(999,'\n');
		gtype("                   ",4,34,10);
		gtype("",4,34,10);
		}
	if(rand_g1==0)
		{
		gotoxy(1,12);gbot();textcolor(7);cprintf("Yay ! It's ");cout<<ans1;
		}
	else if(rand_g1==1)
		{
		gotoxy(1,12);gbot();textcolor(7);cprintf("Oops ! It's not ");cout<<ans1<<" It is "<<ans1-3;
		}
	}
else if(rand_g==0)
	{
	gotoxy(1,6);gbot();textcolor(7);cprintf("Let us play Decipher the anagram ");
	gotoxy(1,8);gbot();textcolor(7);cprintf("Anagram is a word or phrase formed by");
	gotoxy(1,9);gbot();textcolor(7);cprintf("rearranging the letters of a phrase or word.");
	if(rand_g2==0)
		{
		gotoxy(1,10);gbot();textcolor(7);cprintf("Decode ' nag a ram '");
		gotoxy(1,11);gbot();textcolor(7);cprintf("Deciphered word : ");gets(ans);
		if(!(strcmpi(ans,"anagram")))
			{
			gotoxy(1,13);gbot();textcolor(7);cprintf("Whopee ! you are correct it is ");cout<<ans;
			}
		else
			{
			gotoxy(1,13);gbot();textcolor(7);cprintf("Oops ! wrong answer. Deciphered word is ");cout<<"anagram";
			}
		}
	else if(rand_g2==1)
		{
		gotoxy(1,10);gbot();textcolor(7);cprintf("Decode ' tchta ob '");
		gotoxy(1,11);gbot();textcolor(7);cprintf("Deciphered word : ");gets(ans);
		if(!(strcmpi(ans,"chatbot")))
			{
			gotoxy(1,13);gbot();textcolor(7);cprintf("Whopee ! you are correct it is ");cout<<ans;
			}
		else
			{
			gotoxy(1,13);gbot();textcolor(7);cprintf("Oops ! wrong answer. Deciphered word is ");cout<<"chatbot";
			}
		}
	else if(rand_g2==2)
		{
		gotoxy(1,10);gbot();textcolor(7);cprintf("Decode ' awmoes '");
		gotoxy(1,11);gbot();textcolor(7);cprintf("Deciphered word : ");gets(ans);
		if(!(strcmpi(ans,"awesome")))
			{
			gotoxy(1,13);gbot();textcolor(7);cprintf("Whopee ! you are correct it is ");cout<<ans;
			}
		else
			{
			gotoxy(1,13);gbot();textcolor(7);cprintf("Oops ! wrong answer. Deciphered word is ");cout<<"awesome";
			}
		}
	if(rand_g2==3)
		{
		gotoxy(1,10);gbot();textcolor(7);cprintf("Decode ' voldtorme '");
		gotoxy(1,11);gbot();textcolor(7);cprintf("Deciphered word : ");gets(ans);
		if(!(strcmpi(ans,"voldemort")))
			{
			gotoxy(1,13);gbot();textcolor(7);cprintf("Whopee ! you are correct it is ");cout<<ans;
			}
		else
			{
			gotoxy(1,13);gbot();textcolor(7);cprintf("Oops ! wrong answer. Deciphered word is ");cout<<"voldemort";
			}
		}
	}
location=wherey();
clr=clr+2;
}

void chatbot :: luck()
{
randomize();
int rand_l=random(1);
gotoxy(1,loc+1);gbot();
if(rand_l==0)
	{
	gtype("Today is a great day !",7);
	gotoxy(1,loc+2);gbot();
	gtype("Luck meter Score : 5/5 ",7);
	gotoxy(1,loc+3);gbot();
	gtype("Enjoy the day \2",7);
	}
else if(rand_l==1)
	{
	gtype("Today is a good day !",7);
	gotoxy(1,loc+2);gbot();
	gtype("Luck meter Score : 4/5 ",7);
	gotoxy(1,loc+3);gbot();
	gtype("Have fun \2",7);

	}
else if(rand_l==2)
	{
	gtype("Today is an average day !",7);
	gotoxy(1,loc+2);gbot();
	gtype("Luck meter Score : 3/5 ",7);
	gotoxy(1,loc+3);gbot();
	gtype("Stay happy \2",7);

	}
else if(rand_l==3)
	{
	gtype("Today is a tough day !",7);
	gotoxy(1,loc+2);gbot();
	gtype("Luck meter Score : 2/5 ",7);
	gotoxy(1,loc+3);gbot();
	gtype("Hope you manage \2",7);

	}
else if(rand_l==4)
	{
	gtype("Today is a bad day !",7);
	gotoxy(1,loc+2);gbot();
	gtype("Luck meter Score : 1/5 ",7);
	gotoxy(1,loc+3);gbot();
	gtype("Get luckier and try to be happy \2",7);
	}
location=wherey();
}

void chatbot :: calculate()
{
float int1,int2;
if(strstr(usertxt,"add") || strstr(usertxt,"+"))
	{
	prompt_var=2;
	layout();
	gotoxy(1,loc+1);
	gbot();textcolor(7);cprintf("OK give me 2 numbers -> ");
	while(!(cin>>int1>>int2))
		{
		cin.clear();
		cin.ignore(999,'\n');
		gtype("                   ",4,35,loc+1);
		gtype("",4,35,loc+1);
		}
	add(int1,int2);
	mloc=wherey();
	}
else if(strstr(usertxt,"subtract") || strstr(usertxt,"-"))
	{
	prompt_var=2;
	layout();
	gotoxy(1,loc+1);
	gbot();textcolor(7);cprintf("OK give me 2 numbers -> ");
	while(!(cin>>int1>>int2))
		{
		cin.clear();
		cin.ignore(999,'\n');
		gtype("                   ",4,35,loc+1);
		gtype("",4,35,loc+1);
		}
	sub(int1,int2);
	}
else if(strstr(usertxt,"multiply") || strstr(usertxt,"*"))
	{
	prompt_var=2;
	layout();
	gotoxy(1,loc+1);
	gbot();textcolor(7);cprintf("OK give me 2 numbers -> ");
	while(!(cin>>int1>>int2))
		{
		cin.clear();
		cin.ignore(999,'\n');
		gtype("                   ",4,35,loc+1);
		gtype("",4,35,loc+1);
		}
	mul(int1,int2);
	}
else if(strstr(usertxt,"divide") || strstr(usertxt,"/"))
	{
	prompt_var=2;
	layout();
	gotoxy(1,loc+1);
	gbot();textcolor(7);cprintf("OK give me 2 numbers -> ");
	while(!(cin>>int1>>int2))
		{
		cin.clear();
		cin.ignore(999,'\n');
		gtype("                   ",4,35,loc+1);
		gtype("",4,35,loc+1);
		}

	div(int1,int2);
	}
else if(strstr(usertxt,"square") || strstr(usertxt,"^"))
	{
	prompt_var=5;
	layout();
	gotoxy(1,loc+1);
	gbot();textcolor(7);cprintf("OK give me a number -> ");
	while(!(cin>>int1))
		{
		cin.clear();
		cin.ignore(999,'\n');
		gtype("                   ",4,34,loc+1);
		gtype("",4,34,loc+1);
		}
	sqr(int1);
	}
}

void chatbot :: weather()
{
int w_rand=random(5);
randomize();
clrscr();
layout();
if(w_rand==0)
	{
		gotoxy(1,6);
		gbot();textcolor(7);cprintf("Im running hot but the surroundings seems to ");
		gotoxy(29,wherey()+1);cprintf(" be cool !");
		gotoxy(11,wherey()+2);textcolor(4);cprintf("Now : ");textcolor(7);cprintf("26\370 C");
		gotoxy(11,wherey()+1);textcolor(1);cprintf("Today's High : ");textcolor(7);cprintf("28\370 C");
		gotoxy(11,wherey()+1);textcolor(2);cprintf("Todays's Low : ");textcolor(7);cprintf("19\370 C");
		gotoxy(11,wherey()+1);textcolor(3);cprintf("Sunrise : ");textcolor(7);cprintf("5:54 AM");
		gotoxy(11,wherey()+1);textcolor(9);cprintf("Sunset : ");textcolor(7);cprintf("6:47 PM");
		gotoxy(11,wherey()+1);textcolor(5);cprintf("Rain : ");textcolor(7);cprintf("20 \45 Chances");
		gotoxy(11,wherey()+1);textcolor(6);cprintf("Humidity : ");textcolor(7);cprintf("72 %");
		location=wherey();
		clr=clr+2;
		}
	else if(w_rand==1)
		{
		gotoxy(1,6);
		gbot();textcolor(7);cprintf("Rain rain go away ! Catch your umbrella \2 ");
		gotoxy(11,wherey()+2);textcolor(4);cprintf("Now : ");textcolor(7);cprintf("21\370 C");
		gotoxy(11,wherey()+1);textcolor(1);cprintf("Today's High : ");textcolor(7);cprintf("23\370 C");
		gotoxy(11,wherey()+1);textcolor(2);cprintf("Todays's Low : ");textcolor(7);cprintf("17\370 C");
		gotoxy(11,wherey()+1);textcolor(3);cprintf("Sunrise : ");textcolor(7);cprintf("6:04 AM");
		gotoxy(11,wherey()+1);textcolor(9);cprintf("Sunset : ");textcolor(7);cprintf("5:27 PM");
		gotoxy(11,wherey()+1);textcolor(5);cprintf("Rain : ");textcolor(7);cprintf("80 \45 Chances");
		gotoxy(11,wherey()+1);textcolor(6);cprintf("Humidity : ");textcolor(7);cprintf("22 %");
		location=wherey();
		clr=clr+2;
		}
	else if(w_rand==2)
		{
		gotoxy(1,6);
		gbot();textcolor(7);cprintf("Brrrr ! i'm feeling cold, Heat me up !!! ");
		gotoxy(11,wherey()+2);textcolor(4);cprintf("Now : ");textcolor(7);cprintf("18\370 C");
		gotoxy(11,wherey()+1);textcolor(1);cprintf("Today's High : ");textcolor(7);cprintf("21\370 C");
		gotoxy(11,wherey()+1);textcolor(2);cprintf("Todays's Low : ");textcolor(7);cprintf("13\370 C");
		gotoxy(11,wherey()+1);textcolor(3);cprintf("Sunrise : ");textcolor(7);cprintf("6:20 AM");
		gotoxy(11,wherey()+1);textcolor(9);cprintf("Sunset : ");textcolor(7);cprintf("5:27 PM");
		gotoxy(11,wherey()+1);textcolor(5);cprintf("Rain : ");textcolor(7);cprintf("12 \45 Chances");
		gotoxy(11,wherey()+1);textcolor(6);cprintf("Humidity : ");textcolor(7);cprintf("23 %");
		location=wherey();
		clr=clr+2;
		}
	else if(w_rand==3)
		{
		gotoxy(1,6);
		gbot();textcolor(7);cprintf("Well this weather has no chill ! Get me some ");
		gotoxy(29,wherey()+1);cprintf(" ice cream \2");
		gotoxy(11,wherey()+2);textcolor(4);cprintf("Now : ");textcolor(7);cprintf("30\370 C");
		gotoxy(11,wherey()+1);textcolor(1);cprintf("Today's High : ");textcolor(7);cprintf("34\370 C");
		gotoxy(11,wherey()+1);textcolor(2);cprintf("Todays's Low : ");textcolor(7);cprintf("28\370 C");
		gotoxy(11,wherey()+1);textcolor(3);cprintf("Sunrise : ");textcolor(7);cprintf("5:32 AM");
		gotoxy(11,wherey()+1);textcolor(9);cprintf("Sunset : ");textcolor(7);cprintf("7:07 PM");
		gotoxy(11,wherey()+1);textcolor(5);cprintf("Rain : ");textcolor(7);cprintf("5 \45 Chances");
		gotoxy(11,wherey()+1);textcolor(6);cprintf("Humidity : ");textcolor(7);cprintf("43 %");
		location=wherey();
		clr=clr+2;
		}
	else if(w_rand==4)
		{
		gotoxy(1,6);
		gbot();textcolor(7);cprintf("Good weather makes me really happy \2 !!!");
		gotoxy(11,wherey()+2);textcolor(4);cprintf("Now : ");textcolor(7);cprintf("24\370 C");
		gotoxy(11,wherey()+1);textcolor(1);cprintf("Today's High : ");textcolor(7);cprintf("26\370 C");
		gotoxy(11,wherey()+1);textcolor(2);cprintf("Todays's Low : ");textcolor(7);cprintf("21\370 C");
		gotoxy(11,wherey()+1);textcolor(3);cprintf("Sunrise : ");textcolor(7);cprintf("5:45 AM");
		gotoxy(11,wherey()+1);textcolor(9);cprintf("Sunset : ");textcolor(7);cprintf("6:36 PM");
		gotoxy(11,wherey()+1);textcolor(5);cprintf("Rain : ");textcolor(7);cprintf("30 \45 Chances");
		gotoxy(11,wherey()+1);textcolor(6);cprintf("Humidity : ");textcolor(7);cprintf("43 %");
		location=wherey();
		clr=clr+2;
		}
}

void chatbot :: poem()
{
int p_rand=random(1);
randomize();
clrscr();
layout();
if(p_rand==4)
	{
	gotoxy(1,6);
	gbot();gtype("I am Unique",14);
	gtype("I come with no wrapping or pretty pink bows,",15,10,wherey()+4);
	gtype("I am who I am, from my head to my toes,",15,10,wherey()+1);
	gtype("I tend to get loud when speaking my mind,",15,10,wherey()+1);
	gtype("Even a little crazy some of the times.",15,10,wherey()+1);
	location=wherey();
	clr=clr+2;
	}
else if(p_rand==3)
	{
	gotoxy(1,6);
	gbot();gtype("Forever",14);
	gtype("Forever we remain oblivious to the future,",15,10,wherey()+4);
	gtype("Lost to the past and enduring the present,",15,10,wherey()+1);
	gtype("Forever we take chances to settle our scores,",15,10,wherey()+1);
	gtype("Losing some battles and winning some wars...",15,10,wherey()+1);
	location=wherey();
	clr=clr+2;
	}
else if(p_rand==2)
	{
	gotoxy(1,6);
	gbot();gtype("Life's Battle",14);
	gtype("Didn't want a battle,",15,6,wherey()+3);
	gtype("Yet you declared a war,",15,6,wherey()+1);
	gtype("Each knock you gave me made me stronger than before;",15,6,wherey()+1);
	gtype("I will not give up,",15,6,wherey()+1);
	gtype("I will not give in,",15,6,wherey()+1);
	gtype("You won't make me fall,",15,6,wherey()+1);
	gtype("I wont let you win.",15,6,wherey()+1);
	location=wherey();
	clr=clr+2;
	}
else if(p_rand==1)
	{
	gotoxy(1,6);
	gbot();gtype("I realized",14);
	gtype("There is many a shade of green,",15,10,wherey()+3);
	gtype("I have not seen,",15,10,wherey()+1);
	gtype("Lot of places i have not been,",15,10,wherey()+1);
	gtype("Happiness not so keen,",15,10,wherey()+1);
	gtype("Life lost its sheen.",15,10,wherey()+1);
	location=wherey();
	clr=clr+2;
	}
else if(p_rand==0)
	{
	gotoxy(1,6);
	gbot();gtype("Travel",14);
	gtype("Through the dark woods,",15,10,wherey()+2);
	gtype("I long to travel;",15,10,wherey()+1);
	gtype("Towards a vague destination,",15,10,wherey()+1);
	gtype("For a mystery to unravel,",15,10,wherey()+1);
	gtype("I wish to travel,",15,10,wherey()+1);
	gtype("Away from the country gravel,",15,10,wherey()+1);
	gtype("To be eternally happy,",15,10,wherey()+1);
	gtype("Innocent, simple and untroubled.",15,10,wherey()+1);
	location=wherey();
	clr=clr+2;
	}
againp=1;
}

void chatbot :: jokes()
{
randomize();
int j_rand=random(8)+3;
		if(j_rand==3)
		{
		gotoxy(1,loc+1);
		gbot();textcolor(7);cprintf("I went to buy some camouflage trousers the ");
		gotoxy(11,wherey()+1);textcolor(7);cprintf("other day but i couldn't any ! \2");
		location=wherey();
		}
		else if(j_rand==4)
		{
		gotoxy(1,loc+1);
		gbot();textcolor(7);cprintf("I was at the bank the other day, and an elderly");
		gotoxy(11,wherey()+1);textcolor(7);cprintf("woman asked me to check her balance.");
		gotoxy(11,wherey()+1);textcolor(7);cprintf("So i pushed her over ! \2");
		location=wherey();
		}
		else if(j_rand==5)
		{
		gotoxy(1,loc+1);
		gbot();textcolor(7);cprintf("I would lose weight, but i hate losing XD !");
		location=wherey();
		}
		else if(j_rand==6)
		{
		gotoxy(1,loc+1);
		gbot();textcolor(7);cprintf("The first 5 days after the weekend are the");
		gotoxy(11,wherey()+1);textcolor(7);cprintf("hardest !");
		location=wherey();
		}
		else if(j_rand==7)
		{
		gotoxy(1,loc+1);
		gbot();textcolor(7);cprintf("I was going to make a joke about a needle");
		gotoxy(11,wherey()+1);textcolor(7);cprintf("but it is pointless.");
		location=wherey();
		}
		else if(j_rand==8)
		{
		gotoxy(1,loc+1);
		gbot();textcolor(7);cprintf("Q : What do you call a working radio ?");
		gotoxy(11,wherey()+1);textcolor(7);cprintf("A : Radioactive");
		location=wherey();
		}
		else if(j_rand==9)
		{
		gotoxy(1,loc+1);
		gbot();textcolor(7);cprintf("Q : What did one ocean say to the other ?");
		gotoxy(11,wherey()+1);textcolor(7);cprintf("A : Nothing, they just waved \2");
		location=wherey();
		}
		else if(j_rand==10)
		{
		gotoxy(1,loc+1);
		gbot();textcolor(7);cprintf("The past, present and future walk into a bar");
		gotoxy(11,wherey()+1);textcolor(7);cprintf("it was tense");
		location=wherey();
		}
		else if(j_rand==11)
		{
		gotoxy(1,loc+1);
		gbot();textcolor(7);cprintf("My friend asked me if i watched anime");
		gotoxy(11,wherey()+1);textcolor(7);cprintf("I replied with  ""i love chhota bheem !""");
		gotoxy(11,wherey()+1);textcolor(7);cprintf("He hit me on my head, I don't know why ! ");
		location=wherey();
		}
		else if(j_rand==12)
		{
		gotoxy(1,loc+1);
		gbot();textcolor(7);cprintf("My boss told me to have a good day ...");
		gotoxy(22,wherey()+1);textcolor(7);cprintf("I went home");
		location=wherey();
		}
		else if(j_rand==13)
		{
		gotoxy(1,loc+1);
		gbot();textcolor(7);cprintf("A cop pulled me over and said ""papers""...");
		gotoxy(11,wherey()+1);textcolor(7);cprintf("I said scissors,");
		gotoxy(11,wherey()+1);textcolor(7);cprintf("I won and drove off !!!");
		location=wherey();
		}
}

void chatbot :: facts()
{
randomize();
int j_rand=random(8)+3;

		if(j_rand==3)
		{
		gotoxy(1,loc+1);
		gbot();
		gtype("Cherophobia is the fear of fun.",15);
		location=wherey();
		}
		else if(j_rand==4)
		{
		gotoxy(1,loc+1);
		gbot();
		gtype("A flock of crows is known as a murder.",15);
		location=wherey();
		}
		else if(j_rand==5)
		{
		gotoxy(1,loc+1);
		gbot();
		gtype("Human saliva has a boiling point 3x of water.",15);
		location=wherey();
		}
		else if(j_rand==6)
		{
		gotoxy(1,loc+1);
		gbot();
		gtype("Bob dylan's real name is Robert Zimmerman",15);
		location=wherey();
		}
		else if(j_rand==7)
		{
		gotoxy(1,loc+1);
		gbot();
		gtype("Every person has a unique tongue print.",15);
		location=wherey();
		}
		else if(j_rand==8)
		{
		gotoxy(1,loc+1);
		gbot();
		gtype("About 10 percent of the world's population are",15);
		gtype("left handed.",15,11,wherey()+1);
		location=wherey();
		}
		else if(j_rand==9)
		{
		gotoxy(1,loc+1);
		gbot();
		gtype("Dolphins sleep with one eye open.",15);
		location=wherey();
		}
		else if(j_rand==10)
		{
		gotoxy(1,loc+1);
		gbot();
		gtype("A cow produces nearly 2,00,000 glasses of milk",15);
		gtype("in one lifetime.",15,11,wherey()+1);
		location=wherey();
		}
		else if(j_rand==11)
		{
		gotoxy(1,loc+1);
		gbot();
		gtype("Americans on an average eat 18 acres of pizza",15);
		gtype("every day.",15,11,wherey()+1);
		location=wherey();
		}
		else if(j_rand==12)
		{
		gotoxy(1,loc+1);
		gbot();
		gtype("Elephants are the only animals which can't jump.",15);
		location=wherey();
		}
		else if(j_rand==13)
		{
		gotoxy(1,loc+1);
		gbot();
		gtype("A goldfish has a memory span of three seconds.",15);
		location=wherey();
		}
}

void chatbot :: quote()
{
randomize();
int j_rand=random(8)+3;

		if(j_rand==3)
		{
		gotoxy(1,loc+1);
		gbot();
		gtype("It is during our darkest moments that we must",15);
		gtype("focus to see the light.",15,11,wherey()+1);
		location=wherey();
		}
		else if(j_rand==4)
		{
		gotoxy(1,loc+1);
		gbot();
		gtype("It always seems impossible until it is done !",15);
		location=wherey();
		}
		else if(j_rand==5)
		{
		gotoxy(1,loc+1);
		gbot();
		gtype("Grow through what you go through !",15);
		location=wherey();
		}
		else if(j_rand==6)
		{
		gotoxy(1,loc+1);
		gbot();
		gtype("Forget the mistake. Remember the lesson !",15);
		location=wherey();
		}
		else if(j_rand==7)
		{
		gotoxy(1,loc+1);
		gbot();
		gtype("Try to be a rainbow in someone's cloud.",15);
		location=wherey();
		}
		else if(j_rand==8)
		{
		gotoxy(1,loc+1);
		gbot();
		gtype("Failure is a bruise not a tatto",15);
		location=wherey();
		}
		else if(j_rand==9)
		{
		gotoxy(1,loc+1);
		gbot();
		gtype("Beauty is power; a smile is its sword.",15);
		location=wherey();
		}
		else if(j_rand==10)
		{
		gotoxy(1,loc+1);
		gbot();
		gtype("There is nothing permanent except change.",15);
		location=wherey();
		}
		else if(j_rand==11)
		{
		gotoxy(1,loc+1);
		gbot();
		gtype("You cannot shake hands with a clenched fist.",15);
		location=wherey();
		}
		else if(j_rand==12)
		{
		gotoxy(1,loc+1);
		gbot();
		gtype("Not all those who wander are lost.",15);
		location=wherey();
		}
		else if(j_rand==13)
		{
		gotoxy(1,loc+1);
		gbot();
		gtype("If oppurtunity doesnt't knock, build a door.",15);
		location=wherey();
		}
}

void chatbot :: input()
{
if(clr==0)
	{
	gotoxy(1,6);
	textcolor(15);cprintf("\260");textcolor(3);cprintf(" You ");textcolor(YELLOW);cprintf(": ");
	gets(usertxt);
	}
else if(clr<2)
	{
	gotoxy(1,location+2);
	textcolor(15);cprintf("\260");textcolor(3);cprintf(" You ");textcolor(YELLOW);cprintf(": ");
	gets(usertxt);
	}
}

void chatbot :: compute()
{
prompt_var=1;
prompt();
input();
loc=wherey();
if(strstr(usertxt,"hi") || strstr(usertxt,"hello") || strstr(usertxt,"hey") || !strcmpi(usertxt,"yo") || strstr(usertxt,"sup") || strstr(usertxt,"wassup"))
	{
	if(strstr(usertxt,"sup") || strstr(usertxt,"wassup"))
		{
		replysup=1;
		}
	else
		{
		replysup=0;
		}
	converse();
	}
else if(strstr(usertxt,"add") || strstr(usertxt,"subtract") || strstr(usertxt,"multiply") || strstr(usertxt,"divide") || strstr(usertxt,"square") || strstr(usertxt,"cube") || strstr(usertxt,"calculate") || strstr(usertxt,"compute") || strstr(usertxt,"+") || strstr(usertxt,"-") || strstr(usertxt,"*") || strstr(usertxt,"/") || strstr(usertxt,"^"))
	{
	calculate();
	}
else if(strstr(usertxt,"convert cm to inch") || strstr(usertxt,"cm to inch") || strstr(usertxt,"centimetre to inches"))
	{
	convert(1);
	}
else if(strstr(usertxt,"convert cm to m") || strstr(usertxt,"cm to m") || strstr(usertxt,"centimetre to metre") || strstr(usertxt,"cm to metre") || strstr(usertxt,"centimeter to meter"))
	{
	convert(2);
	}
else if(strstr(usertxt,"convert inch to cm") || strstr(usertxt,"inch to cm") || strstr(usertxt,"inch to centimetre") || strstr(usertxt,"inch to centimeter") )
	{
	convert(3);
	}
else if(strstr(usertxt,"convert inch to m") || strstr(usertxt,"inch to m") || strstr(usertxt,"inch to meter") || strstr(usertxt,"inch to metre"))
	{
	convert(4);
	}
else if(strstr(usertxt,"convert inch to feet") || strstr(usertxt,"inch to feet") || strstr(usertxt,"inch to ft"))
	{
	convert(5);
	}
else if(strstr(usertxt,"convert feet to inch") || strstr(usertxt,"feet to inch") || strstr(usertxt,"ft to inch"))
	{
	convert(6);
	}
else if(strstr(usertxt,"convert feet to cm") || strstr(usertxt,"feet to cm") || strstr(usertxt,"ft to cm") || strstr(usertxt,"feet to centimetre") || strstr(usertxt,"feet to centimeter"))
	{
	convert(7);
	}
else if(strstr(usertxt,"convert feet to m") || strstr(usertxt,"feet to m") || strstr(usertxt,"feet to metre") || strstr(usertxt,"feet to meter"))
	{
	convert(8);
	}
else if(strstr(usertxt,"convert cm to feet") || strstr(usertxt,"cm to feet") || strstr(usertxt,"cm to ft") || strstr(usertxt,"centimeter to feet") || strstr(usertxt,"centimetre to feet") || strstr(usertxt,"centimetre to ft"))
	{
	convert(9);
	}
else if(strstr(usertxt,"convert kg to g") || strstr(usertxt,"kg to g") || strstr(usertxt,"kilogram to gram") || strstr(usertxt,"kg to gram"))
	{
	convert(10);
	}
else if(strstr(usertxt,"convert mg to kg") || strstr(usertxt,"mg to kg") || strstr(usertxt,"mg to kilogram") || strstr(usertxt,"milligram to kg") || strstr(usertxt,"milligram to kilogram"))
	{
	convert(15);
	}
else if(strstr(usertxt,"convert g to kg") || strstr(usertxt,"g to kg") || strstr(usertxt,"gram to kg") || strstr(usertxt,"gram to kilogram"))
	{
	convert(11);
	}
else if(strstr(usertxt,"convert kg to mg") || strstr(usertxt,"kg to mg")|| strstr(usertxt,"kilogram to milligram"))
	{
	convert(14);
	}
else if(strstr(usertxt,"convert g to mg") || strstr(usertxt,"g to mg")|| strstr(usertxt,"gram to milligram"))
	{
	convert(12);
	}
else if(strstr(usertxt,"convert mg to g") || strstr(usertxt,"mg to g")|| strstr(usertxt,"milligram to gram"))
	{
	convert(13);
	}
else if(strstr(usertxt,"convert c to f") || strstr(usertxt,"c to f")|| strstr(usertxt,"celsius to farhenheit"))
	{
	convert(16);
	}
else if(strstr(usertxt,"convert f to c") || strstr(usertxt,"f to c")|| strstr(usertxt,"farenheit to celsius"))
	{
	convert(17);
	}
else if(strstr(usertxt,"convert k to c") || strstr(usertxt,"k to c")|| strstr(usertxt,"kelvin to celsius"))
	{
	convert(18);
	}
else if(strstr(usertxt,"convert c to k") || strstr(usertxt,"c to k")|| strstr(usertxt,"celsius to kelvin"))
	{
	convert(19);
	}
else if(strstr(usertxt,"convert k to f") || strstr(usertxt,"k to f")|| strstr(usertxt,"kelvin to farenheit"))
	{
	convert(20);
	}
else if(strstr(usertxt,"convert f to k") || strstr(usertxt,"f to k")|| strstr(usertxt,"farenheit to kelvin"))
	{
	convert(21);
	}
else if(strstr(usertxt,"convert rupee to dollar") || strstr(usertxt,"rupee to dollar") || strstr(usertxt,"inr to usd"))
	{
	convert(22);
	}
else if(strstr(usertxt,"convert dollar to rupee") || strstr(usertxt,"dollar to rupee") || strstr(usertxt,"usd to inr"))
	{
	convert(23);
	}
else if(strstr(usertxt,"convert"))
	{
	gotoxy(1,loc+1);
	gbot();textcolor(7);cprintf("Enter your Conversion units.( EX : cm to inch )");
	location=wherey();
	}
else if(strstr(usertxt,"weather"))
	{
	weather();
	}
else if(strstr(usertxt,"luck"))
	{
	luck();
	}
else if(strstr(usertxt,"bye") || strstr(usertxt,"exit") || strstr(usertxt,"toodles") || strstr(usertxt,"adios"))
	{
	prompt_var=3;
	layout();
	gotoxy(1,loc+1);
	gbot();textcolor(7);cprintf("bye \2 !");
	location=wherey();
	clr=0;
	}
else if(strstr(usertxt,"joke"))
	{
	againf=0;
	againq=0;
	againp=0;
	againj=0;
	jokes();
	againj=1;
	}
else if(strstr(usertxt,"fact"))
	{
	againf=0;
	againq=0;
	againp=0;
	againj=0;
	facts();
	againf=1;
	}
else if(strstr(usertxt,"quote"))
	{
	againf=0;
	againq=0;
	againp=0;
	againj=0;
	quote();
	againq=1;
	}
else if(strstr(usertxt,"poem"))
	{
	againf=0;
	againq=0;
	againp=0;
	againj=0;
	poem();
	againp=1;
	}
else if(strstr(usertxt,"another one") && againj==1 || strstr(usertxt,"again") && againj==1 || strstr(usertxt,"one more") && againj==1)
	{
	jokes();
	againj=0;
	}
else if(strstr(usertxt,"another one") && againq==1 || strstr(usertxt,"again") && againq==1 || strstr(usertxt,"one more") && againq==1)
	{
	quote();
	againq=0;
	}
else if(strstr(usertxt,"another one") && againf==1 || strstr(usertxt,"again") && againf==1 || strstr(usertxt,"one more") && againf==1)
	{
	facts();
	againf=0;
	}
else if(strstr(usertxt,"another one") && againf==1 || strstr(usertxt,"again") && againp==1 || strstr(usertxt,"one more") && againp==1)
	{
	facts();
	againp=0;
	}
else if(strstr(usertxt,"how are you")|| strstr(usertxt,"how are u"))
	{
	converse(1);
	}
else if(strstr(usertxt,"who are you"))
	{
	converse(2);
	}
else if(strstr(usertxt,"who made you") || strstr(usertxt,"who is your creator") ||strstr(usertxt,"who made u") || strstr(usertxt,"who is ur creator"))
	{
	converse(3);
	}
else if(strstr(usertxt,"lol") || strstr(usertxt,"cool") || strstr(usertxt,"haha") || strstr(usertxt,"funny") || strstr(usertxt,"rofl") || strstr(usertxt,"yay") || strstr(usertxt,"woho"))
	{
	converse(4);
	}
else if(strstr(usertxt,"hm") || strstr(usertxt,"ok") || !strcmp(usertxt,"k") || strstr(usertxt,"bruh") || strstr(usertxt,"uh uh") || strstr(usertxt,"bleh")|| strstr(usertxt,"uhuh"))
	{
	converse(5);
	}
else if(strstr(usertxt,"what can you do") || strstr(usertxt,"help"))
	{
	converse(6);
	}
else if(strstr(usertxt,"game"))
	{
	minigame();
	}
else if(strstr(usertxt,"im bored") || strstr(usertxt,"i am bored") || strstr(usertxt,"bored")|| strstr(usertxt,"boring"))
	{
	gotoxy(1,loc+1);
	gbot();textcolor(7);cprintf("Bored eh ? Here's a joke \2");
	location=wherey();
	delay(500);
	gotoxy(1,loc+1);
	cprintf("                                     ");
	delay(50);
	jokes();
	}

else
	{
	gotoxy(1,loc+1);
	gbot();textcolor(7);cprintf("What do you mean ???");
	location=wherey();
	}
}


void chatbot :: prompt()
{
for(int y12=19;y12<22;y12++)
	{
	for(int x12=2;x12<60;x12++)
		{
		gtype("\261",12,x12,y12);
		}
	gtype("\261",4,14,y12);
	}
if(prompt_var==1)
	{
	randomize();
	int rnd=random(16);
	gtype("Prompt",15,5,20);
	if(rnd==0)
		{
		gtype("                                           ",6,16,20);
		gtype("Say Something ! \2",6,18,20);
		}
	else if(rnd==1)
		{
		gtype("                                           ",6,16,20);
		gtype("Ask me ' What can you do ? '",6,18,20);
		}
	else if(rnd==2)
		{
		gtype("                                           ",6,16,20);
		gtype("Ask me ' Who are you ? '",6,18,20);
		}
	else if(rnd==3)
		{
		gtype("                                           ",6,16,20);
		gtype("Ask me ' Who made you ? '",6,18,20);
		}
	else if(rnd==4)
		{
		gtype("                                           ",6,16,20);
		gtype("Try out those keywords \2",6,18,20);
		}
	else if(rnd==5)
		{
		gtype("                                           ",6,16,20);
		gtype("I feel im funny ! Ask me to tell a joke !",6,17,20);
		}
	else if(rnd==6)
		{
		gtype("                                           ",6,16,20);
		gtype("I feel smart ! Ask me to tell a Fact !",6,18,20);
		}
	else if(rnd==7)
		{
		gtype("                                           ",6,16,20);
		gtype("I'm capable of doing math. Try it out \2",6,18,20);
		}
	else if(rnd==8)
		{
		gtype("                                           ",6,16,20);
		gtype("Philosophy is life ! Ask me for a quote.",6,18,20);
		}
	else if(rnd==9)
		{
		gtype("                                           ",6,16,20);
		gtype("I can be pretty poetic \2 Ask for a poem.",6,18,20);
		}
	else if(rnd==10)
		{
		gtype("                                           ",6,16,20);
		gtype("Need help ? Just ask for it \2",6,18,20);
		}
	else if(rnd==11)
		{
		gtype("                                           ",6,16,20);
		gtype("Today's weather is interesting ! Check it",6,17,20);
		}
	else if(rnd==12)
		{
		gtype("                                           ",6,16,20);
		gtype("I can convert units not religion \2",6,18,20);
		}
	else if(rnd==13)
		{
		gtype("                                           ",6,16,20);
		gtype("Feeling lucky ? Ask me to check your luck",6,17,20);
		}
	else if(rnd==14)
		{
		gtype("                                           ",6,16,20);
		gtype("Open sesame ! I can open other Apps of G7",6,17,20);
		}
	else if(rnd==15)
		{
		gtype("                                           ",6,16,20);
		gtype("I know where you have been \2 Check log!",6,18,20);
		}
	}
if(prompt_var==2)
	{
	gtype("Prompt",15,5,20);
	gtype("                                           ",6,16,20);
	gtype("Enter 2 numbers (ex : 1 * space * 2)",6,19,20);
	gtype("space",15,45,20);
	}
if(prompt_var==3)
	{
	gtype("Prompt",15,5,20);
	gtype("                                           ",6,16,20);
	gtype("Press enter to exit to Home",6,24,20);
	}
if(prompt_var==5)
	{
	gtype("Prompt",15,5,20);
	gtype("                                           ",6,16,20);
	gtype("Enter a number to find its square",6,19,20);
	}
if(prompt_var==6)
	{
	gtype("Prompt",15,5,20);
	gtype("                                           ",6,16,20);
	gtype("Enter a number and let me convert it \2",6,19,20);
	}
if(prompt_var==8)
	{
	gtype("Prompt",15,5,20);
	gtype("                                           ",6,16,20);
	gtype("Try your chance ! \2",6,19,20);
	}
}

void chatbot :: cb_caller()
{
clrscr();
cb.layout();
do
	{
	compute();
	clr=clr+1;
	if(clr>=2)
		{
		getch();
		for(int x=2;x<60;x++)
			{
			for(int y=5;y<18;y++)
				{
				gtype(" ",15,x,y);
				}
			}
			layout();
			clr=0;
		}
	}
	while(!(strstr(usertxt,"bye")|| strstr(usertxt,"exit") || strstr(usertxt,"toodles") || strstr(usertxt,"adios")));
delay(20);
clrscr();
g5_menu();
clr=0;
location=4;
}
