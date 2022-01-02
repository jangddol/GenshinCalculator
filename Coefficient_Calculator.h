#pragma once

#ifndef CoefCal
#define CoefCal

#include <iostream>

using namespace std;


double Coef_Resist(const double Resist);

double Coef_Amping(const double EleMast, const double AmpBonus);

double Coef_Level_Transfor(const int Level);

double Coef_EleMast_Transfor(const double EleMast, const double TransforBonus);

double Coef_Def(const double Defcut, const int CharLevel, const int MobLevel);

double Coef_Level(const int CharLevel, const int MobLevel);

#endif
