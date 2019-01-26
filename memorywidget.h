#ifndef MEMORYWIDGET_H
#define MEMORYWIDGET_H

#include <QObject>
#include <QWidget>
#include <QtCharts/QLineSeries>

#include "sysinfowidget.h"

class MemoryWidget : public SysInfoWidget
{
public:
    explicit MemoryWidget(QWidget* parent = nullptr);

    // SysInfoWidget interface
protected slots:
    void updateSeries() override;

private:
    QtCharts::QLineSeries* mSeries;
    qint64 mPointPositionX;
};

#endif // MEMORYWIDGET_H
