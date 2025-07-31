

#pragma once

#define Il2cpp "libil2cpp.so"

bool isHealth;

uintptr_t get_grenadesCount,get_aidKitCount;

//
#define critRate Il2CppGetFieldOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("DProject"), OBFUSCATE("DSystem") , OBFUSCATE("critRate"))

void (*AddCoin)(void *instance, int count);
bool isCoin;
void (*old_UpdateMoney)(void *instance);
      void UpdateMoney(void *instance){
        if (instance != NULL){
         if (isCoin){
          AddCoin(instance, 10000);
          }
     }
     return old_UpdateMoney(instance);
}

void (*AddGem)(void *instance, int count);
bool isGem;
void (*old_UpdateMoney1)(void *instance);
      void UpdateMoney1(void *instance){
        if (instance != NULL){
         if (isCoin){
          AddGem(instance, 1000);
          }
     }
     return old_UpdateMoney1(instance);
}

bool IsHealth;
int (*_RoleGetHealth)(void *Jek);
int RoleGetHealth(void *Jek) {
    if (Jek !=nullptr) {
        if (IsHealth) {
        return 9999;
        }
    }
    return _RoleGetHealth(Jek);
}

bool IsArmor;
int (*_RoleArmor)(void *Jek);
int RoleArmor(void *Jek) {
    if (Jek !=nullptr) {
        if (IsArmor) {
        return 9999;
        }
    }
    return _RoleArmor(Jek);
}

bool isEnergy;
int (*_RoleEnergy)(void *Jek);
int RoleEnergy(void *Jek) {
    if (Jek != nullptr) {
        if (isEnergy) {
        return 9999;
        }
    }
    return _RoleEnergy(Jek);
}

bool isSkillNoCd;
float (*_RoleSkillCd)(void *Jek);
float RoleSkillCd(void *Jek) {
    if (Jek != nullptr) {
        if (isSkillNoCd) {
        return 0.001;
        }
    }
    return _RoleSkillCd(Jek);
}

bool IsSkillReady;
bool (*_RoleSkillReady)(void *Jek);
bool RoleSkillReady(void *Jek) {
    if (Jek != nullptr) {
        if (isSkillNoCd) {
        return true;
        }
    }
    return _RoleSkillReady(Jek);
}

bool IsCritical;
int (*_RoleGetCritical)(void *Jek);
int RoleGetCritical(void *Jek) {
    if (Jek != nullptr ) {
        if (IsCritical) {
        return 99999;
        }
    }
    return _RoleGetCritical(Jek);
}

float isAtkSpeed = 1;
float (*_RoleGetAtkSpeed)(void *Jek);
float RoleGetAtkSpeed(void *Jek) {
    if (Jek !=nullptr ) {
        if (isAtkSpeed) {
        return isAtkSpeed;
        }
    }
    return _RoleGetAtkSpeed(Jek);
}

float isSpeed = 1;
float (*_RoleGetSpeed)(void *Jek);
float RoleGetSpeed(void *Jek) {
    if (Jek !=nullptr ) {
        if (isSpeed) {
        return isSpeed;
        }
    }
    return _RoleGetSpeed(Jek);
}

bool isImmune;
bool (*_ImmuneAllDebuff)(void *Jek);
bool ImmuneAllDebuff(void *Jek) {
    if (Jek !=nullptr) {
        if (isImmune) {
        return true;
        }
    }
    return _ImmuneAllDebuff(Jek);
}

bool isLevel;
int (*_HeroLevel)(void *Jek);
int HeroLevel(void *Jek) {
    if (Jek !=nullptr) {
        if (isLevel) {
        return 99;
        }
    }
    return _HeroLevel(Jek);
}

float isBulletSize = 1;
float (*_BulletSize)(void *Jek);
float BulletSize(void *Jek) {
    if (Jek !=nullptr) {
        if (isBulletSize) {
        return isBulletSize;
        }
    }
    return _BulletSize(Jek);
}

bool IsAttrMod;
int WpDmg,WpRepel = 1;
float WpSpeed,WpBulletSize = 1;
//Void UpdateAttribute(GameObject source_object, Int32 damage, Single the_speed, Boolean can_through, Int32 repel, Int32 camp, Single bulletSize)
void (*_UpdateAttribute)(void *Jek, void *object, int Dmg, float Speed, bool through, int repel, int camp, float bulletSize);
void UpdateAttribute(void *Jek, void *object, int Dmg, float Speed, bool through, int repel, int camp, float bulletSize) {
    if (Jek !=nullptr) {
        if (IsAttrMod) {
        return _UpdateAttribute(Jek, object, WpDmg, WpSpeed, through, WpRepel, camp, WpBulletSize);
        }
    }
    return _UpdateAttribute(Jek, object, Dmg, Speed, through, repel, camp, bulletSize);
}

