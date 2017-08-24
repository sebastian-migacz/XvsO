#include "Plansza.h"
#include <iostream>

using namespace std;

void Plansza::czyscPlansze(int tab[3][3])
{
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
			tab[i][j]=0;
	}	
}//f-cja czysci plansze przez zerowanie macierzy

void Plansza::zaznaczPole(int tab[3][3], int var)
{
	bool toExit=0;
	int wyborPolaNaPlanszy;
	
		do
	{
		cin>>wyborPolaNaPlanszy;
		if(wyborPolaNaPlanszy<1 || wyborPolaNaPlanszy>9)
		cout<<"\n   Musisz wybrac liczbe od 1 do 9!!!\n";
	}while(wyborPolaNaPlanszy<1 || wyborPolaNaPlanszy>9);
		
	do
	{
	
	switch(wyborPolaNaPlanszy)
	{
		case 7:
			if(tab[0][0]==0)
				{
				tab[0][0]=var;
				toExit=1;
				}
			else
				{
					cout<<"\nMusisz podac nie zajete pole !!!!\n";
					cin>>wyborPolaNaPlanszy;
				}
		break;
		
		case 8:
			if(tab[0][1]==0)
				{
				tab[0][1]=var;
				toExit=1;
				}
			else
				{
					cout<<"\nMusisz podac nie zajete pole !!!!\n";
					cin>>wyborPolaNaPlanszy;
				}
			
		break;
		
		case 9:
			if(tab[0][2]==0)
				{
				tab[0][2]=var;
				toExit=1;
				}
			else
				{
					cout<<"\nMusisz podac nie zajete pole !!!!\n";
					cin>>wyborPolaNaPlanszy;
				}
			
		break;
		
		case 4:
				if(tab[1][0]==0)
				{
				tab[1][0]=var;
				toExit=1;
				}
			else
				{
					cout<<"\nMusisz podac nie zajete pole !!!!\n";
					cin>>wyborPolaNaPlanszy;
				}
			
		break;
		
		case 5:
			if(tab[1][1]==0)
				{
				tab[1][1]=var;
				toExit=1;
				}
			else
				{
					cout<<"\nMusisz podac nie zajete pole !!!!\n";
					cin>>wyborPolaNaPlanszy;
				}		
		break;
		
		case 6:
			if(tab[1][2]==0)
				{
				tab[1][2]=var;
				toExit=1;
				}
			else
				{
					cout<<"\nMusisz podac nie zajete pole !!!!\n";
					cin>>wyborPolaNaPlanszy;
				}
			
		break;
		
		case 1:
			if(tab[2][0]==0)
				{
				tab[2][0]=var;
				toExit=1;
				}
			else
				{
					cout<<"\nMusisz podac nie zajete pole !!!!\n";
					cin>>wyborPolaNaPlanszy;
				}
			
		break;
		
		case 2:
			if(tab[2][1]==0)
				{
				tab[2][1]=var;
				toExit=1;
				}
			else
				{
					cout<<"\nMusisz podac nie zajete pole !!!!\n";
					cin>>wyborPolaNaPlanszy;
				}
		break;
		
		case 3:
			if(tab[2][2]==0)
				{
				tab[2][2]=var;
				toExit=1;
				}
			else
				{
					cout<<"\nMusisz podac nie zajete pole !!!!\n";
					cin>>wyborPolaNaPlanszy;
				}
		break;
		
	}
	}while(toExit==0);
	
	
}// f-cja wypelniajaca plansze cyframi 1 oraz odpowiadajacymi za X oraz O 


char Plansza::ustalZnak(int zn)
{
		if(zn==1) return 'X';
			if(zn==2) return 'O';
			else return ' ';
	
}// f-cja zwraca znak na podstawie liczyby otrzymanej z macierzy

void Plansza::rysujPlansze(int tab[3][3])
{
	char znak = 'O';
	cout<<"\n";
	
	for(int i=0;i<3;i++)
		{
			
			cout<<" "<< ustalZnak(tab[i][0]) <<" | "<< ustalZnak(tab[i][1]) <<" | "<< ustalZnak(tab[i][2]) <<" \n";
			if(i<2)
			cout<<"-----------\n";
		}
   
}// f-cja rysujaca plansze do gry oraz pokazujaca aktualnuie zajete pola 
