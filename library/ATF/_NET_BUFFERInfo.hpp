// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <_NET_BUFFER.hpp>


START_ATF_NAMESPACE
    namespace Info
    {
        using _NET_BUFFERAddPopPos2_ptr = void (WINAPIV*)(struct _NET_BUFFER*, unsigned int);
        using _NET_BUFFERAddPopPos2_clbk = void (WINAPIV*)(struct _NET_BUFFER*, unsigned int, _NET_BUFFERAddPopPos2_ptr);
        using _NET_BUFFERAddPushPos4_ptr = void (WINAPIV*)(struct _NET_BUFFER*, unsigned int);
        using _NET_BUFFERAddPushPos4_clbk = void (WINAPIV*)(struct _NET_BUFFER*, unsigned int, _NET_BUFFERAddPushPos4_ptr);
        using _NET_BUFFERAllocBuffer6_ptr = bool (WINAPIV*)(struct _NET_BUFFER*, int, int, char*);
        using _NET_BUFFERAllocBuffer6_clbk = bool (WINAPIV*)(struct _NET_BUFFER*, int, int, char*, _NET_BUFFERAllocBuffer6_ptr);
        using _NET_BUFFERGetLeftLoadSize8_ptr = int (WINAPIV*)(struct _NET_BUFFER*);
        using _NET_BUFFERGetLeftLoadSize8_clbk = int (WINAPIV*)(struct _NET_BUFFER*, _NET_BUFFERGetLeftLoadSize8_ptr);
        using _NET_BUFFERGetPopPoint10_ptr = char* (WINAPIV*)(struct _NET_BUFFER*, bool*);
        using _NET_BUFFERGetPopPoint10_clbk = char* (WINAPIV*)(struct _NET_BUFFER*, bool*, _NET_BUFFERGetPopPoint10_ptr);
        using _NET_BUFFERGetPushPos12_ptr = char* (WINAPIV*)(struct _NET_BUFFER*);
        using _NET_BUFFERGetPushPos12_clbk = char* (WINAPIV*)(struct _NET_BUFFER*, _NET_BUFFERGetPushPos12_ptr);
        using _NET_BUFFERGetSendPoint14_ptr = char* (WINAPIV*)(struct _NET_BUFFER*, int*, bool*);
        using _NET_BUFFERGetSendPoint14_clbk = char* (WINAPIV*)(struct _NET_BUFFER*, int*, bool*, _NET_BUFFERGetSendPoint14_ptr);
        using _NET_BUFFERInit16_ptr = void (WINAPIV*)(struct _NET_BUFFER*);
        using _NET_BUFFERInit16_clbk = void (WINAPIV*)(struct _NET_BUFFER*, _NET_BUFFERInit16_ptr);
        
        using _NET_BUFFERctor__NET_BUFFER18_ptr = void (WINAPIV*)(struct _NET_BUFFER*);
        using _NET_BUFFERctor__NET_BUFFER18_clbk = void (WINAPIV*)(struct _NET_BUFFER*, _NET_BUFFERctor__NET_BUFFER18_ptr);
        
        using _NET_BUFFERdtor__NET_BUFFER22_ptr = void (WINAPIV*)(struct _NET_BUFFER*);
        using _NET_BUFFERdtor__NET_BUFFER22_clbk = void (WINAPIV*)(struct _NET_BUFFER*, _NET_BUFFERdtor__NET_BUFFER22_ptr);
    }; // end namespace Info
END_ATF_NAMESPACE
