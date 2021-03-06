#include "Rozgrywka.h"
#include "Gracz.h"
#include "Plansza.h"
#include <iostream>
#include <string>

using namespace std;

bool Rozgrywka::sprawdzWygrana(int tab[3][3], Gracz *player)
{
	int stan =0;
	bool stan2=0;
	for(int i=0;i<3;i++)
	{
		if(tab[ i][0]==tab[i][1] && tab[i][1]==tab[i][2] && tab[i][1]!=0)
			{
				stan=1;
			}
	}
	
	for(int i=0;i<3;i++)
	{
		if(tab[0][i]==tab[1][i] && tab[2][i]==tab[1][i] && tab[1][i]!=0)
			{
				stan=1;
			}
	}
	
	if(tab[0][0]==tab[1][1] && tab[2][2]==tab[1][1] && tab[1][1]!=0)
			{
				stan=1;
			}
			
	else if(tab[0][2]==tab[1][1] && tab[2][0]==tab[1][1] && tab[1][1]!=0)
			{
				stan=1;
			}
			
	if(stan==1)
	{
		player->addPkt();
		cout<<"pkt"<<player->getPkt()<<endl;
		cout<<" Wygrywa "<<player->getName()<<endl;
		system("pause");	
		return 1;
	}
	else if(stan==0)
	{
		stan2=1;
		for(int a=0;a<3;a++)
		{
			for(int b=0;b<3;b++)
				{
					if(tab[a][b]==0)
					stan2 =0;
					
				}
		}
	}
	
	if(stan2==1)
	{
		cout<<" Brak mozliwosci ruchu. REMIS !!\n"<<endl;
		system("pause");	
		return 1;
		
	}
	else
	return 0;
}//sprawdzenie czy gracz wygral


void Rozgrywka::runda(Gracz *player1, Gracz *player2)
{
	Plansza AktualnaPlansza;
	bool koniec=0;

	int tab[3][3];
	AktualnaPlansza.czyscPlansze(tab);
	do
	{
		system("cls");
		AktualnaPlansza.rysujPlansze(tab);
		cout<<"\n\n   Teraz kolej gracza  "<<player1->getName()<<endl;
	
		if(player1->getIsBot()==0)
		AktualnaPlansza.zaznaczPole(tab, 1);
		else
		AktualnaPlansza.zaznaczPoleSI(tab, 1);	//koniec tury 1-sego gracza
		
		system("cls");
		AktualnaPlansza.rysujPlansze(tab);
		koniec=sprawdzWygrana(tab,player1);
		
		if(koniec==0)
		{
		
			system("cls");
			AktualnaPlansza.rysujPlansze(tab);
   			cout<<"\n\n   Teraz kolej gracza  "<<player2->getName()<<endl;
			
	
		if(player2->getIsBot()==0)
		AktualnaPlansza.zaznaczPole(tab, 2);
		else
		AktualnaPlansza.zaznaczPoleSI(tab, 2);	//koniec tury 2-giego gracza
			
			system("cls");
			AktualnaPlansza.rysujPlansze(tab);
			koniec=sprawdzWygrana(tab,player2);
		}
		
		
		
	}while(koniec==0);
	
	
}


void Rozgrywka::gra(bool bot)
{ 
	bool toExitTemp=0;
	int controler=0;
	
	system("cls");
	string nazwaGracza;
	cout<<"\n\n     Podaj nazwe pierwszego Gracza.\n";
	cin>>nazwaGracza;
	Gracz GraczPierwszy(nazwaGracza, 0);
	
	if(bot==0)
	{
		cout<<"\n\n     Podaj nazwe drugiego Gracza.\n";
		cin>>nazwaGracza;
		
	}

	Gracz GraczDrugi(nazwaGracza,bot);

	

	do
	{
		system("cls");
		cout<<"\n\n";
		GraczPierwszy.wyswietl();
		GraczDrugi.wyswietl();
		cout<<"\n\n";

		cout<<"\n     Gra w kolko i krzyzyk\n-------------------------------------\n";
		cout<<"     1- Graj\n     0-Wyjscie\n\n";
				
				do
				{
					
					cin>>controler;
					if(controler!=1 && controler!=0)
					cout<<"    Wpisz 1 lub 0 !!!!!!\n";
				}while(controler!=1 && controler!=0); //wymuszenie ustawienia w controllerze wartosci ktore sa w switch
				
			
			
		switch(controler)
		{
			case 0:
				toExitTemp=1;
			break;
			
			case 1:
				
				cout<<"\n\n     Ktory gracz zaczyna?\n";
				cout<<"     1- "<<GraczPierwszy.getName()<<endl;
				cout<<"     2- "<<GraczDrugi.getName()<<endl;;
				short int controler2;
				do
				{
					cin>>controler2;
					if(controler2!=1 && controler2!=2)
					cout<<"    Wpisz 1 lub 2 !!!!!!\n";
				}while(controler2!=1 && controler2!=2);
				
				if(controler2==1)
				{
					runda(&GraczPierwszy, &GraczDrugi);
					
				}
				
				if(controler2==2)
				{
					runda(&GraczDrugi, &GraczPierwszy);
				}
				 
				
				
			break;
		}
		
		
		
		
		
	}while(toExitTemp==0);

}
