#ifndef PLANSZA_H
#define PLANSZA_H

class Plansza
{
   
public:
	
	void czyscPlansze(int tab[3][3]);
	void zaznaczPole(int tab[3][3], int var);
	void zaznaczPoleSI(int tab[3][3], int var);
	char ustalZnak(int zn);
	void rysujPlansze(int tab[3][3]);
};


#endif
