#pragma once

#ifndef Talent
#define Talent

#include <iostream>
#include <vector>
#include <string>
#include <cassert>
#include <array>

using namespace std;

class ITalentCoefficient {
public:
	array<double, 15> mTalentCoefficient;
};

class Physical_1_TalentCoefficient : public ITalentCoefficient {
public:
	Physical_1_TalentCoefficient();
};

class Physical_1_Alternative_TalentCoefficient : public ITalentCoefficient {
public:
	Physical_1_Alternative_TalentCoefficient();
};

class Physical_2_TalentCoefficient : public ITalentCoefficient {
public:
	Physical_2_TalentCoefficient();
};

class Elemental_1_TalentCoefficient : public ITalentCoefficient {
public:
	Elemental_1_TalentCoefficient();
};

class Elemental_1_Alternative_TalentCoefficient : public ITalentCoefficient {
public:
	Elemental_1_Alternative_TalentCoefficient();
};

class Elemental_2_TalentCoefficient : public ITalentCoefficient {
public:
	Elemental_2_TalentCoefficient();
};

double getTalentCoefficient(int talentLevel, string talenttype);

#endif