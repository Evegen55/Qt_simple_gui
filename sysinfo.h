#ifndef SYSINFO_H
#define SYSINFO_H


class SysInfo
{
public:
    static SysInfo& instance();
    virtual ~SysInfo();

protected:
    explicit SysInfo();

private:
    SysInfo(const SysInfo& rhs);
    SysInfo& operator=(const SysInfo& rhs);

    /**
     * This function allows the derived class to perform any initialization
     * process depending on the OS platform
     * @brief init
     */
    virtual void init() = 0;
    /**
     *This function calls some OS-specific code to retrieve the
     * average CPU load and returns it as a percentage value
     *
     * @brief cpuLoadAverage
     * @return
     */
    virtual double cpuLoadAverage() = 0;

    /**
     * This function calls some OS-specific code to retrieve the memory
     * used and returns it as a percentage value
     * @brief memoryUsed
     * @return
     */
    virtual double memoryUsed() = 0;
};

#endif // SYSINFO_H
