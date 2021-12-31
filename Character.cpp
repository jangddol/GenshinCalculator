#include <iostream>
#include <cassert>
#include <vector>
#include <string>

#include "BaseStat_Char.h"


using namespace std;


class Stat{
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
};


class Character{
	private:
		int Star_;
		string Elemant_;
		double BaseATK_;
		double BaseDEF_;
		double BaseHP_;
	protected:
		string CharLevel_ = "90";
		double BaseATK90_ = 0;
		double BaseDEF90_ = 0;
		double BaseHP90_ = 0;
		double AscensionATK90_ = 0;
		double AscensionDEF90_ = 0;
		double AscensionHP90_ = 0;
		double SpecFunction(Stat stat);
	public:
		Character();
};


Character::Character(){
	BaseATK_ = BaseStat_Char::BaseStat_foreach_Level(BaseATK90_, AscensionATK90_, CharLevel_, Star_);
	BaseDEF_ = BaseStat_Char::BaseStat_foreach_Level(BaseDEF90_, AscensionDEF90_, CharLevel_, Star_);
	BaseHP_ = BaseStat_Char::BaseStat_foreach_Level(BaseHP90_, AscensionHP90_, CharLevel_, Star_);
}


class Klee : public Character{
	private:
		double BaseATK;
		double BaseDEF;
		double BaseHP;
	protected:
		double CharLevel;
		double BaseATK90;
		double BAseHP90;
		double AscensionATK90;
		double AscentionDEF90;
		double AscensionHP90;
		double SpecFunction(Stat stat);
};

