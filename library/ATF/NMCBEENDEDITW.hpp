// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <tagNMHDR.hpp>



START_ATF_NAMESPACE
    #pragma pack(push, 8)
    struct NMCBEENDEDITW
    {
        tagNMHDR hdr;
        int fChanged;
        int iNewSelection;
        wchar_t szText[260];
        int iWhy;
    };
    #pragma pack(pop)
END_ATF_NAMESPACE