#define _scaleFactor Il2CppGetFieldOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("BezierShortLaser") , OBFUSCATE("_scaleFactor"))
#define scaleFactor Il2CppGetFieldOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("BezierShortLaser") , OBFUSCATE("scaleFactor"))
#define customScaleFactor Il2CppGetFieldOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("BezierShortLaser") , OBFUSCATE("customScaleFactor"))
#define pointRange Il2CppGetFieldOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("BezierShortLaser") , OBFUSCATE("pointRange"))
bool isLeserScale;
void (*_UpdateBuffLeser)(void *Jek);
void UpdateBuffLeser(void *Jek) {
    if (Jek !=nullptr) {
        if (isLeserScale) {
        *(float *)((uint64_t)Jek + _scaleFactor) = isBulletSize;
        *(float *)((uint64_t)Jek + scaleFactor) = isBulletSize;
        *(float *)((uint64_t)Jek + customScaleFactor) = isBulletSize;
        *(float *)((uint64_t)Jek + pointRange) = 200;
        }
    }
    return _UpdateBuffLeser(Jek);
}

#define interval Il2CppGetFieldOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("ArrowRest") , OBFUSCATE("interval"))
#define rot_speed Il2CppGetFieldOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("ArrowRest") , OBFUSCATE("rot_speed"))
#define bullet_speed Il2CppGetFieldOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("ArrowRest") , OBFUSCATE("bullet_speed"))
#define atk Il2CppGetFieldOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("ArrowRest") , OBFUSCATE("atk"))
#define repel Il2CppGetFieldOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("ArrowRest") , OBFUSCATE("repel"))
#define run_time Il2CppGetFieldOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("ArrowRest") , OBFUSCATE("run_time"))
bool isBowBullet;
void (*_UpdateBoeBullet)(void *Jek);
void UpdateBoeBullet(void *Jek) {
    if (Jek !=nullptr) {
        if (isBowBullet) {
        *(float *)((uint64_t)Jek + interval) = 0.01;
        *(float *)((uint64_t)Jek + rot_speed) = 20;
        *(float *)((uint64_t)Jek + bullet_speed) = 20;
        *(int *)((uint64_t)Jek + atk) = 9999;
        *(int *)((uint64_t)Jek + run_time) = 0.01;
        }
    }
    return _UpdateBoeBullet(Jek);
}

float isRadius = 1;
float (*_AreaEffecRadius)(void *Jek);
float AreaEffecRadius(void *Jek) {
    if (Jek !=nullptr) {
        if (isRadius) {
        return isRadius;
        }
    }
    return _AreaEffecRadius(Jek);
}


#define _radiusFactor Il2CppGetFieldOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("BulletGas") , OBFUSCATE("_radiusFactor"))
#define damage_radius Il2CppGetFieldOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("BulletGas") , OBFUSCATE("damage_radius"))
#define damage Il2CppGetFieldOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("BulletGas") , OBFUSCATE("damage"))
#define hit_player Il2CppGetFieldOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("BulletGas") , OBFUSCATE("hit_player"))
#define hit_enemy Il2CppGetFieldOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("BulletGas") , OBFUSCATE("hit_enemy"))
#define duration Il2CppGetFieldOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("BulletGas") , OBFUSCATE("duration"))
#define _duration Il2CppGetFieldOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("BulletGas") , OBFUSCATE("_duration"))
bool IsGasBulletModif;
void (*_BulletGasModif)(void *Jek);
void BulletGasModif(void *Jek) {
    if (Jek !=nullptr) {
        if (IsGasBulletModif) {
        *(float *)((uint64_t)Jek + _radiusFactor) = 500;
        *(float *)((uint64_t)Jek + damage_radius) = 500;
        *(float *)((uint64_t)Jek + duration) = 5000;
        *(float *)((uint64_t)Jek + _duration) = 5000;
        *(int *)((uint64_t)Jek + damage) = 20000;
        *(bool *)((uint64_t)Jek + hit_player) = false;
        *(bool *)((uint64_t)Jek + hit_enemy) = true;
        }
    }
    return _BulletGasModif(Jek);
}

//#define RGHandAbility Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("RGController") , OBFUSCATE("get_HandAbility"), 0)
#define Handdamage Il2CppGetFieldOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("HandAbilityInfo") , OBFUSCATE("damage"))
#define Handspeed Il2CppGetFieldOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("HandAbilityInfo") , OBFUSCATE("speed"))
#define Handscale Il2CppGetFieldOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("HandAbilityInfo") , OBFUSCATE("scale"))
#define Handcooldown Il2CppGetFieldOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("HandAbilityInfo") , OBFUSCATE("cooldown"))

void *(*RGHandAbility)(void *Hand);
bool IsTestValue;
void (*_UpdateRGController)(void *Jek);
void UpdateRGController(void *Jek) {
    if (Jek !=nullptr) {
    void *HandAbility = RGHandAbility(Jek);
        if (HandAbility) {
            if (IsTestValue) {
            *(int *)((uint64_t)HandAbility + Handdamage) = 20000;
            *(float *)((uint64_t)HandAbility + Handspeed) = 50;
            *(float *)((uint64_t)HandAbility + Handscale) = 50;
            *(float *)((uint64_t)HandAbility + Handcooldown) = 0.001;
            }
        }
    }
    return _UpdateRGController(Jek);
}

bool isModifArtifac;
float (*_ModifValueArtifacFloat)(void *Jek);
float ModifValueArtifacFloat(void *Jek) {
    if (Jek !=nullptr) {
        if (isModifArtifac) {
        return 999;
        }
    }
    return _ModifValueArtifacFloat(Jek);
}

