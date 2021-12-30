#pragma once

#ifndef CoefCal
#define CoefCal

#include <iostream>

using namespace std;


double Coef_Resist(double Resist);

double Coef_Amping(double EleMast, double AmpBonus);

double Coef_Level_Transfor(int Level);

double Coef_EleMast_Tranfor(double EleMast, double TransforBonus);

double Coef_Def(double Defcut, int CharLevel, int MobLevel);

double Coef_Level(int CharLevel, int MobLevel);

#endif
