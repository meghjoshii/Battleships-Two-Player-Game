
#include<graphics.h>
#include<iostream>
#include<string.h>
#include<fstream>
#include<math.h>
#include<windows.h>
using namespace std;

int hit;

struct position
{
		char p;
		int n;

};

template<class T>
void Swap(T &a,T &b){
    T temp;
    temp=a;
    a=b;
    b=temp;
}

class ship
{
		int size;
		char name[20];

	public:
		position s;
		position e;

	void naming(int i)
	{
		switch(i)
		{
		 case 0:strcpy(name,"Warship");
		      size=5;
			  break;

		 case 1: strcpy(name,"Battleship");
			     size=4;
	             break;

		 case 2: strcpy(name,"Bomber");
		         size=4;
		         break;

		 case 3: strcpy(name,"Submarine");
		         size=3;
		         break;

		 case 4: strcpy(name,"Speedboat");
				 size=2;
				 break;
		}
	}


	int validate(position x,position y)
	{

	int check=0,count=0,ret=1;
	if((int(x.p)<=76)&&(int(x.p)>=65)&&(int(y.p)<=76)&&(int(y.p)>=65)&&(x.n<=12)&&(x.n>0)&&(y.n<=12)&&(y.n>0))
	{
	check=1;
	}
	if(check)
	{
	if(((int(x.p)-int(y.p))==size-1||(int(y.p)-int(x.p))==size-1)&&(x.n==y.n))
	{count=1;}

	else if((((x.n)-(y.n))==size-1||((y.n)-(x.n))==size-1)&&(int(x.p)==int(y.p)))
	{count=1;}

	}

	if(count==1)
	{

		ret=0;
		cout<<"\n";
		ship temp;
		position x;
		x.p='Z';
		x.n=15;
		//ifstream ifile("Ship2.dat",ios::binary);
		ifstream ifile("Ship1.dat",ios::binary);
		if(ifile)
		{
		while(ifile)
		{
			position i,j;
			ifile.read((char*)&temp,sizeof(temp));
			if(!(x.n==temp.s.n&&x.p==temp.s.p))
			{if(int(temp.s.p)==int(temp.e.p))
			{
			 if(temp.s.n<temp.e.n)
			 {
			  if(int(s.p)==int(e.p))
			  {
			   if(s.n<e.n)
			   {
			     for(i=temp.s;i.n<=temp.e.n;i.n++)
				 {
				  for(j=s;j.n<=e.n;j.n++)
				  {
				  if(i.n==j.n&&i.p==j.p)

				  ret=1;//111111111111111111111111111111111
				  }
				 }
				}

				else if(e.n<s.n)
				{
				 for(i=temp.s;i.n<=temp.e.n;i.n++)
				 {
				  for(j=e;j.n<=s.n;j.n++)

				  {

				   if(i.n==j.n&&i.p==j.p)

				   ret=1;//22222222222222222222222222222222222222222222
				  }

				 }

				}

				}

				else if(s.n==e.n)
				{
				 if(int(s.p)<int(e.p))
				 {

				  for(i=temp.s;i.n<=temp.e.n;i.n++)

				  {

				   for(j=s;int(j.p)<=int(e.p);j.p++)

				   {

				    if(i.n==j.n&&i.p==j.p)

					ret=1;//333333333333333333333333333333333333333333333333333333

				   }

				  }

				 }

				 else if(int(e.p)<int(s.p))

				 {

				  for(i=temp.s;i.n<=temp.e.n;i.n++)

				  {

				    for(j=e;int(j.p)<=int(s.p);j.p++)

					{

					 if(i.n==j.n&&i.p==j.p)

					 ret=1;//4444444444444444444444444444444444

					}

				}

			}

		}

	}//////////////////////////////////////////

	else if(temp.e.n<temp.s.n)

	{

	 if(int(s.p)==int(e.p))

	 {

	  if(s.n<e.n)

	  {

	   for(i=temp.e;i.n<=temp.s.n;i.n++)

	   {

	     for(j=s;j.n<=e.n;j.n++)

		 {

		  if(i.n==j.n&&i.p==j.p)

		  ret=1;//1111111111111111111111111111111111111111111111111111111

		 }

		}

	}

	else if(e.n<s.n)

	{

	 for(i=temp.e;i.n<=temp.s.n;i.n++)

	 {

	   for(j=e;j.n<=s.n;j.n++)

	   {

	    if(i.n==j.n&&i.p==j.p)

		ret=1;//222222222222222222222222222222222222222222222222222222222

		}

	}

}

}

else if(s.n==e.n)

{

 if(int(s.p<int(e.p)))

 {

   for(i=temp.e;i.n<=temp.s.n;i.n++)

   {

    for(j=s;int(j.p)<=int(e.p);j.p++)

	{

	 if(i.n==j.n&&i.p==j.p)

	 ret=1;//3333333333333333333333333333333333333333333333333333333333333

	}

}

}

else if(int(e.p)<int(s.p))

{
for(i=temp.e;i.n<=temp.s.n;i.n++)
 {
  for(j=e;int(j.p)<=int(s.p);j.p++)
  {
    if(i.n==j.n&&i.p==j.p)
	ret=1;
  }
 }
 }
 }

}/////////////////////////////////////////////////////////////////

else if(temp.s.n==temp.e.n)
{
 if(int(temp.s.p)<int(temp.e.p))
  {
     if(int(s.p)==int(e.p))
	 {
	   if(s.n<e.n)
	   {
	   for(i=temp.s;int(i.p)<=int(temp.e.p);i.p++)
	   {
	   for(j=s;j.n<=e.n;j.n++)
	   {
	     if(i.n==j.n&&i.p==j.p)
		 ret=1;
	   }
	  }
	 }
     else if(e.n<s.n)
    {
      for(i=temp.s;int(i.p)<=int(temp.e.p);i.p++)
      {
        for(j=e;j.n<=s.n;j.n++)
         {
		   if(i.n==j.n&&i.p==j.p)
		   ret =1;
		  }
		  }
		  }
		 }
    else if(s.n==e.n)
        {
           if(int(s.p)<int(e.p))
            {
              for(i=temp.s;int(i.p)<=int(temp.e.p);i.p++)
                 { for(j=s;int(j.p)<=int(e.p);j.p++)
                    {
                         if(i.n==j.n&&i.p==j.p)
                         ret =1;
					}
		         }
			}

     else if(int(e.p)<int(s.p))
     {
        for(i=temp.s;int(i.p)<=int(temp.e.p);i.p++)
        {
            for(j=e;int(j.p)<=int(s.p);j.p++)
             {
                 if(i.n==j.n&&i.p==j.p)
                 ret =1;
			  }
		}
	 }
  }
  }//////////////////////////////////////////////////////////
     else if(int(temp.e.p)<int(temp.s.p))
     {
       if(int(s.p)==int(e.p))
       { if(s.n<e.n)
         { for(i=temp.e;int(i.p)<=int(temp.s.p);i.p++)
           { for(j=s;j.n<=e.n;j.n++)
             {
			   if(i.n==j.n&&i.p==j.p)
			   ret =1;

			 }
           }
        }
        else if(e.n<s.n)
        {
		  for(i=temp.e;int(i.p)<=int(temp.s.p);i.p++)
          {
		    for(j=e;j.n<=s.n;j.n++)
			{
			   if(i.n==j.n&&i.p==j.p)
			   ret =1;
			}

		  }

		}
      }
       else if(s.n==e.n)
       {
	     if(int(s.p)<int(e.p))
		 {
            for(i=temp.e;int(i.p)<=int(temp.s.p);i.p++)
            {
			  for(j=s;int(j.p)<=int(e.p);j.p++)
			  {
			    if(i.n==j.n&&i.p==j.p)
				ret =1;//33333333333333333333333333333333333333333333333333333
			  }
			}
		 }
	    else if(int(e.p)<int(s.p))
		{
		  for(i=temp.e;int(i.p)<=int(temp.s.p);i.p++)
		  {
		    for(j=e;int(j.p)<=int(s.p);j.p++)
			{
			  if(i.n==j.n&&i.p==j.p)
			  ret =1;//44444444444444444444444444444444444444444444444444444444
			}
		  }

		}

	   }
	   }
	   }
	   }////////////////////////////////////////////////////////////////////////////
       x.n=temp.s.n;
       x.p=temp.s.p;
    }
    }

ifile.close();
}return ret;
}
	}


void assign()
{
   do{
     cout<<"Size of "<<name<<" is "<<size<<endl;
     cout<<"Enter starting position of "<<name<<endl;
     cin>>s.p;

     //wrong input
     while(!isalpha(s.p)){
        cout<<"\nNot a character\n";
        cin.clear();
        cin.ignore(10000, '\n');
        cin>>s.p;
     }
     s.p=toupper(s.p);
     //

     cin>>s.n;
     //wrong input
    while(!s.n){
        cout<<"\Not an Integer\n";
        cin.clear();
        cin.ignore(10000, '\n');
        cin>>s.n;
    }
    //
     cout<<"Enter ending position of "<<name<<endl;
     cin>>e.p;

     //wrong input
     while(!isalpha(e.p)){
        cout<<"\nNot a character\n";
        cin.clear();
        cin.ignore(10000, '\n');
        cin>>e.p;
     }
     e.p=toupper(e.p);
     //


     cin>>e.n;

     //wrong input
    while(!e.n){
        cout<<"\Not an Integer\n";
        cin.clear();
        cin.ignore(10000, '\n');
        cin>>e.n;
    }
    //

    //wrong input
    if(s.p>e.p)
        swap(s.p,e.p);
    if(s.n>e.n)
        swap(s.n,e.n);

    }while(validate(s,e));
position g,h;
g.p=s.p;
g.n=s.n;
h.p=e.p;
h.n=e.n;

int a,b,c,d;
a=(((int(g.p)-64)*50)+25);
b=(((g.n)*50)+25);
c=(((int(h.p)-64)*50)+25);
d=(((h.n)*50)+25);
if(g.p==h.p)
{ bar(a+10,b-10,c-10,d+10);
setcolor(BLUE);
line(a+10,b-10,a+10,d+10);
line(a-10,b-10,a-10,d+10);
line(a-10,b-10,a+10,b-10);
line(a-10,d+10,a+10,d+10);
setfillstyle(SOLID_FILL,BLUE);
floodfill(a+5,b+5,BLUE);

setcolor(WHITE);
line(a+3,b-3,a+3,d+3);
line(a-3,b-3,a-3,d+3);
line(a-3,b-3,a+3,b-3);
line(a-3,d+3,a+3,d+3);
setfillstyle(SOLID_FILL,WHITE);







floodfill(a+1,b+1,WHITE);
}

else
{
bar(a-10,b-10,c+10,d+10);
setcolor(BLUE);
line(a-10,b-10,c+10,b-10);
line(a-10,b-10,a-10,b+10);
line(a-10,b+10,c+10,b+10);
line(c+10,b-10,c+10,b+10);
setfillstyle(SOLID_FILL,BLUE);
floodfill(a+5,b+5,BLUE);

setcolor(WHITE);
line(a-3,b-3,c+3,b-3);
line(a-3,b-3,a-3,b+3);
line(a-3,b+3,c+3,b+3);
line(c+3,b-3,c+3,b+3);
setfillstyle(SOLID_FILL,WHITE);
floodfill(a,b,WHITE);

}

}
};
int collision(position s)
{
int ret=0;
ship temp;
//ifstream ifile("Ship1.dat",ios::binary);
ifstream ifile("Ship2.dat",ios::binary);
if(ifile)
{

while(ifile)

{
position i;
ifile.read((char*)&temp,sizeof(temp));
if(int(temp.s.p)==int(temp.e.p))
{
if(temp.s.n<temp.e.n)
{for(i=temp.s;i.n<=temp.e.n;i.n++)
{if(i.n==s.n&&int(i.p)==int(s.p))
{ret=1;}
}
}///////////////
else if(temp.e.n<temp.s.n)
{
for(i=temp.e;i.n<=temp.s.n;i.n++)
{   if((i.n==s.n)&&int(i.p)==int(s.p))
    {ret=1;}
    }
}
}/////////////

else if(temp.s.n==temp.e.n)
{
if(int(temp.s.p)<int(temp.e.p))
{ for(i=temp.s;int(i.p)<=int(temp.e.p);i.p++)
{if(i.n==s.n&&int(i.p)==int(s.p))
{ret=1;}
}

}////////////////
//}

else if(int(temp.e.p)<int(temp.s.p))

{
 for(i=temp.s;int(i.p)<=int(temp.e.p);i.p++)
 {
  if(i.n==s.n&&int(i.p)==int(s.p))
  {
      ret=1;
  }


}


}
}
}
}
ifile.close();
return ret;
}

