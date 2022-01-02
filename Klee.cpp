#include <iostream>
#include <vector>
#include <cmath>
#include <array>
#include <cassert>

#include "Character.h"

using namespace std;

class Klee : public Character 
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
	Klee();
};

Klee::Klee() {
}


double Klee::SpecFunction(Stat stat, int MobLevel) 
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