int (*_ModifValueArtifacInt)(void *Jek);
int ModifValueArtifacInt(void *Jek) {
    if (Jek !=nullptr) {
        if (isModifArtifac) {
        return 999;
        }
    }
    return _ModifValueArtifacInt(Jek);
}
float (*_ModifValueArtifacFloat1)(void *Jek);
float ModifValueArtifacFloat1(void *Jek) {
    if (Jek !=nullptr) {
        if (isModifArtifac) {
        return 200;
        }
    }
    return _ModifValueArtifacFloat1(Jek);
}

void (*FinishGame)(void *Jek, bool Finish);
void (*OnBattleEnd)(void *Jek, bool End);
bool IsAutoWin,IsBattleEnd;
void (*_AutoWin)(void *Jek);
void AutoWin(void *Jek) {
    if (Jek !=nullptr) {
        if (IsAutoWin) {
        FinishGame(Jek, true);
        }
        if (IsBattleEnd) {
        OnBattleEnd(Jek, true);
        }
    }
    return _AutoWin(Jek);
}

int (*_GetFish)();
int GetFish() {
    return 9999;
}

bool (*_NoCost)();
bool NoCost() {
    return false;
}

bool (*_UnlockAll)();
bool UnlockAll() {
    return true;
}

int (*_FreeBuy)();
int FreeBuy() {
    return 0;
}

