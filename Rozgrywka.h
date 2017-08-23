#ifndef ROZGRYWKA_H
#define ROZGRYWKA_H
#include "Gracz.h"

class Rozgrywka
{
	public:
		void gra();
		void runda(Gracz *player1, Gracz *player2);
		bool sprawdzWygrana(int tab[3][3], Gracz *player);
	protected:
		
};

#endif
