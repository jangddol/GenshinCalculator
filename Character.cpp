#include <iostream>
#include <cassert>
#include <vector>
#include <string>

#include "BaseStat_Char.h"
#include "Coefficient_Calculator.h"


using namespace std;


class Stat
{
public:
	double Critical_Rate;
	double Critical_Damage;
	double Attack_Per;
	double Attack_Flat;
	double Energy_Charge;
	double HP_Per;
	double HP_Flat;
	double Elemental_Mastery;
	double DEF_Per;
	double DEF_Flat;
	double Fire_Bonus;
	double Water_Bonus;
	double Ice_Bonus;
	double Electro_Bonus;
	double Grass_Bonus;
	double Geo_Bonus;
	double Wind_Bonus;
	double Physical_Bonus;
	double normalattack_Bonus;
	double strongattack_Bonus;
	double flunge_Bonus;
	double E_Bonus;
	double Q_Bonus;
	double normalattack_plusDMG;
	double strongattack_plusDMG;
	double flunge_plusDMG;
	double E_plusDMG;
	double Q_plusDMG;
	int CharLevel;
	double Resist_Cut;
};


class Character
{
private:
	int mStar;
	string mElemant;
	string mCharLevel = "90";
	Stat mBaseStat;
	Stat mBaseStat90;
	Stat mAscensionATK90;
	double SpecFunction(Stat stat, int MobLevel);
public:
	Character();
};


Character::Character()
{
}


double Character::SpecFunction(Stat stat, int MobLevel)
{
	double totalATK;
	double totalATKPer;
	double totalplusATKFlat;
	totalATKPer = this->mBaseStat.Attack_Per;
	totalplusATKFlat = this->mBaseStat.Attack_Flat;
	totalATK = this->mBaseStat.Attack_Flat * totalATKPer + totalplusATKFlat;
	int CharLevel = this->mBaseStat.CharLevel;

	double totalBonus;
	totalBonus = 1;
	double totalCR;
	totalCR = this->mBaseStat.Critical_Rate;
	double totalCD;
	totalCD = this->mBaseStat.Critical_Damage;
	double Defcut;
	Defcut = 0;
	double DefCoef;
	DefCoef = CoefCal::Coef_Def(Defcut, CharLevel, MobLevel);
	double LevelCoef;
	LevelCoef = CoefCal::Coef_Level(CharLevel, MobLevel);
	double Resist;
	Resist = 0;
	double ResCoef;
	ResCoef = CoefCal::Coef_Resist(Resist);

	double answer;
	answer = totalATK * totalBonus * (1 + totalCR * totalCD / 10000) * DefCoef * LevelCoef * ResCoef;
}