void layout()
{
int i,j;
initwindow(1350,700);
readimagefile("crdits.jpg",10,10,1340,690);
//
setbkcolor(BLUE);

bar(45,45,50,655);
bar(45,45,655,50);
bar(650,45,655,655);
bar(45,650,655,655);

bar (695,45,700,655);
bar(695,45,1305,50);
bar(1300,45,1305,655);
bar(695,650,1305,655);

setcolor(GREEN);
for(i=50;i<650;i=i+50)
for(j=50;j<650;j=j+50)
{
line(i,j,i+50,j);
line(i,j,i,j+50);
line(650,50,650,650);
line(50,650,650,650);
}

setcolor(RED);
for(i=700;i<1300;i=i+50)
for(j=50;j<650;j=j+50)
{
line(i,j,i+50,j);
line(i,j,i,j+50);
line(1300,50,1300,650);
line(700,650,1300,650);
}
setcolor(CYAN);

outtextxy(75,40,(char*)"A");outtextxy(125,40,(char*)"B");outtextxy(175,40,(char*)"C");outtextxy(225,40,(char*)"D");outtextxy(275,40,(char*)"E");outtextxy(325,40,(char*)"F");

outtextxy(625,40,(char*)"L");outtextxy(575,40,(char*)"K");outtextxy(525,40,(char*)"J");outtextxy(475,40,(char*)"I");outtextxy(425,40,(char*)"H");outtextxy(375,40,(char*)"G");


outtextxy(45,75,(char*)"1");outtextxy(45,125,(char*)"2");outtextxy(45,175,(char*)"3");outtextxy(45,225,(char*)"4");outtextxy(45,275,(char*)"5");outtextxy(45,325,(char*)"6");

outtextxy(40,625,(char*)"12");outtextxy(40,575,(char*)"11");outtextxy(40,525,(char*)"10");outtextxy(45,475,(char*)"9");outtextxy(45,425,(char*)"8");outtextxy(45,375,(char*)"7");

outtextxy(725,40,(char*)"A");outtextxy(775,40,(char*)"B");outtextxy(825,40,(char*)"C");outtextxy(875,40,(char*)"D");outtextxy(925,40,(char*)"E");outtextxy(975,40,(char*)"F");

outtextxy(1275,40,(char*)"L");outtextxy(1225,40,(char*)"K");outtextxy(1175,40,(char*)"J");outtextxy(1125,40,(char*)"I");outtextxy(1075,40,(char*)"H");outtextxy(1025,40,(char*)"G");

outtextxy(695,75,(char*)"1");outtextxy(695,125,(char*)"2");outtextxy(695,175,(char*)"3");outtextxy(695,225,(char*)"4");outtextxy(695,275,(char*)"5");outtextxy(695,325,(char*)"6");

outtextxy(690,625,(char*)"12");outtextxy(690,575,(char*)"11");outtextxy(690,525,(char*)"10");outtextxy(690,475,(char*)"9");outtextxy(690,425,(char*)"8");outtextxy(690,375,(char*)"7");

}

