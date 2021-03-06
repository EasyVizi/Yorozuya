#include <GUILD_BATTLE__CNormalGuildBattleLoggerDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace GUILD_BATTLE
    {
        namespace Detail
        {
            
            Info::GUILD_BATTLE__CNormalGuildBattleLoggerctor_CNormalGuildBattleLogger2_ptr GUILD_BATTLE__CNormalGuildBattleLoggerctor_CNormalGuildBattleLogger2_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleLoggerctor_CNormalGuildBattleLogger2_clbk GUILD_BATTLE__CNormalGuildBattleLoggerctor_CNormalGuildBattleLogger2_user(nullptr);
            
            Info::GUILD_BATTLE__CNormalGuildBattleLoggerCreateLogFile4_ptr GUILD_BATTLE__CNormalGuildBattleLoggerCreateLogFile4_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleLoggerCreateLogFile4_clbk GUILD_BATTLE__CNormalGuildBattleLoggerCreateLogFile4_user(nullptr);
            
            Info::GUILD_BATTLE__CNormalGuildBattleLoggerInit6_ptr GUILD_BATTLE__CNormalGuildBattleLoggerInit6_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleLoggerInit6_clbk GUILD_BATTLE__CNormalGuildBattleLoggerInit6_user(nullptr);
            
            Info::GUILD_BATTLE__CNormalGuildBattleLoggerLog8_ptr GUILD_BATTLE__CNormalGuildBattleLoggerLog8_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleLoggerLog8_clbk GUILD_BATTLE__CNormalGuildBattleLoggerLog8_user(nullptr);
            
            Info::GUILD_BATTLE__CNormalGuildBattleLoggerLog10_ptr GUILD_BATTLE__CNormalGuildBattleLoggerLog10_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleLoggerLog10_clbk GUILD_BATTLE__CNormalGuildBattleLoggerLog10_user(nullptr);
            
            
            Info::GUILD_BATTLE__CNormalGuildBattleLoggerdtor_CNormalGuildBattleLogger12_ptr GUILD_BATTLE__CNormalGuildBattleLoggerdtor_CNormalGuildBattleLogger12_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleLoggerdtor_CNormalGuildBattleLogger12_clbk GUILD_BATTLE__CNormalGuildBattleLoggerdtor_CNormalGuildBattleLogger12_user(nullptr);
            
            
            void GUILD_BATTLE__CNormalGuildBattleLoggerctor_CNormalGuildBattleLogger2_wrapper(struct GUILD_BATTLE::CNormalGuildBattleLogger* _this)
            {
               GUILD_BATTLE__CNormalGuildBattleLoggerctor_CNormalGuildBattleLogger2_user(_this, GUILD_BATTLE__CNormalGuildBattleLoggerctor_CNormalGuildBattleLogger2_next);
            };
            void GUILD_BATTLE__CNormalGuildBattleLoggerCreateLogFile4_wrapper(struct GUILD_BATTLE::CNormalGuildBattleLogger* _this, char* szLogName)
            {
               GUILD_BATTLE__CNormalGuildBattleLoggerCreateLogFile4_user(_this, szLogName, GUILD_BATTLE__CNormalGuildBattleLoggerCreateLogFile4_next);
            };
            bool GUILD_BATTLE__CNormalGuildBattleLoggerInit6_wrapper(struct GUILD_BATTLE::CNormalGuildBattleLogger* _this)
            {
               return GUILD_BATTLE__CNormalGuildBattleLoggerInit6_user(_this, GUILD_BATTLE__CNormalGuildBattleLoggerInit6_next);
            };
            void GUILD_BATTLE__CNormalGuildBattleLoggerLog8_wrapper(struct GUILD_BATTLE::CNormalGuildBattleLogger* _this, char* fmt)
            {
               GUILD_BATTLE__CNormalGuildBattleLoggerLog8_user(_this, fmt, GUILD_BATTLE__CNormalGuildBattleLoggerLog8_next);
            };
            void GUILD_BATTLE__CNormalGuildBattleLoggerLog10_wrapper(struct GUILD_BATTLE::CNormalGuildBattleLogger* _this, wchar_t* fmt)
            {
               GUILD_BATTLE__CNormalGuildBattleLoggerLog10_user(_this, fmt, GUILD_BATTLE__CNormalGuildBattleLoggerLog10_next);
            };
            
            void GUILD_BATTLE__CNormalGuildBattleLoggerdtor_CNormalGuildBattleLogger12_wrapper(struct GUILD_BATTLE::CNormalGuildBattleLogger* _this)
            {
               GUILD_BATTLE__CNormalGuildBattleLoggerdtor_CNormalGuildBattleLogger12_user(_this, GUILD_BATTLE__CNormalGuildBattleLoggerdtor_CNormalGuildBattleLogger12_next);
            };
            
            ::std::array<hook_record, 6> CNormalGuildBattleLogger_functions = 
            {
                _hook_record {
                    (LPVOID)0x1403eb070L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleLoggerctor_CNormalGuildBattleLogger2_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleLoggerctor_CNormalGuildBattleLogger2_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleLoggerctor_CNormalGuildBattleLogger2_wrapper),
                    (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CNormalGuildBattleLogger::*)())&GUILD_BATTLE::CNormalGuildBattleLogger::ctor_CNormalGuildBattleLogger)
                },
                _hook_record {
                    (LPVOID)0x1403ced50L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleLoggerCreateLogFile4_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleLoggerCreateLogFile4_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleLoggerCreateLogFile4_wrapper),
                    (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CNormalGuildBattleLogger::*)(char*))&GUILD_BATTLE::CNormalGuildBattleLogger::CreateLogFile)
                },
                _hook_record {
                    (LPVOID)0x1403cec70L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleLoggerInit6_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleLoggerInit6_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleLoggerInit6_wrapper),
                    (LPVOID)cast_pointer_function((bool(GUILD_BATTLE::CNormalGuildBattleLogger::*)())&GUILD_BATTLE::CNormalGuildBattleLogger::Init)
                },
                _hook_record {
                    (LPVOID)0x1403cee40L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleLoggerLog8_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleLoggerLog8_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleLoggerLog8_wrapper),
                    (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CNormalGuildBattleLogger::*)(char*))&GUILD_BATTLE::CNormalGuildBattleLogger::Log)
                },
                _hook_record {
                    (LPVOID)0x1403ceed0L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleLoggerLog10_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleLoggerLog10_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleLoggerLog10_wrapper),
                    (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CNormalGuildBattleLogger::*)(wchar_t*))&GUILD_BATTLE::CNormalGuildBattleLogger::Log)
                },
                _hook_record {
                    (LPVOID)0x1403cebe0L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleLoggerdtor_CNormalGuildBattleLogger12_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleLoggerdtor_CNormalGuildBattleLogger12_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleLoggerdtor_CNormalGuildBattleLogger12_wrapper),
                    (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CNormalGuildBattleLogger::*)())&GUILD_BATTLE::CNormalGuildBattleLogger::dtor_CNormalGuildBattleLogger)
                },
            };
        }; // end namespace Detail
    }; // end namespace GUILD_BATTLE
END_ATF_NAMESPACE
