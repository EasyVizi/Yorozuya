#include <_dh_quest_setupDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_dh_quest_setupSearchMissionFromTitle2_ptr _dh_quest_setupSearchMissionFromTitle2_next(nullptr);
        Info::_dh_quest_setupSearchMissionFromTitle2_clbk _dh_quest_setupSearchMissionFromTitle2_user(nullptr);
        
        Info::_dh_quest_setupSetRealBoss4_ptr _dh_quest_setupSetRealBoss4_next(nullptr);
        Info::_dh_quest_setupSetRealBoss4_clbk _dh_quest_setupSetRealBoss4_user(nullptr);
        
        
        Info::_dh_quest_setupctor__dh_quest_setup6_ptr _dh_quest_setupctor__dh_quest_setup6_next(nullptr);
        Info::_dh_quest_setupctor__dh_quest_setup6_clbk _dh_quest_setupctor__dh_quest_setup6_user(nullptr);
        
        
        Info::_dh_quest_setupdtor__dh_quest_setup11_ptr _dh_quest_setupdtor__dh_quest_setup11_next(nullptr);
        Info::_dh_quest_setupdtor__dh_quest_setup11_clbk _dh_quest_setupdtor__dh_quest_setup11_user(nullptr);
        
        struct _dh_mission_setup* _dh_quest_setupSearchMissionFromTitle2_wrapper(struct _dh_quest_setup* _this, char* pszMissionTitle)
        {
           return _dh_quest_setupSearchMissionFromTitle2_user(_this, pszMissionTitle, _dh_quest_setupSearchMissionFromTitle2_next);
        };
        void _dh_quest_setupSetRealBoss4_wrapper(struct _dh_quest_setup* _this, bool isReal)
        {
           _dh_quest_setupSetRealBoss4_user(_this, isReal, _dh_quest_setupSetRealBoss4_next);
        };
        
        void _dh_quest_setupctor__dh_quest_setup6_wrapper(struct _dh_quest_setup* _this)
        {
           _dh_quest_setupctor__dh_quest_setup6_user(_this, _dh_quest_setupctor__dh_quest_setup6_next);
        };
        
        void _dh_quest_setupdtor__dh_quest_setup11_wrapper(struct _dh_quest_setup* _this)
        {
           _dh_quest_setupdtor__dh_quest_setup11_user(_this, _dh_quest_setupdtor__dh_quest_setup11_next);
        };
        
        ::std::array<hook_record, 4> _dh_quest_setup_functions = 
        {
            _hook_record {
                (LPVOID)0x140272c60L,
                (LPVOID *)&_dh_quest_setupSearchMissionFromTitle2_user,
                (LPVOID *)&_dh_quest_setupSearchMissionFromTitle2_next,
                (LPVOID)cast_pointer_function(_dh_quest_setupSearchMissionFromTitle2_wrapper),
                (LPVOID)cast_pointer_function((struct _dh_mission_setup*(_dh_quest_setup::*)(char*))&_dh_quest_setup::SearchMissionFromTitle)
            },
            _hook_record {
                (LPVOID)0x14026ea30L,
                (LPVOID *)&_dh_quest_setupSetRealBoss4_user,
                (LPVOID *)&_dh_quest_setupSetRealBoss4_next,
                (LPVOID)cast_pointer_function(_dh_quest_setupSetRealBoss4_wrapper),
                (LPVOID)cast_pointer_function((void(_dh_quest_setup::*)(bool))&_dh_quest_setup::SetRealBoss)
            },
            _hook_record {
                (LPVOID)0x1402723c0L,
                (LPVOID *)&_dh_quest_setupctor__dh_quest_setup6_user,
                (LPVOID *)&_dh_quest_setupctor__dh_quest_setup6_next,
                (LPVOID)cast_pointer_function(_dh_quest_setupctor__dh_quest_setup6_wrapper),
                (LPVOID)cast_pointer_function((void(_dh_quest_setup::*)())&_dh_quest_setup::ctor__dh_quest_setup)
            },
            _hook_record {
                (LPVOID)0x140272840L,
                (LPVOID *)&_dh_quest_setupdtor__dh_quest_setup11_user,
                (LPVOID *)&_dh_quest_setupdtor__dh_quest_setup11_next,
                (LPVOID)cast_pointer_function(_dh_quest_setupdtor__dh_quest_setup11_wrapper),
                (LPVOID)cast_pointer_function((void(_dh_quest_setup::*)())&_dh_quest_setup::dtor__dh_quest_setup)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
