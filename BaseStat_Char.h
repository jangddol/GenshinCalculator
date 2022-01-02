#pragma once

#ifndef BaseStat_Char
#define BaseStat_Char

#include <iostream>
#include <string>

using namespace std;


double LvMultiplier_BaseStat_5star(int Level);

double LvMultiplier_BaseStat_4star(int Level);

double LvMultiplier_BaseStat(int Level, int Star);

double BaseStat_foreach_Level_without_Ascension(int BaseStat90_without_Ascension, int Level, int Star);

double BaseStat_AscensionValue(int Ascension_Phase, double Full_Ascension_Stat);

int HowMuchAscension(string Level_String);

int BaseStat_foreach_Level(double BaseStat90, double BaseStat90_Ascension, string Level_String, int Star);

#endif
