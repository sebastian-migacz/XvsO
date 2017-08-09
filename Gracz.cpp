#include "Gracz.h"
#include <iostream>
#include <string>
Gracz::Gracz()
{
}

Gracz::Gracz(string nameTemp)
{
	this->pkt=0;
	this->name=nameTemp;
}

Gracz::~Gracz()
{
}

string Gracz::getName()
{
	return this->name;
}

int Gracz::getPkt()
{
	return this->pkt;
}

void Gracz::addPkt()
{
	this->pkt=this->pkt+1;
}

void Gracz::wyswietl()
{
	cout<<"		"<< this->name<<"  ------>  "<< this->pkt<<endl;
}