void UnlockSkinHero() {
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("RGScript.Data"), OBFUSCATE("CPPlayerItemData") , OBFUSCATE("GetActivityEventUnlock"), 1), (void *) UnlockAll, (void **) &_UnlockAll);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("RGScript.Data"), OBFUSCATE("CPPlayerItemData") , OBFUSCATE("GetItemUnlock"), 1), (void *) UnlockAll, (void **) &_UnlockAll);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("RGScript.Data"), OBFUSCATE("CPPlayerItemData") , OBFUSCATE("GetHeroUnlock"), 1), (void *) UnlockAll, (void **) &_UnlockAll);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("RGScript.Data"), OBFUSCATE("CPPlayerItemData") , OBFUSCATE("GetHeroSkinUnlock"), 2), (void *) UnlockAll, (void **) &_UnlockAll);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("RGScript.Data"), OBFUSCATE("CPPlayerItemData") , OBFUSCATE("GetHeroSkillUnlock"), 2), (void *) UnlockAll, (void **) &_UnlockAll);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("RGScript.Data"), OBFUSCATE("CPPlayerItemData") , OBFUSCATE("GetPetUnlock"), 1), (void *) UnlockAll, (void **) &_UnlockAll);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("RGScript.Data"), OBFUSCATE("CPPlayerItemData") , OBFUSCATE("GetRoomSkinUnlock"), 2), (void *) UnlockAll, (void **) &_UnlockAll);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("RGSaveManager") , OBFUSCATE("UnlockAllHero"), 0), (void *) UnlockAll, (void **) &_UnlockAll);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("RGSaveManager") , OBFUSCATE("GetSkillUnlock"), 2), (void *) UnlockAll, (void **) &_UnlockAll);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("RGScript.Data"), OBFUSCATE("CGMountData") , OBFUSCATE("IsUnlocked"), 0), (void *) UnlockAll, (void **) &_UnlockAll);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("RGScript.Data"), OBFUSCATE("CGMountData") , OBFUSCATE("IsMaxLevel"), 0), (void *) UnlockAll, (void **) &_UnlockAll);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("RGScript.Data"), OBFUSCATE("WeaponInfo") , OBFUSCATE("WeaponUnlock"), 1), (void *) UnlockAll, (void **) &_UnlockAll);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("RGScript.Data"), OBFUSCATE("WeaponInfo") , OBFUSCATE("IsMythicWeaponUnlock"), 1), (void *) UnlockAll, (void **) &_UnlockAll);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("RGScript.Data"), OBFUSCATE("StatisticData") , OBFUSCATE("UnlockHandSwordAc"), 0), (void *) UnlockAll, (void **) &_UnlockAll);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("RGScript.Data"), OBFUSCATE("StatisticData") , OBFUSCATE("UnlockHandSwordAc1"), 0), (void *) UnlockAll, (void **) &_UnlockAll);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("RGScript.Data"), OBFUSCATE("StatisticData") , OBFUSCATE("UnlockHandSwordAc2"), 0), (void *) UnlockAll, (void **) &_UnlockAll);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("RGScript.Data"), OBFUSCATE("StatisticData") , OBFUSCATE("UnlockHandSwordAc3"), 0), (void *) UnlockAll, (void **) &_UnlockAll);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("RoomItemUnlockThroughBattle") , OBFUSCATE("GetUnlock"), 1), (void *) UnlockAll, (void **) &_UnlockAll);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("WeaponCollectorManager") , OBFUSCATE("IsCollectorUpRate"), 1), (void *) UnlockAll, (void **) &_UnlockAll);
    
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("RGScript.Data"), OBFUSCATE("HandbookWeaponData") , OBFUSCATE("IsUnlocked"), 1), (void *) UnlockAll, (void **) &_UnlockAll);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("RGScript.Data"), OBFUSCATE("HeroDrawingsData") , OBFUSCATE("IsHeroSkinHasDrawing"), 2), (void *) UnlockAll, (void **) &_UnlockAll);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("RGScript.Data.Mall"), OBFUSCATE("MallData") , OBFUSCATE("get_IsUnlock"), 0), (void *) UnlockAll, (void **) &_UnlockAll);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("RGScript.Data.Mall"), OBFUSCATE("MallData") , OBFUSCATE("HasEnoughCurrency"), 1), (void *) UnlockAll, (void **) &_UnlockAll);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("RGScript.Data.Mall"), OBFUSCATE("MallItem_HeroSkill") , OBFUSCATE("HasOwnItem"), 0), (void *) UnlockAll, (void **) &_UnlockAll);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("RGScript.Data.Mall"), OBFUSCATE("MallItem_HeroSkin") , OBFUSCATE("HasOwnItem"), 0), (void *) UnlockAll, (void **) &_UnlockAll);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("RGScript.Data.Mall"), OBFUSCATE("MallUtility") , OBFUSCATE("HasOwnItem"), 1), (void *) UnlockAll, (void **) &_UnlockAll);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("RGScript.Data.Mall"), OBFUSCATE("MallUtility") , OBFUSCATE("HasUnlockSeasonMode"), 0), (void *) UnlockAll, (void **) &_UnlockAll);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("RGScript.Data.GameItemData"), OBFUSCATE("ItemUtility") , OBFUSCATE("IsLimitedOwnedItemType"), 1), (void *) UnlockAll, (void **) &_UnlockAll);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("RGScript.Data.GameItemData"), OBFUSCATE("ItemUtility") , OBFUSCATE("HasOwnItem"), 1), (void *) UnlockAll, (void **) &_UnlockAll);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("RGScript.Config.Manager"), OBFUSCATE("PetsLevelUpConfigManager") , OBFUSCATE("IsSkillUnlocked"), 2), (void *) UnlockAll, (void **) &_UnlockAll);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("MythicWeaponData") , OBFUSCATE("get_IsUnlock"), 0), (void *) UnlockAll, (void **) &_UnlockAll);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("MythicWeaponData") , OBFUSCATE("get_IsPerfect"), 0), (void *) UnlockAll, (void **) &_UnlockAll);
    
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("RGScript.Data.Mall"), OBFUSCATE("MallData") , OBFUSCATE("HasEnoughCurrency"), 1), (void *) UnlockAll, (void **) &_UnlockAll);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("RGScript.Item.Pickable"), OBFUSCATE("ItemWeaponFragment") , OBFUSCATE("TryUnlockBlueprint"), 1), (void *) UnlockAll, (void **) &_UnlockAll);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("ItemData") , OBFUSCATE("IsMechaBlueprintUnlock"), 1), (void *) UnlockAll, (void **) &_UnlockAll);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("ItemData") , OBFUSCATE("HasEnough"), 1), (void *) UnlockAll, (void **) &_UnlockAll);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("ItemData") , OBFUSCATE("HasEnough"), 2), (void *) UnlockAll, (void **) &_UnlockAll);
    
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("DataUtil") , OBFUSCATE("HasBluePrint"), 1), (void *) UnlockAll, (void **) &_UnlockAll);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("DataUtil") , OBFUSCATE("GetSkinSeriesUnlock"), 4), (void *) UnlockAll, (void **) &_UnlockAll);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("DataUtil") , OBFUSCATE("GetSkinListUnlock"), 4), (void *) UnlockAll, (void **) &_UnlockAll);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("DataUtil") , OBFUSCATE("GetHeroLevel"), 1), (void *) HeroLevel, (void **) &_HeroLevel);
    //Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("RGScript.WeaponAffix"), OBFUSCATE("WeaponAffixBase") , OBFUSCATE("get_Level"), 0), (void *) HeroLevel, (void **) &_HeroLevel);
    
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("ProductInfo") , OBFUSCATE("get_price"), 0), (void *) FreeBuy, (void **) &_FreeBuy);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("RGSaveManager") , OBFUSCATE("GetConsumeGem"), 0), (void *) FreeBuy, (void **) &_FreeBuy);
    
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("ItemData") , OBFUSCATE("get_fishCount"), 0), (void *) GetFish, (void **) &_GetFish);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("ItemData") , OBFUSCATE("get_jewelryFragments"), 0), (void *) GetFish, (void **) &_GetFish);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("ItemData") , OBFUSCATE("GetMaterialCount"), 1), (void *) GetFish, (void **) &_GetFish);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("ItemData") , OBFUSCATE("GetSeedCount"), 1), (void *) GetFish, (void **) &_GetFish);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("ItemData") , OBFUSCATE("GetTokenTicketCount"), 1), (void *) GetFish, (void **) &_GetFish);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("ItemData") , OBFUSCATE("GetSpecialTicket"), 1), (void *) GetFish, (void **) &_GetFish);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("RGScript.Data"), OBFUSCATE("LuckInfo") , OBFUSCATE("get_LuckLevel"), 0), (void *) GetFish, (void **) &_GetFish);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("RGScript.Item.Pickable"), OBFUSCATE("ItemFragment") , OBFUSCATE("get_MaxCount"), 0), (void *) GetFish, (void **) &_GetFish);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("PickableInfo") , OBFUSCATE("GetCount"), 0), (void *) GetFish, (void **) &_GetFish);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("ItemPickable") , OBFUSCATE("GetItemValue"), 0), (void *) GetFish, (void **) &_GetFish);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("RGChest") , OBFUSCATE("GetItemValue"), 0), (void *) GetFish, (void **) &_GetFish);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("RGContainer") , OBFUSCATE("GetItemValue"), 0), (void *) GetFish, (void **) &_GetFish);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("RGItem") , OBFUSCATE("GetItemValue"), 0), (void *) GetFish, (void **) &_GetFish);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("RGScript.Mode.ModeMapLevelController"), OBFUSCATE("ModeLoopTravelController") , OBFUSCATE("GetCurCrystalCount"), 0), (void *) GetFish, (void **) &_GetFish);
    
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("RGSaveManager") , OBFUSCATE("ConsumeGem"), 2), (void *) NoCost, (void **) &_NoCost);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("RGScript.Data"), OBFUSCATE("UnlockConditionData") , OBFUSCATE("ShouldLockByConfig"), 1), (void *) NoCost, (void **) &_NoCost);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("RGScript.Data"), OBFUSCATE("UnlockConditionData") , OBFUSCATE("IsHeroLockedByConfig"), 1), (void *) NoCost, (void **) &_NoCost);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("RGScript.Data"), OBFUSCATE("UnlockConditionData") , OBFUSCATE("IsHeroSkinLockedByConfig"), 2), (void *) NoCost, (void **) &_NoCost);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("RGScript.Data"), OBFUSCATE("UnlockConditionData") , OBFUSCATE("IsEmBuffLockedByConfig"), 1), (void *) NoCost, (void **) &_NoCost);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("RGScript.Data"), OBFUSCATE("UnlockConditionData") , OBFUSCATE("IsWeaponLockedByConfig"), 1), (void *) NoCost, (void **) &_NoCost);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("RGScript.Data"), OBFUSCATE("UnlockConditionData") , OBFUSCATE("IsMultiRoomSkinLockedByConfig"), 1), (void *) NoCost, (void **) &_NoCost);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("RGScript.Data"), OBFUSCATE("UnlockConditionData") , OBFUSCATE("IsTapeMailLockedByConfig"), 1), (void *) NoCost, (void **) &_NoCost);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("ItemData") , OBFUSCATE("ConsumeForgeWeapon"), 2), (void *) NoCost, (void **) &_NoCost);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("RGWeapon") , OBFUSCATE("get_LockEvolute"), 0), (void *) NoCost, (void **) &_NoCost);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("RGWeapon") , OBFUSCATE("get_LockSkin"), 0), (void *) NoCost, (void **) &_NoCost);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("RGWeapon") , OBFUSCATE("GetItemValue"), 0), (void *) FreeBuy, (void **) &_FreeBuy);
    
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("ModeSeason.Artifacts"), OBFUSCATE("UIArtifactsGrandmaSystem") , OBFUSCATE("GetWeaponLevelUpCost"), 0), (void *) FreeBuy, (void **) &_FreeBuy);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("ModeSeason.Artifacts"), OBFUSCATE("UIArtifactsGrandmaSystem") , OBFUSCATE("GetPartRankUpCost"), 1), (void *) FreeBuy, (void **) &_FreeBuy);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("ModeSeason.Artifacts"), OBFUSCATE("UIArtifactsGrandmaSystem") , OBFUSCATE("GetInscriptionLevelUpCost"), 1), (void *) FreeBuy, (void **) &_FreeBuy);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("RGScript.WeaponEvolution"), OBFUSCATE("WeaponDto") , OBFUSCATE("GetMaxBlueprintFragmentNeedCount"), 0), (void *) FreeBuy, (void **) &_FreeBuy);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("RGScript.WeaponEvolution"), OBFUSCATE("WeaponDto") , OBFUSCATE("GetUpdateMaterialCount"), 0), (void *) FreeBuy, (void **) &_FreeBuy);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("RGScript.WeaponEvolution"), OBFUSCATE("WeaponDto") , OBFUSCATE("GetLeftBlueprintFragmentNeedCount"), 0), (void *) FreeBuy, (void **) &_FreeBuy);
    
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("RGBullet") , OBFUSCATE("UpdateAttribute"), 7), (void *) UpdateAttribute, (void **) &_UpdateAttribute);
    
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("AreaEffectData") , OBFUSCATE("get_radius"), 0), (void *) AreaEffecRadius, (void **) &_AreaEffecRadius);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("BulletFire") , OBFUSCATE("get_radius"), 0), (void *) AreaEffecRadius, (void **) &_AreaEffecRadius);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("BulletFrost") , OBFUSCATE("get_radius"), 0), (void *) AreaEffecRadius, (void **) &_AreaEffecRadius);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("BulletGas") , OBFUSCATE("get_radius"), 0), (void *) AreaEffecRadius, (void **) &_AreaEffecRadius);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("BulletGasEnhance") , OBFUSCATE("get_radius"), 0), (void *) AreaEffecRadius, (void **) &_AreaEffecRadius);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("BulletThuderCircle") , OBFUSCATE("get_radius"), 0), (void *) AreaEffecRadius, (void **) &_AreaEffecRadius);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("RotateHalfSword") , OBFUSCATE("get_radius"), 0), (void *) AreaEffecRadius, (void **) &_AreaEffecRadius);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("PartEffect") , OBFUSCATE("BurstRadius"), 0), (void *) AreaEffecRadius, (void **) &_AreaEffecRadius);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("PartEffect") , OBFUSCATE("ErosionAreaLifetime"), 0), (void *) AreaEffecRadius, (void **) &_AreaEffecRadius);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("ArtifactInscriptionPowerHit") , OBFUSCATE("Radius"), 0), (void *) AreaEffecRadius, (void **) &_AreaEffecRadius);
    
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("BulletGas") , OBFUSCATE("FixedUpdate"), 0), (void *) BulletGasModif, (void **) &_BulletGasModif);
    
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("ArrowRest") , OBFUSCATE("Update"), 0), (void *) UpdateBoeBullet, (void **) &_UpdateBoeBullet);
     
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("BezierShortLaser") , OBFUSCATE("Update"), 0), (void *) UpdateBuffLeser, (void **) &_UpdateBuffLeser);
    
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("RGController") , OBFUSCATE("FixedUpdate"), 0), (void *) UpdateRGController, (void **) &_UpdateRGController);
    RGHandAbility = (void *(*)(void *)) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("RGController") , OBFUSCATE("get_HandAbility"), 0);    
    
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("ModeSeason.Artifacts"), OBFUSCATE("ArtifactInscriptionHitEnemyAddAtk") , OBFUSCATE("AddAtkPercent"), 1), (void *) ModifValueArtifacFloat, (void **) &_ModifValueArtifacFloat);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("ModeSeason.Artifacts"), OBFUSCATE("ArtifactInscriptionNearEnemyAddAtk") , OBFUSCATE("AddAtkPercent"), 1), (void *) ModifValueArtifacFloat, (void **) &_ModifValueArtifacFloat);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("ModeSeason.Artifacts"), OBFUSCATE("ArtifactInscriptionNearEnemyDebuffAddAtk") , OBFUSCATE("AddAtkPercent"), 1), (void *) ModifValueArtifacFloat, (void **) &_ModifValueArtifacFloat);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("ModeSeason.Artifacts"), OBFUSCATE("ArtifactInscriptionAddElementAtk") , OBFUSCATE("AddAtkPercent"), 1), (void *) ModifValueArtifacFloat, (void **) &_ModifValueArtifacFloat);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("ModeSeason.Artifacts"), OBFUSCATE("ArtifactInscriptionHasDefAddAtk") , OBFUSCATE("AddAtkPercent"), 1), (void *) ModifValueArtifacFloat, (void **) &_ModifValueArtifacFloat);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("ModeSeason.Artifacts"), OBFUSCATE("ArtifactPartEffect01") , OBFUSCATE("AddAttackPercent"), 1), (void *) ModifValueArtifacFloat, (void **) &_ModifValueArtifacFloat);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("ModeSeason.Artifacts"), OBFUSCATE("ArtifactInscriptionLaserRain") , OBFUSCATE("Damage"), 1), (void *) ModifValueArtifacFloat, (void **) &_ModifValueArtifacFloat);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("ModeSeason.Artifacts"), OBFUSCATE("ArtifactInscriptionFastGodPower") , OBFUSCATE("GodPowerDamageMultiplier"), 1), (void *) ModifValueArtifacFloat, (void **) &_ModifValueArtifacFloat);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("ModeSeason.Artifacts"), OBFUSCATE("RGWeaponArtifactBody") , OBFUSCATE("get_addDamagePercent"), 0), (void *) ModifValueArtifacFloat, (void **) &_ModifValueArtifacFloat);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("ModeSeason.Artifacts"), OBFUSCATE("RGWeaponArtifactBody") , OBFUSCATE("get_addGodPowerDamagePercent"), 0), (void *) ModifValueArtifacFloat, (void **) &_ModifValueArtifacFloat);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("ModeSeason.Artifacts"), OBFUSCATE("RGWeaponArtifactBody") , OBFUSCATE("get_godPowerDamageMultiplier"), 0), (void *) ModifValueArtifacFloat, (void **) &_ModifValueArtifacFloat);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("ModeSeason.Artifacts"), OBFUSCATE("RGWeaponArtifactBody") , OBFUSCATE("get_addElementalDamagePercent"), 0), (void *) ModifValueArtifacFloat, (void **) &_ModifValueArtifacFloat);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("ModeSeason.Artifacts"), OBFUSCATE("RGWeaponArtifactBody") , OBFUSCATE("get_addAtk"), 0), (void *) ModifValueArtifacFloat, (void **) &_ModifValueArtifacFloat);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("ModeSeason.Artifacts"), OBFUSCATE("RGWeaponArtifactBody") , OBFUSCATE("get_addAtkPercent"), 0), (void *) ModifValueArtifacFloat, (void **) &_ModifValueArtifacFloat);
    
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("ModeSeason.Artifacts"), OBFUSCATE("ArtifactInscriptionFairyChain") , OBFUSCATE("Damage"), 1), (void *) _ModifValueArtifacInt, (void **) &_ModifValueArtifacInt);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("ModeSeason.Artifacts"), OBFUSCATE("ArtifactInscriptionPowerHit") , OBFUSCATE("Damage"), 1), (void *) _ModifValueArtifacInt, (void **) &_ModifValueArtifacInt);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("ModeSeason.Artifacts"), OBFUSCATE("ArtifactInscriptionAreaEffectLaser") , OBFUSCATE("Damage"), 1), (void *) _ModifValueArtifacInt, (void **) &_ModifValueArtifacInt);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("ModeSeason.Artifacts"), OBFUSCATE("ArtifactInscriptionSkillLightning") , OBFUSCATE("Damage"), 1), (void *) _ModifValueArtifacInt, (void **) &_ModifValueArtifacInt);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("ModeSeason.Artifacts"), OBFUSCATE("ArtifactInscriptionInjureBackHit") , OBFUSCATE("Damage"), 1), (void *) _ModifValueArtifacInt, (void **) &_ModifValueArtifacInt);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("ModeSeason.Artifacts"), OBFUSCATE("ArtifactInscriptionWeaponHitBase") , OBFUSCATE("Damage"), 1), (void *) _ModifValueArtifacInt, (void **) &_ModifValueArtifacInt);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("ModeSeason.Artifacts"), OBFUSCATE("ArtifactInscriptionDebuffHit") , OBFUSCATE("Damage"), 1), (void *) _ModifValueArtifacInt, (void **) &_ModifValueArtifacInt);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("ModeSeason.Artifacts"), OBFUSCATE("ArtifactInscriptionGodPowerWhirlwind") , OBFUSCATE("Damage"), 1), (void *) _ModifValueArtifacInt, (void **) &_ModifValueArtifacInt);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("ModeSeason.Artifacts"), OBFUSCATE("ArtifactInscriptionGodPowerThunder") , OBFUSCATE("Damage"), 1), (void *) _ModifValueArtifacInt, (void **) &_ModifValueArtifacInt);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("ModeSeason.Artifacts"), OBFUSCATE("ArtifactPartEffectSword06") , OBFUSCATE("Damage"), 1), (void *) _ModifValueArtifacInt, (void **) &_ModifValueArtifacInt);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("ModeSeason.Artifacts"), OBFUSCATE("ArtifactInscriptionGodPowerBurningFloor") , OBFUSCATE("Damage"), 1), (void *) _ModifValueArtifacInt, (void **) &_ModifValueArtifacInt);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("ModeSeason.Artifacts"), OBFUSCATE("ArtifactPartEffectBow02") , OBFUSCATE("Damage"), 2), (void *) _ModifValueArtifacInt, (void **) &_ModifValueArtifacInt);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("ModeSeason.Artifacts"), OBFUSCATE("ArtifactPartEffectBow03") , OBFUSCATE("Damage"), 2), (void *) _ModifValueArtifacInt, (void **) &_ModifValueArtifacInt);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("ModeSeason.Artifacts"), OBFUSCATE("ArtifactInscriptionGodPowerInstantDamage") , OBFUSCATE("Damage"), 1), (void *) _ModifValueArtifacInt, (void **) &_ModifValueArtifacInt);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("ModeSeason.Artifacts"), OBFUSCATE("ArtifactPartEffectBow08") , OBFUSCATE("Damage"), 1), (void *) _ModifValueArtifacInt, (void **) &_ModifValueArtifacInt);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("ModeSeason.Artifacts"), OBFUSCATE("ArtifactPartEffectBow09") , OBFUSCATE("Damage"), 1), (void *) _ModifValueArtifacInt, (void **) &_ModifValueArtifacInt);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("ModeSeason.Artifacts"), OBFUSCATE("ArtifactInscriptionGodPowerParticles") , OBFUSCATE("GetDamage"), 1), (void *) _ModifValueArtifacInt, (void **) &_ModifValueArtifacInt);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("ModeSeason.Artifacts"), OBFUSCATE("ArtifactInscriptionGodPowerBladeStorm") , OBFUSCATE("GetDamage"), 1), (void *) _ModifValueArtifacInt, (void **) &_ModifValueArtifacInt);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("ModeSeason.Artifacts"), OBFUSCATE("ArtifactInscriptionGodPowerTurbulence") , OBFUSCATE("GetDamage"), 1), (void *) _ModifValueArtifacInt, (void **) &_ModifValueArtifacInt);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("ModeSeason.Artifacts"), OBFUSCATE("ArtifactInscriptionGodPowerMeteor") , OBFUSCATE("GetDamage"), 1), (void *) _ModifValueArtifacInt, (void **) &_ModifValueArtifacInt);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("ModeSeason.Artifacts"), OBFUSCATE("ArtifactInscriptionSwordWave") , OBFUSCATE("GetDamage"), 1), (void *) _ModifValueArtifacInt, (void **) &_ModifValueArtifacInt);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("ModeSeason.Artifacts"), OBFUSCATE("ArtifactInscriptionArrowWave") , OBFUSCATE("GetDamage"), 1), (void *) _ModifValueArtifacInt, (void **) &_ModifValueArtifacInt);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("ModeSeason.Artifacts"), OBFUSCATE("ArtifactInscriptionStaffWave") , OBFUSCATE("GetDamage"), 1), (void *) _ModifValueArtifacInt, (void **) &_ModifValueArtifacInt);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("ModeSeason.Artifacts"), OBFUSCATE("ArtifactInscriptionCriticalHitArcaneMissile") , OBFUSCATE("GetDamage"), 1), (void *) _ModifValueArtifacInt, (void **) &_ModifValueArtifacInt);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("ModeSeason.Artifacts"), OBFUSCATE("ArtifactPartEffectSword05") , OBFUSCATE("GetDamage"), 1), (void *) _ModifValueArtifacInt, (void **) &_ModifValueArtifacInt);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("ModeSeason.Artifacts"), OBFUSCATE("ArtifactPartEffectSword16") , OBFUSCATE("GetDamage"), 1), (void *) _ModifValueArtifacInt, (void **) &_ModifValueArtifacInt);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("ModeSeason.Artifacts"), OBFUSCATE("ArtifactPartEffectCurse") , OBFUSCATE("GetDamage"), 1), (void *) _ModifValueArtifacInt, (void **) &_ModifValueArtifacInt);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("ModeSeason.Artifacts"), OBFUSCATE("ArtifactPartEffectSword03") , OBFUSCATE("GetAutoAttackDamage"), 1), (void *) _ModifValueArtifacInt, (void **) &_ModifValueArtifacInt);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("ModeSeason.Artifacts"), OBFUSCATE("ArtifactPartEffectSword04") , OBFUSCATE("GetAttackDamage"), 0), (void *) _ModifValueArtifacInt, (void **) &_ModifValueArtifacInt);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("ModeSeason.Artifacts"), OBFUSCATE("ArtifactPartEffectBow04") , OBFUSCATE("GetAttackDamage"), 0), (void *) _ModifValueArtifacInt, (void **) &_ModifValueArtifacInt);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("ModeSeason.Artifacts"), OBFUSCATE("RGWeaponArtifactBody") , OBFUSCATE("get_godPowerDamage"), 0), (void *) _ModifValueArtifacInt, (void **) &_ModifValueArtifacInt);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("ModeSeason.Artifacts"), OBFUSCATE("RGWeaponArtifactBody") , OBFUSCATE("get_artifactAtkDamage"), 0), (void *) _ModifValueArtifacInt, (void **) &_ModifValueArtifacInt);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("ModeSeason.Artifacts"), OBFUSCATE("RGWeaponArtifactBody") , OBFUSCATE("get_damageFinal"), 0), (void *) _ModifValueArtifacInt, (void **) &_ModifValueArtifacInt);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("ModeSeason.Artifacts"), OBFUSCATE("RGWeaponArtifactBody") , OBFUSCATE("get_damageFinal2"), 0), (void *) _ModifValueArtifacInt, (void **) &_ModifValueArtifacInt);
    
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("ModeSeason.Artifacts"), OBFUSCATE("ArtifactInscriptionHitEnemyAddAtk") , OBFUSCATE("Duration"), 1), (void *) ModifValueArtifacFloat1, (void **) &_ModifValueArtifacFloat1);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("ModeSeason.Artifacts"), OBFUSCATE("ArtifactInscriptionNearEnemyAddAtk") , OBFUSCATE("MaxDistance"), 1), (void *) ModifValueArtifacFloat1, (void **) &_ModifValueArtifacFloat1);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("ModeSeason.Artifacts"), OBFUSCATE("ArtifactInscriptionNearEnemyDebuffAddAtk") , OBFUSCATE("MaxDistance"), 1), (void *) ModifValueArtifacFloat1, (void **) &_ModifValueArtifacFloat1);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("ModeSeason.Artifacts"), OBFUSCATE("ArtifactInscriptionBattleAddDamageStack") , OBFUSCATE("ValuePerStack"), 1), (void *) ModifValueArtifacFloat1, (void **) &_ModifValueArtifacFloat1);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("ModeSeason.Artifacts"), OBFUSCATE("ArtifactInscriptionWeaponHitBase") , OBFUSCATE("Possibility"), 1), (void *) ModifValueArtifacFloat1, (void **) &_ModifValueArtifacFloat1);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("ModeSeason.Artifacts"), OBFUSCATE("ArtifactPartEffect01") , OBFUSCATE("Possibility"), 1), (void *) ModifValueArtifacFloat1, (void **) &_ModifValueArtifacFloat1);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("ModeSeason.Artifacts"), OBFUSCATE("ArtifactPartEffectSword05") , OBFUSCATE("Possibility"), 1), (void *) ModifValueArtifacFloat1, (void **) &_ModifValueArtifacFloat1);
    
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("RGGameSceneManager") , OBFUSCATE("Update"), 0), (void *) AutoWin, (void **) &_AutoWin);
    FinishGame = (void(*)(void *,bool))(uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("RGGameSceneManager"), OBFUSCATE("FinishGame"), 0); 
    OnBattleEnd = (void(*)(void *,bool))(uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("RGGameSceneManager"), OBFUSCATE("OnBattleEnd"), 1); 

}
bool isNoAds2;
bool (*get_NoAds2)(void*instance);
bool NoAds2(void*instance){
    if(instance != NULL){
        if(isNoAds2){
         return false;
        }
    }
    return get_NoAds2(instance);
}