void fire(position fi)
{

    int a,b;
    a=(((int(fi.p)-64)*50)+25);
    b=(((fi.n)*50)+25);

    if(collision(fi))

    {

        setcolor(RED);
        circle(650+a,b,10);
        setfillstyle(SOLID_FILL,RED);
        floodfill(650+a,b,RED);
        hit++;
    }

    else

    {

        setcolor(GREEN);
        circle(650+a,b,10);
        setfillstyle(SOLID_FILL,GREEN);
        floodfill(650+a,b,GREEN);
    }
}


void create_file()
{

        ship s1,s2,s3,s4,s5,t;

        s1.naming(0);
    s1.naming(0);
s2.naming(1);
s3.naming(2);
s4.naming(3);
s5.naming(4);

//ofstream ofile("Ship2.dat",ios::binary);
ofstream ofile("Ship1.dat",ios::binary);
ofile.close();
s1.assign();
//ofile.open("Ship2.dat",ios::binary|ios::app);
ofile.open("Ship1.dat",ios::binary|ios::app);
ofile.write((char*)&s1,sizeof(s1));
ofile.close();

s2.assign();
//ofile.open("Ship2.dat",ios::binary|ios::app);
ofile.open("Ship1.dat",ios::binary|ios::app);
ofile.write((char*)&s2,sizeof(s2));
ofile.close();

s3.assign();
//ofile.open("Ship2.dat",ios::binary|ios::app);
ofile.open("Ship1.dat",ios::binary|ios::app);
ofile.write((char*)&s3,sizeof(s3));
ofile.close();


s4.assign();
//ofile.open("Ship2.dat",ios::binary|ios::app);
ofile.open("Ship1.dat",ios::binary|ios::app);
ofile.write((char*)&s4,sizeof(s4));
ofile.close();

s5.assign();
//ofile.open("Ship2.dat",ios::binary|ios::app);
ofile.open("Ship1.dat",ios::binary|ios::app);
ofile.write((char*)&s5,sizeof(s5));
ofile.close();

}

