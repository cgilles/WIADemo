#pragma once

#include <QtWidgets/QMainWindow>
#include <wiavideo.h>
#include <wia.h>
#include <windows.h>
#include <portabledevicetypes.h>
#include <QMessageBox>
#include <QSharedPointer>
#include <QVector>
#include <QResizeEvent>
#include "ui_WIADemo.h"
#include "DeviceModel.h"

#pragma comment (lib, "WiaGuid.lib")
#pragma comment (lib, "PortableDeviceGuids.lib")

using namespace std;

class WIADemo : public QMainWindow
{
    Q_OBJECT

public:

    WIADemo(QWidget *parent = Q_NULLPTR);
    ~WIADemo();
    void resizeEvent(QResizeEvent* ev);

private:

    Ui::WIADemoClass                     ui;
    IWiaDevMgr*                          m_pWiaDevMgr;
    IPortableDeviceManager*              m_pPortableDeviceManager;
    QVector<QSharedPointer<DeviceModel>> m_devices;

public slots:

    void ItemDoubleClickedSlot(QListWidgetItem* item);
};
