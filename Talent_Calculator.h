#pragma once

#ifndef Talent
#define Talent

#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

class ITalentCoefficient;

class Physical_1_TalentCoefficient : public ITalentCoefficient;

Physical_1_TalentCoefficient::Physical_1_TalentCoefficient();

class Physical_1_Alternative_TalentCoefficient : public ITalentCoefficient;

class Physical_2_TalentCoefficient : public ITalentCoefficient;

class Elemental_1_TalentCoefficient : public ITalentCoefficient;

class Elemental_1_Alternative_TalentCoefficient : public ITalentCoefficient;

class Elemental_2_TalentCoefficient : public ITalentCoefficient;

double getTalentCoefficient(int talentLevel, string talenttype);

#endif