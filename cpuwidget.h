#ifndef CPUWIDGET_H
#define CPUWIDGET_H

#include "sysinfowidget.h"
#include <QtCharts/QPieSeries>

class CpuWidget : public SysInfoWidget
{
    Q_OBJECT
public:
    explicit CpuWidget(QWidget* parent = nullptr);

    /*
     * Since we overrode the SysInfoWidget::updateSeries() slot, we have to include
     * the Q_OBJECT macro to allow CPUWidget to respond to
     * the SysInfoWidgetmRefreshTimer::timeout() signal.
     * */
protected slots:
    void updateSeries() override;
private:
    QtCharts::QPieSeries* mSeries;
};

#endif // CPUWIDGET_H
