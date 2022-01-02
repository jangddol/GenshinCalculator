#pragma once

#ifndef Character
#define Character

#include <iostream>
#include <cassert>
#include <vector>
#include <string>

#include "BaseStat_Char.h"
#include "Coefficient_Calculator.h"


using namespace std;


class Stat {
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


class Character {
private:
	int mStar;
	string mElemant;
	string mCharLevel;
	Stat mBaseStat;
	Stat mBaseStat90;
	Stat mAscensionATK90;
	double SpecFunction(Stat stat, int MobLevel);
};

#endif