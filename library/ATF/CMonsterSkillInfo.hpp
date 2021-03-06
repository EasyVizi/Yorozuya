// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <CMonsterSkill.hpp>


START_ATF_NAMESPACE
    namespace Info
    {
        
        using CMonsterSkillctor_CMonsterSkill2_ptr = void (WINAPIV*)(struct CMonsterSkill*);
        using CMonsterSkillctor_CMonsterSkill2_clbk = void (WINAPIV*)(struct CMonsterSkill*, CMonsterSkillctor_CMonsterSkill2_ptr);
        using CMonsterSkillCopy4_ptr = void (WINAPIV*)(struct CMonsterSkill*, struct CMonsterSkill*);
        using CMonsterSkillCopy4_clbk = void (WINAPIV*)(struct CMonsterSkill*, struct CMonsterSkill*, CMonsterSkillCopy4_ptr);
        using CMonsterSkillGetAccumulationCount6_ptr = int (WINAPIV*)(struct CMonsterSkill*);
        using CMonsterSkillGetAccumulationCount6_clbk = int (WINAPIV*)(struct CMonsterSkill*, CMonsterSkillGetAccumulationCount6_ptr);
        using CMonsterSkillGetAttackDist8_ptr = float (WINAPIV*)(struct CMonsterSkill*);
        using CMonsterSkillGetAttackDist8_clbk = float (WINAPIV*)(struct CMonsterSkill*, CMonsterSkillGetAttackDist8_ptr);
        using CMonsterSkillGetBeforeTime10_ptr = unsigned int (WINAPIV*)(struct CMonsterSkill*);
        using CMonsterSkillGetBeforeTime10_clbk = unsigned int (WINAPIV*)(struct CMonsterSkill*, CMonsterSkillGetBeforeTime10_ptr);
        using CMonsterSkillGetDstCaseType12_ptr = int (WINAPIV*)(struct CMonsterSkill*);
        using CMonsterSkillGetDstCaseType12_clbk = int (WINAPIV*)(struct CMonsterSkill*, CMonsterSkillGetDstCaseType12_ptr);
        using CMonsterSkillGetElement14_ptr = int (WINAPIV*)(struct CMonsterSkill*);
        using CMonsterSkillGetElement14_clbk = int (WINAPIV*)(struct CMonsterSkill*, CMonsterSkillGetElement14_ptr);
        using CMonsterSkillGetExceptMotive16_ptr = int (WINAPIV*)(struct CMonsterSkill*);
        using CMonsterSkillGetExceptMotive16_clbk = int (WINAPIV*)(struct CMonsterSkill*, CMonsterSkillGetExceptMotive16_ptr);
        using CMonsterSkillGetExceptMotiveValue18_ptr = int (WINAPIV*)(struct CMonsterSkill*);
        using CMonsterSkillGetExceptMotiveValue18_clbk = int (WINAPIV*)(struct CMonsterSkill*, CMonsterSkillGetExceptMotiveValue18_ptr);
        using CMonsterSkillGetFld20_ptr = struct _base_fld* (WINAPIV*)(struct CMonsterSkill*);
        using CMonsterSkillGetFld20_clbk = struct _base_fld* (WINAPIV*)(struct CMonsterSkill*, CMonsterSkillGetFld20_ptr);
        using CMonsterSkillGetMaxDmg22_ptr = int (WINAPIV*)(struct CMonsterSkill*);
        using CMonsterSkillGetMaxDmg22_clbk = int (WINAPIV*)(struct CMonsterSkill*, CMonsterSkillGetMaxDmg22_ptr);
        using CMonsterSkillGetMaxProb24_ptr = int (WINAPIV*)(struct CMonsterSkill*);
        using CMonsterSkillGetMaxProb24_clbk = int (WINAPIV*)(struct CMonsterSkill*, CMonsterSkillGetMaxProb24_ptr);
        using CMonsterSkillGetMinDmg26_ptr = int (WINAPIV*)(struct CMonsterSkill*);
        using CMonsterSkillGetMinDmg26_clbk = int (WINAPIV*)(struct CMonsterSkill*, CMonsterSkillGetMinDmg26_ptr);
        using CMonsterSkillGetMinProb28_ptr = int (WINAPIV*)(struct CMonsterSkill*);
        using CMonsterSkillGetMinProb28_clbk = int (WINAPIV*)(struct CMonsterSkill*, CMonsterSkillGetMinProb28_ptr);
        using CMonsterSkillGetMotive30_ptr = int (WINAPIV*)(struct CMonsterSkill*);
        using CMonsterSkillGetMotive30_clbk = int (WINAPIV*)(struct CMonsterSkill*, CMonsterSkillGetMotive30_ptr);
        using CMonsterSkillGetMotiveValue32_ptr = int (WINAPIV*)(struct CMonsterSkill*);
        using CMonsterSkillGetMotiveValue32_clbk = int (WINAPIV*)(struct CMonsterSkill*, CMonsterSkillGetMotiveValue32_ptr);
        using CMonsterSkillGetNextActionDelayTime34_ptr = unsigned int (WINAPIV*)(struct CMonsterSkill*);
        using CMonsterSkillGetNextActionDelayTime34_clbk = unsigned int (WINAPIV*)(struct CMonsterSkill*, CMonsterSkillGetNextActionDelayTime34_ptr);
        using CMonsterSkillGetSFLv36_ptr = int (WINAPIV*)(struct CMonsterSkill*);
        using CMonsterSkillGetSFLv36_clbk = int (WINAPIV*)(struct CMonsterSkill*, CMonsterSkillGetSFLv36_ptr);
        using CMonsterSkillGetSPActionProbability38_ptr = int (WINAPIV*)(struct CMonsterSkill*);
        using CMonsterSkillGetSPActionProbability38_clbk = int (WINAPIV*)(struct CMonsterSkill*, CMonsterSkillGetSPActionProbability38_ptr);
        using CMonsterSkillGetSPLimitCount40_ptr = int (WINAPIV*)(struct CMonsterSkill*);
        using CMonsterSkillGetSPLimitCount40_clbk = int (WINAPIV*)(struct CMonsterSkill*, CMonsterSkillGetSPLimitCount40_ptr);
        using CMonsterSkillGetType42_ptr = int (WINAPIV*)(struct CMonsterSkill*);
        using CMonsterSkillGetType42_clbk = int (WINAPIV*)(struct CMonsterSkill*, CMonsterSkillGetType42_ptr);
        using CMonsterSkillGetUseType44_ptr = int (WINAPIV*)(struct CMonsterSkill*);
        using CMonsterSkillGetUseType44_clbk = int (WINAPIV*)(struct CMonsterSkill*, CMonsterSkillGetUseType44_ptr);
        using CMonsterSkillInit46_ptr = void (WINAPIV*)(struct CMonsterSkill*);
        using CMonsterSkillInit46_clbk = void (WINAPIV*)(struct CMonsterSkill*, CMonsterSkillInit46_ptr);
        using CMonsterSkillIsAttackAble48_ptr = bool (WINAPIV*)(struct CMonsterSkill*);
        using CMonsterSkillIsAttackAble48_clbk = bool (WINAPIV*)(struct CMonsterSkill*, CMonsterSkillIsAttackAble48_ptr);
        using CMonsterSkillIsExit50_ptr = bool (WINAPIV*)(struct CMonsterSkill*);
        using CMonsterSkillIsExit50_clbk = bool (WINAPIV*)(struct CMonsterSkill*, CMonsterSkillIsExit50_ptr);
        using CMonsterSkillNextPass52_ptr = void (WINAPIV*)(struct CMonsterSkill*);
        using CMonsterSkillNextPass52_clbk = void (WINAPIV*)(struct CMonsterSkill*, CMonsterSkillNextPass52_ptr);
        using CMonsterSkillSetAccumulationCountAdd54_ptr = void (WINAPIV*)(struct CMonsterSkill*, int);
        using CMonsterSkillSetAccumulationCountAdd54_clbk = void (WINAPIV*)(struct CMonsterSkill*, int, CMonsterSkillSetAccumulationCountAdd54_ptr);
        using CMonsterSkillSetForce56_ptr = int (WINAPIV*)(struct CMonsterSkill*, struct _monster_fld*, struct _monster_sp_fld*, int, struct _force_fld*, unsigned int, float, unsigned int, int, int, int);
        using CMonsterSkillSetForce56_clbk = int (WINAPIV*)(struct CMonsterSkill*, struct _monster_fld*, struct _monster_sp_fld*, int, struct _force_fld*, unsigned int, float, unsigned int, int, int, int, CMonsterSkillSetForce56_ptr);
        using CMonsterSkillSetGen58_ptr = int (WINAPIV*)(struct CMonsterSkill*, struct _monster_fld*, int, unsigned int, float, unsigned int);
        using CMonsterSkillSetGen58_clbk = int (WINAPIV*)(struct CMonsterSkill*, struct _monster_fld*, int, unsigned int, float, unsigned int, CMonsterSkillSetGen58_ptr);
        using CMonsterSkillSetSkill60_ptr = int (WINAPIV*)(struct CMonsterSkill*, struct _monster_fld*, struct _monster_sp_fld*, int, int, struct _skill_fld*, unsigned int, float, unsigned int, int, int, int);
        using CMonsterSkillSetSkill60_clbk = int (WINAPIV*)(struct CMonsterSkill*, struct _monster_fld*, struct _monster_sp_fld*, int, int, struct _skill_fld*, unsigned int, float, unsigned int, int, int, int, CMonsterSkillSetSkill60_ptr);
        using CMonsterSkillUse62_ptr = int (WINAPIV*)(struct CMonsterSkill*, unsigned int, bool);
        using CMonsterSkillUse62_clbk = int (WINAPIV*)(struct CMonsterSkill*, unsigned int, bool, CMonsterSkillUse62_ptr);
        
        using CMonsterSkilldtor_CMonsterSkill64_ptr = void (WINAPIV*)(struct CMonsterSkill*);
        using CMonsterSkilldtor_CMonsterSkill64_clbk = void (WINAPIV*)(struct CMonsterSkill*, CMonsterSkilldtor_CMonsterSkill64_ptr);
    }; // end namespace Info
END_ATF_NAMESPACE
