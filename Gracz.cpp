#include "Gracz.h"
#include <iostream>
#include <string>
Gracz::Gracz()
{
}// konstruktor domyslny

Gracz::Gracz(string nameTemp, bool isBotTemp)
{
	this->pkt=0;
	if(isBotTemp==0)
		{
			this->name=nameTemp;
			this->isBot=0;
		}
	else
		{
			this->name="Bot";
			this->isBot=1;		
		}
}//konstruktor uwzgledniajacy podanie nazwy gracza


Gracz::~Gracz()
{
}//dekonstruktor

string Gracz::getName()
{
	return this->name;
}//GET NAME f-cja zwracajaca nazwe gracza

bool Gracz::getIsBot()
{
	return this->isBot;
}//GET isBot f-cja zwracajaca zmienna isBot do okreslania czy to gracz czy cpu

int Gracz::getPkt()
{
	return this->pkt;
}//GET PKT f-cja zwracajaca punkty gracza

void Gracz::addPkt()
{
	pkt=pkt+1;
}//f-cja zwiekszajaca liczy pkt gracza po wygranej

void Gracz::wyswietl()
{
	cout<<"		"<< this->name<<"  ------>  "<< pkt<<endl;
}//f-cja wyswietlajaca nazwe gracza oraz ilosc pkt
