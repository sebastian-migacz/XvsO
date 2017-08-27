#ifndef GRACZ_H
#define GRACZ_H
#include <string>
using namespace std;

class Gracz
{
	public:
		Gracz();
		Gracz(string nameTemp, bool isBotTemp);
		~Gracz();
		void addPkt();
		void wyswietl();
		string getName();
		int getPkt();
		bool getIsBot();
		
	protected:
		int pkt;
		bool isBot;
		string name;
};

#endif
