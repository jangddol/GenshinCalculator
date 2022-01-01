#include <iostream>
#include <cassert>
#include <vector>
#include <string>

#include "BaseStat_Char.h"


using namespace std;


struct Stat{
	public:
		double Critical_Rate_;
		double Critical_Damage_;
		double Attack_Per_;
		double Attack_Flat_;
		double Energy_Charge_;
		double HP_Per_;
		double HP_Flat_;
		double Elemental_Mastery_;
		double DEF_Per_;
		double DEF_Flat_;
		double Elemental_Bonus_;
		double Physical_Bonus_;
		double normalattack_Bonus_;
		double strongattack_Bonus_;
		double flunge_Bonus_;
		double E_Bonus_;
		double Q_Bonus_;
		double normalattack_plusDMG_;
		double strongattack_plusDMG_;
		double flunge_plusDMG_;
		double E_plusDMG_;
		double Q_plusDMG_;
		int CharLevel_;
		double Resist_Cut_;
		double Fire_Bonus;
		double Ice_Bonus;
		double Geo_Bonus;
		double Wind_Bonus;
		double Water_Bonus;
		double Electro_Bonus;
		double Grass_Bonus;
		double Heal_Bonus;
		double Heal_Flat_;
};


class ICharacter{
	private:
		int Star_;
		string Elemant_;
		double BaseATK_;
		double BaseDEF_;
		double BaseHP_;
	protected:
		string CharLevel_ = "90";
		Stat BaseStat90;
		Stat AscensionStat90;
		Stat BaseStat;
		double returnSpecFunction(Stat stat);
	public:
		ICharacter();
};


ICharacter::ICharacter(){
}


class Klee : public ICharacter{
};

