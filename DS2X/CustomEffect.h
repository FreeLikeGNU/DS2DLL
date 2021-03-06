#pragma once

#include "Enums.h"
#include "Goid.h"
#include "GPBString.h"

struct CustomEffect {
	DefineStaticMethod(FUBI_PodGetSize, 0x449f9b, unsigned int, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetbActive, 0x449fab, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetbInWorld, 0x449fc1, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetbMeleeDamage, 0x449fc5, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetbMeleeDamageOnly, 0x449fdd, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetbRangedDamage, 0x449fc9, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetbRangedDamageOnly, 0x449fe1, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetEffectSkrit, 0x44d628, gpbstring<char>, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetEffectType, 0x44d63e, gpbstring<char>, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetStateName, 0x44d615, gpbstring<char>, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetItem, 0x449fa7, const Goid_*, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetSource, 0x449f9f, const Goid_*, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetTarget, 0x449fa3, const Goid_*, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetDamageType, 0x449fd9, eDamageType, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetDamageChance, 0x449fcd, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetDamageMax, 0x449fd5, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetDamageMin, 0x449fd1, float, NO_PARAMS, NO_ARGS);

	// 0x00
	gpbstring<char> stateName;
	// 0x04
	gpbstring<char> effectSkrit;
	// 0x08
	gpbstring<char> effectType;
	// 0x0c
	Goid_* source;
	// 0x10
	Goid_* target;
	// 0x14
	Goid_* item;
	// 0x18
	bool bActive;
	// 0x19
	bool bInWorld;
	// 0x1a
	bool bMeleeDamage;
	// 0x1b
	bool bRangedDamage;
	// 0x1c
	float damageChange;
	// 0x20
	float damageMin;
	// 0x24
	float damageMax;
	// 0x28
	eDamageType damageType;
	// 0x2c
	bool bMeleeDamageOnly;
	// 0x2d
	bool bRangedDamageOnly;
};

STATIC_ASSERT_SIZEOF(CustomEffect, 0x30);
STATIC_ASSERT_OFFSETOF(CustomEffect, effectType, 0x08);
STATIC_ASSERT_OFFSETOF(CustomEffect, bActive, 0x18);
STATIC_ASSERT_OFFSETOF(CustomEffect, damageMin, 0x20);
STATIC_ASSERT_OFFSETOF(CustomEffect, bRangedDamageOnly, 0x2d);
