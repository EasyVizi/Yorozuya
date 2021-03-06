#include <CMonsterHierarchyDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CMonsterHierarchyctor_CMonsterHierarchy2_ptr CMonsterHierarchyctor_CMonsterHierarchy2_next(nullptr);
        Info::CMonsterHierarchyctor_CMonsterHierarchy2_clbk CMonsterHierarchyctor_CMonsterHierarchy2_user(nullptr);
        
        Info::CMonsterHierarchyChildKindCount4_ptr CMonsterHierarchyChildKindCount4_next(nullptr);
        Info::CMonsterHierarchyChildKindCount4_clbk CMonsterHierarchyChildKindCount4_user(nullptr);
        
        Info::CMonsterHierarchyGetChild6_ptr CMonsterHierarchyGetChild6_next(nullptr);
        Info::CMonsterHierarchyGetChild6_clbk CMonsterHierarchyGetChild6_user(nullptr);
        
        Info::CMonsterHierarchyGetChildCount8_ptr CMonsterHierarchyGetChildCount8_next(nullptr);
        Info::CMonsterHierarchyGetChildCount8_clbk CMonsterHierarchyGetChildCount8_user(nullptr);
        
        Info::CMonsterHierarchyGetParent10_ptr CMonsterHierarchyGetParent10_next(nullptr);
        Info::CMonsterHierarchyGetParent10_clbk CMonsterHierarchyGetParent10_user(nullptr);
        
        Info::CMonsterHierarchyInit12_ptr CMonsterHierarchyInit12_next(nullptr);
        Info::CMonsterHierarchyInit12_clbk CMonsterHierarchyInit12_user(nullptr);
        
        Info::CMonsterHierarchyOnChildMonsterCreate14_ptr CMonsterHierarchyOnChildMonsterCreate14_next(nullptr);
        Info::CMonsterHierarchyOnChildMonsterCreate14_clbk CMonsterHierarchyOnChildMonsterCreate14_user(nullptr);
        
        Info::CMonsterHierarchyOnChildMonsterDestroy16_ptr CMonsterHierarchyOnChildMonsterDestroy16_next(nullptr);
        Info::CMonsterHierarchyOnChildMonsterDestroy16_clbk CMonsterHierarchyOnChildMonsterDestroy16_user(nullptr);
        
        Info::CMonsterHierarchyOnChildRegenLoop18_ptr CMonsterHierarchyOnChildRegenLoop18_next(nullptr);
        Info::CMonsterHierarchyOnChildRegenLoop18_clbk CMonsterHierarchyOnChildRegenLoop18_user(nullptr);
        
        Info::CMonsterHierarchyOnlyOnceInit20_ptr CMonsterHierarchyOnlyOnceInit20_next(nullptr);
        Info::CMonsterHierarchyOnlyOnceInit20_clbk CMonsterHierarchyOnlyOnceInit20_user(nullptr);
        
        Info::CMonsterHierarchyPopChildMon22_ptr CMonsterHierarchyPopChildMon22_next(nullptr);
        Info::CMonsterHierarchyPopChildMon22_clbk CMonsterHierarchyPopChildMon22_user(nullptr);
        
        Info::CMonsterHierarchyPopChildMonAll24_ptr CMonsterHierarchyPopChildMonAll24_next(nullptr);
        Info::CMonsterHierarchyPopChildMonAll24_clbk CMonsterHierarchyPopChildMonAll24_user(nullptr);
        
        Info::CMonsterHierarchyPushChildMon26_ptr CMonsterHierarchyPushChildMon26_next(nullptr);
        Info::CMonsterHierarchyPushChildMon26_clbk CMonsterHierarchyPushChildMon26_user(nullptr);
        
        Info::CMonsterHierarchySearchChildMon28_ptr CMonsterHierarchySearchChildMon28_next(nullptr);
        Info::CMonsterHierarchySearchChildMon28_clbk CMonsterHierarchySearchChildMon28_user(nullptr);
        
        Info::CMonsterHierarchySetParent30_ptr CMonsterHierarchySetParent30_next(nullptr);
        Info::CMonsterHierarchySetParent30_clbk CMonsterHierarchySetParent30_user(nullptr);
        
        
        Info::CMonsterHierarchydtor_CMonsterHierarchy35_ptr CMonsterHierarchydtor_CMonsterHierarchy35_next(nullptr);
        Info::CMonsterHierarchydtor_CMonsterHierarchy35_clbk CMonsterHierarchydtor_CMonsterHierarchy35_user(nullptr);
        
        
        void CMonsterHierarchyctor_CMonsterHierarchy2_wrapper(struct CMonsterHierarchy* _this)
        {
           CMonsterHierarchyctor_CMonsterHierarchy2_user(_this, CMonsterHierarchyctor_CMonsterHierarchy2_next);
        };
        char CMonsterHierarchyChildKindCount4_wrapper(struct CMonsterHierarchy* _this)
        {
           return CMonsterHierarchyChildKindCount4_user(_this, CMonsterHierarchyChildKindCount4_next);
        };
        struct CMonster* CMonsterHierarchyGetChild6_wrapper(struct CMonsterHierarchy* _this, int nKind, int nIndex)
        {
           return CMonsterHierarchyGetChild6_user(_this, nKind, nIndex, CMonsterHierarchyGetChild6_next);
        };
        unsigned int CMonsterHierarchyGetChildCount8_wrapper(struct CMonsterHierarchy* _this, int nKindIndex)
        {
           return CMonsterHierarchyGetChildCount8_user(_this, nKindIndex, CMonsterHierarchyGetChildCount8_next);
        };
        struct CMonster* CMonsterHierarchyGetParent10_wrapper(struct CMonsterHierarchy* _this)
        {
           return CMonsterHierarchyGetParent10_user(_this, CMonsterHierarchyGetParent10_next);
        };
        void CMonsterHierarchyInit12_wrapper(struct CMonsterHierarchy* _this)
        {
           CMonsterHierarchyInit12_user(_this, CMonsterHierarchyInit12_next);
        };
        void CMonsterHierarchyOnChildMonsterCreate14_wrapper(struct CMonsterHierarchy* _this, struct _monster_create_setdata* pData)
        {
           CMonsterHierarchyOnChildMonsterCreate14_user(_this, pData, CMonsterHierarchyOnChildMonsterCreate14_next);
        };
        void CMonsterHierarchyOnChildMonsterDestroy16_wrapper(struct CMonsterHierarchy* _this)
        {
           CMonsterHierarchyOnChildMonsterDestroy16_user(_this, CMonsterHierarchyOnChildMonsterDestroy16_next);
        };
        void CMonsterHierarchyOnChildRegenLoop18_wrapper(struct CMonsterHierarchy* _this)
        {
           CMonsterHierarchyOnChildRegenLoop18_user(_this, CMonsterHierarchyOnChildRegenLoop18_next);
        };
        void CMonsterHierarchyOnlyOnceInit20_wrapper(struct CMonsterHierarchy* _this, struct CMonster* pThis)
        {
           CMonsterHierarchyOnlyOnceInit20_user(_this, pThis, CMonsterHierarchyOnlyOnceInit20_next);
        };
        int CMonsterHierarchyPopChildMon22_wrapper(struct CMonsterHierarchy* _this, struct CMonster* pMon)
        {
           return CMonsterHierarchyPopChildMon22_user(_this, pMon, CMonsterHierarchyPopChildMon22_next);
        };
        void CMonsterHierarchyPopChildMonAll24_wrapper(struct CMonsterHierarchy* _this)
        {
           CMonsterHierarchyPopChildMonAll24_user(_this, CMonsterHierarchyPopChildMonAll24_next);
        };
        int CMonsterHierarchyPushChildMon26_wrapper(struct CMonsterHierarchy* _this, int nKind, struct CMonster* pMon)
        {
           return CMonsterHierarchyPushChildMon26_user(_this, nKind, pMon, CMonsterHierarchyPushChildMon26_next);
        };
        int CMonsterHierarchySearchChildMon28_wrapper(struct CMonsterHierarchy* _this, struct CMonster* pMon)
        {
           return CMonsterHierarchySearchChildMon28_user(_this, pMon, CMonsterHierarchySearchChildMon28_next);
        };
        int CMonsterHierarchySetParent30_wrapper(struct CMonsterHierarchy* _this, struct CMonster* pMon)
        {
           return CMonsterHierarchySetParent30_user(_this, pMon, CMonsterHierarchySetParent30_next);
        };
        
        void CMonsterHierarchydtor_CMonsterHierarchy35_wrapper(struct CMonsterHierarchy* _this)
        {
           CMonsterHierarchydtor_CMonsterHierarchy35_user(_this, CMonsterHierarchydtor_CMonsterHierarchy35_next);
        };
        
        ::std::array<hook_record, 16> CMonsterHierarchy_functions = 
        {
            _hook_record {
                (LPVOID)0x14014b660L,
                (LPVOID *)&CMonsterHierarchyctor_CMonsterHierarchy2_user,
                (LPVOID *)&CMonsterHierarchyctor_CMonsterHierarchy2_next,
                (LPVOID)cast_pointer_function(CMonsterHierarchyctor_CMonsterHierarchy2_wrapper),
                (LPVOID)cast_pointer_function((void(CMonsterHierarchy::*)())&CMonsterHierarchy::ctor_CMonsterHierarchy)
            },
            _hook_record {
                (LPVOID)0x14014c320L,
                (LPVOID *)&CMonsterHierarchyChildKindCount4_user,
                (LPVOID *)&CMonsterHierarchyChildKindCount4_next,
                (LPVOID)cast_pointer_function(CMonsterHierarchyChildKindCount4_wrapper),
                (LPVOID)cast_pointer_function((char(CMonsterHierarchy::*)())&CMonsterHierarchy::ChildKindCount)
            },
            _hook_record {
                (LPVOID)0x140157da0L,
                (LPVOID *)&CMonsterHierarchyGetChild6_user,
                (LPVOID *)&CMonsterHierarchyGetChild6_next,
                (LPVOID)cast_pointer_function(CMonsterHierarchyGetChild6_wrapper),
                (LPVOID)cast_pointer_function((struct CMonster*(CMonsterHierarchy::*)(int, int))&CMonsterHierarchy::GetChild)
            },
            _hook_record {
                (LPVOID)0x140161530L,
                (LPVOID *)&CMonsterHierarchyGetChildCount8_user,
                (LPVOID *)&CMonsterHierarchyGetChildCount8_next,
                (LPVOID)cast_pointer_function(CMonsterHierarchyGetChildCount8_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(CMonsterHierarchy::*)(int))&CMonsterHierarchy::GetChildCount)
            },
            _hook_record {
                (LPVOID)0x14014c300L,
                (LPVOID *)&CMonsterHierarchyGetParent10_user,
                (LPVOID *)&CMonsterHierarchyGetParent10_next,
                (LPVOID)cast_pointer_function(CMonsterHierarchyGetParent10_wrapper),
                (LPVOID)cast_pointer_function((struct CMonster*(CMonsterHierarchy::*)())&CMonsterHierarchy::GetParent)
            },
            _hook_record {
                (LPVOID)0x140157370L,
                (LPVOID *)&CMonsterHierarchyInit12_user,
                (LPVOID *)&CMonsterHierarchyInit12_next,
                (LPVOID)cast_pointer_function(CMonsterHierarchyInit12_wrapper),
                (LPVOID)cast_pointer_function((void(CMonsterHierarchy::*)())&CMonsterHierarchy::Init)
            },
            _hook_record {
                (LPVOID)0x140157450L,
                (LPVOID *)&CMonsterHierarchyOnChildMonsterCreate14_user,
                (LPVOID *)&CMonsterHierarchyOnChildMonsterCreate14_next,
                (LPVOID)cast_pointer_function(CMonsterHierarchyOnChildMonsterCreate14_wrapper),
                (LPVOID)cast_pointer_function((void(CMonsterHierarchy::*)(struct _monster_create_setdata*))&CMonsterHierarchy::OnChildMonsterCreate)
            },
            _hook_record {
                (LPVOID)0x140157870L,
                (LPVOID *)&CMonsterHierarchyOnChildMonsterDestroy16_user,
                (LPVOID *)&CMonsterHierarchyOnChildMonsterDestroy16_next,
                (LPVOID)cast_pointer_function(CMonsterHierarchyOnChildMonsterDestroy16_wrapper),
                (LPVOID)cast_pointer_function((void(CMonsterHierarchy::*)())&CMonsterHierarchy::OnChildMonsterDestroy)
            },
            _hook_record {
                (LPVOID)0x140157590L,
                (LPVOID *)&CMonsterHierarchyOnChildRegenLoop18_user,
                (LPVOID *)&CMonsterHierarchyOnChildRegenLoop18_next,
                (LPVOID)cast_pointer_function(CMonsterHierarchyOnChildRegenLoop18_wrapper),
                (LPVOID)cast_pointer_function((void(CMonsterHierarchy::*)())&CMonsterHierarchy::OnChildRegenLoop)
            },
            _hook_record {
                (LPVOID)0x140157300L,
                (LPVOID *)&CMonsterHierarchyOnlyOnceInit20_user,
                (LPVOID *)&CMonsterHierarchyOnlyOnceInit20_next,
                (LPVOID)cast_pointer_function(CMonsterHierarchyOnlyOnceInit20_wrapper),
                (LPVOID)cast_pointer_function((void(CMonsterHierarchy::*)(struct CMonster*))&CMonsterHierarchy::OnlyOnceInit)
            },
            _hook_record {
                (LPVOID)0x140157aa0L,
                (LPVOID *)&CMonsterHierarchyPopChildMon22_user,
                (LPVOID *)&CMonsterHierarchyPopChildMon22_next,
                (LPVOID)cast_pointer_function(CMonsterHierarchyPopChildMon22_wrapper),
                (LPVOID)cast_pointer_function((int(CMonsterHierarchy::*)(struct CMonster*))&CMonsterHierarchy::PopChildMon)
            },
            _hook_record {
                (LPVOID)0x140157be0L,
                (LPVOID *)&CMonsterHierarchyPopChildMonAll24_user,
                (LPVOID *)&CMonsterHierarchyPopChildMonAll24_next,
                (LPVOID)cast_pointer_function(CMonsterHierarchyPopChildMonAll24_wrapper),
                (LPVOID)cast_pointer_function((void(CMonsterHierarchy::*)())&CMonsterHierarchy::PopChildMonAll)
            },
            _hook_record {
                (LPVOID)0x140157990L,
                (LPVOID *)&CMonsterHierarchyPushChildMon26_user,
                (LPVOID *)&CMonsterHierarchyPushChildMon26_next,
                (LPVOID)cast_pointer_function(CMonsterHierarchyPushChildMon26_wrapper),
                (LPVOID)cast_pointer_function((int(CMonsterHierarchy::*)(int, struct CMonster*))&CMonsterHierarchy::PushChildMon)
            },
            _hook_record {
                (LPVOID)0x140157d00L,
                (LPVOID *)&CMonsterHierarchySearchChildMon28_user,
                (LPVOID *)&CMonsterHierarchySearchChildMon28_next,
                (LPVOID)cast_pointer_function(CMonsterHierarchySearchChildMon28_wrapper),
                (LPVOID)cast_pointer_function((int(CMonsterHierarchy::*)(struct CMonster*))&CMonsterHierarchy::SearchChildMon)
            },
            _hook_record {
                (LPVOID)0x140157960L,
                (LPVOID *)&CMonsterHierarchySetParent30_user,
                (LPVOID *)&CMonsterHierarchySetParent30_next,
                (LPVOID)cast_pointer_function(CMonsterHierarchySetParent30_wrapper),
                (LPVOID)cast_pointer_function((int(CMonsterHierarchy::*)(struct CMonster*))&CMonsterHierarchy::SetParent)
            },
            _hook_record {
                (LPVOID)0x140157350L,
                (LPVOID *)&CMonsterHierarchydtor_CMonsterHierarchy35_user,
                (LPVOID *)&CMonsterHierarchydtor_CMonsterHierarchy35_next,
                (LPVOID)cast_pointer_function(CMonsterHierarchydtor_CMonsterHierarchy35_wrapper),
                (LPVOID)cast_pointer_function((void(CMonsterHierarchy::*)())&CMonsterHierarchy::dtor_CMonsterHierarchy)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