int validin(position s){
 int count=1;
    position x;
    if((int(s.p)<=76)&&(s.n<=12)&&(int(s.p)>=65)&&(s.n>0)){
        count=0;
        //ifstream ofile("play1.dat",ios::binary);
        ifstream ofile("play2.dat",ios::binary);
        while(ofile.read((char*)&x,sizeof(x))){
            cout<<"\n";
            if((x.p==s.p)&&(x.n==s.n))
                count=1;
        }
            ofile.close();
    }
    if(count==1)
        cout<<"re";
    return count;
}






void damage(){
    position a;
    //ifstream xfile("play2.dat",ios::binary);
    ifstream xfile("play1.dat",ios::binary);
    while(xfile.read((char*)&a,sizeof(a))){
        int m,n;
        m=(((int(a.p)-64)*50)+25);
        n=(((a.n)*50)+25);
        setcolor(WHITE);
        circle(m,n,10);
        circle(m,n,9);
        circle(m,n,8);
        circle(m,n,7);
    }
    xfile.close();
}





int main(){
    cout<<endl;
    cout<<"                        *****         \n";
    cout<<"                   *************         \n";
    cout<<"                   **************          **         ** \n";
    cout<<"                   ***************        *****      *****            \n";
    cout<<"           **********************************************************    \n";
    cout<<"             *****************************************************         \n";
    cout<<"                **********************************************    \n";

    cout<<"1. EACH PLAYER HAS 5 SHIPS."<<endl;
    cout<<"2. SIZES OF THE SHIPS ARE 5,4,4,3,2."<<endl;
    cout<<"3. EACH PLAYER HAS 2 GRIDS: ONE TO PLACE THEIR SHIPS AND OTHER TO ATTACK."<<endl;
    cout<<"4. EACH PLAYER HAS TO ENTER THEIR SHIPS BY ENTERING THE STARTING ND ENDING\n COORDINATES."<<endl;
    cout<<"5. THE SHIP CAN BE PLACED HORIZONTALLY AND VERTICALLY IN THE GRID BUT 'NOT\n DIAGONALLY' AND THE SHIPS CANNOT INTERSECT."<<endl;
    cout<<"6. EACH PLAYER HAS TO ATTACK EVERY  COORDINATE TURN BY TURN."<<endl;
    cout<<"7. IF THE COLOUR OF THE CIRCLE IS GREEN, IT MEANS THE OPPONENT SHIP HAS NOT BEEN\n HIT AND IF IT'S RED, IT MEANS IT HAS BEEN HIT."<<endl;
    cout<<"8. PLAYER WHO DESTROYS ALL THE 5 SHIPS WINS."<<endl<<endl<<endl<<endl;
    cout<<"MAY THE BEST PLAYER WIN\n\t\t\t\tGOOD LUCK....\n\n";
    cout<<"Enter Coordinates of your Ships: \n\n";



    hit=0;
    layout();
    create_file();
    //ofstream bfile("play1.dat",ios::binary|ios::out);
    ofstream bfile("play2.dat",ios::binary|ios::out);
    bfile.close();
    int w=0,h=1,x=0;
    while(hit<18&&w!=1){
        position shot,a;
        damage();
        do{
            cout<<"Enter attack coordinate:"<<endl;
            cin>>shot.p;

            //wrong input
             while(!isalpha(shot.p)){
                cout<<"\nNot a character\n";
                cin.clear();
                cin.ignore(10000, '\n');
                cin>>shot.p;
             }
             shot.p=toupper(shot.p);
             //

            cin>>shot.n;
            //wrong input
            while(!shot.n){
                cout<<"\Not an Integer\n";
                cin.clear();
                cin.ignore(10000, '\n');
                cin>>shot.n;
            }
            //

        }while(validin(shot));

        fire(shot);


        //ofstream bfile1("play1.dat",ios::binary|ios::app);
        ofstream bfile1("play2.dat",ios::binary|ios::app);
        bfile1.write((char*)&shot,sizeof(shot));
        bfile1.close();



        //ofstream endhit("shoot.dat",ios::binary);
        ofstream endhit("shoot1.dat",ios::binary);
        endhit.write((char*)&h,sizeof(h));
        endhit.close();



        while(x==0){
            //ifstream impact("shoot1.dat",ios::binary);
            ifstream impact("shoot.dat",ios::binary);
            impact.read((char*)&x,sizeof(x));
            impact.close();
        }
        x=0;
        //remove("shoot1.dat");
        remove("shoot.dat");



        ifstream loser("End.dat",ios::binary);
        loser.read((char*)&w,sizeof(w));
        loser.close();
    }

    if(hit==18){
        int i=1;


        cout<<"--------- *   *    **    *     *    *         *  *  *     *      -------\n";
        cout<<"           * *   *    *  *     *    *         *  *  * *   *         \n";
        cout<<"            *    *    *  *     *     *   *   *   *  *  *  *      \n";
        cout<<"            *    *    *  *     *      * * * *    *  *   * *            \n";
        cout<<"--------    *      **     * * *       **   **    *  *     *      -------\n";

        ofstream ofile("End.dat",ios::binary);
        ofile.write((char*)&i,sizeof(i));
        ofile.close();


        //ofstream endhit("shoot.dat",ios::binary);
        ofstream endhit("shoot1.dat",ios::binary);
        endhit.write((char*)&h,sizeof(h));
        endhit.close();
    }
    else{
        cout<<"---------  *   *    **    *     *     *         **      ****  ******           -------\n";
        cout<<"            * *   *    *  *     *     *       *    *   *      *          \n";
        cout<<"             *    *    *  *     *     *       *    *     ***  ******            \n";
        cout<<"             *    *    *  *     *     *       *    *        * *         \n";
        cout<<"--------     *      **     * * *      *******   **      ****  ******          -------\n";
        remove("End.dat");

    }

    system("pause");


    return 0;

}



