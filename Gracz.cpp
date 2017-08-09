#include "Gracz.h"
#include <iostream>
#include <string>
Gracz::Gracz()
{
}// konstruktor domyslny

Gracz::Gracz(string nameTemp)
{
	this->pkt=0;
	this->name=nameTemp;
}//konstruktor uwzgledniajacy podanie nazwy gracza

Gracz::~Gracz()
{
}//dekonstruktor

string Gracz::getName()
{
	return this->name;
}//GET NAME f-cja zwracajaca nazwe gracza

int Gracz::getPkt()
{
	return this->pkt;
}//GET PKT f-cja zwracajaca punkty gracza

void Gracz::addPkt()
{
	this->pkt=this->pkt+1;
}//f-cja zwiekszajaca liczy pkt gracza po wygranej

void Gracz::wyswietl()
{
	cout<<"		"<< this->name<<"  ------>  "<< this->pkt<<endl;
}//f-cja wyswietlajaca nazwe gracza oraz ilosc pkt
