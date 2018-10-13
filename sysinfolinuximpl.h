#ifndef SYSINFOLINUXIMPL_H
#define SYSINFOLINUXIMPL_H

#include "sysinfo.h"
#include <QtGlobal>
#include <QVector>
#include <QFile>

class SysInfoLinuxImpl : public SysInfo
{
public:
    SysInfoLinuxImpl();


    // SysInfo interface
public:
    void init() override;
    double cpuLoadAverage() override;
    double memoryUsed() override;

private:
    /*
     * Perform the Linux API call to retrieve system timing information and
     * return values in a QVector class of qulonglong type.
     * We retrieve and return four values containing the time the CPU has spent
     * on the following: normal processes in User mode, nice processes in User mode,
     * processes in Kernel mode, and idle.
     * */
    QVector<qulonglong> cpuRawData();
private:
    QVector<qulonglong> mCpuLoadLastValues;
};

#endif // SYSINFOLINUXIMPL_H
