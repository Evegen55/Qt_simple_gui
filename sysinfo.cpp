#include <QtGlobal>

#ifdef Q_OS_WIN
#include "SysInfoWindowsImpl.h"
#elif defined(Q_OS_MAC)
#include "SysInfoMacImpl.h"
#elif defined(Q_OS_LINUX)
#include "sysinfolinuximpl.h"
#endif

#include "sysinfo.h"

/**

 * @brief Declaring the singleton variable as a static variable in the instance() function is a way
 * to make a singleton in C++.
 * @return singleton
 */
SysInfo& SysInfo::instance()
{
#ifdef Q_OS_WIN
    static SysInfoWindowsImpl singleton;
#elif defined(Q_OS_MAC)
    static SysInfoMacImpl singleton;
#elif defined(Q_OS_LINUX)
    static SysInfoLinuxImpl singleton;
#endif
    return singleton;
}

SysInfo::SysInfo()
{

}

SysInfo::~SysInfo()
{

}


