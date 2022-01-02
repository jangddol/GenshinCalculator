#include <iostream>
#include <cmath>
#include <cassert>

using namespace std;


double Coef_Resist(const double Resist)
{
	double Answer;

	if (Resist > 75){
		Answer = 1 / (1 + Resist / 25);
	}
	else if (Resist < 0){
		Answer = 1 - Resist / 200;
	}
	else{
		Answer = 1 - Resist / 100;
	}
	return Answer;
}


double Coef_Amping(const double EleMast, const double AmpBonus)
{
	double Answer;
	double AmpMultiplier = 2.78 * EleMast / (EleMast + 1400);
	Answer = 1 + AmpMultiplier + AmpBonus / 100;
	return Answer;
}


double Coef_Level_Transfor(const int Level)
{
	assert(Level <= 90);

	double Answer;
	if (Level < 60){
		Answer= 0.0002325 * Level * Level * Level + 0.05547 * Level * Level - 0.2523 * Level + 14.47;
	}
	else{
		Answer = 0.00194 * Level * Level * Level - 0.319 * Level * Level + 30.7 * Level - 868;
	}
	return Answer;
}


double Coef_EleMast_Transfor(const double EleMast, const double TransforBonus)
{
	double Answer;
	double TransforMultiplier = 16 * EleMast / (EleMast + 2000);
	Answer = 1 + TransforMultiplier + TransforBonus / 100;
	return Answer;
}


double Coef_Def(const double Defcut, const int CharLevel, const int MobLevel)
{
	assert(CharLevel > 0 && CharLevel <= 90);
	assert(MobLevel > 0 && MobLevel <= 100);
	
	double Answer;
	Answer = (CharLevel + MobLevel + 200) / (CharLevel + 100 + (MobLevel + 100) * (1 - Defcut / 100));
	return Answer;
}


double Coef_Level(const int CharLevel, const int MobLevel)
{
	assert(CharLevel > 0 && CharLevel <= 90);
	assert(MobLevel > 0 && MobLevel <= 100);

	double Answer;
	Answer = (CharLevel + 100) / (CharLevel + MobLevel + 200);
	return Answer;
}



