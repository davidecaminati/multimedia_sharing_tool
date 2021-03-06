#ifndef FRMCONNECTED_H
#define FRMCONNECTED_H

#include "dictionary.h"
#include "configurations.h"
#include "connectivity.h"
#include "tcpclientthread.h"
#include "clientstreamthread.h"
#include <QWidget>
#include <QDir>
#include <qdesktopwidget.h>
#include <QListView>
#include <QStandardItemModel>

namespace Ui {
class FrmConnected;
}

class FrmConnected : public QWidget
{
    Q_OBJECT

public:
    explicit FrmConnected(QWidget *parent = nullptr);
    ~FrmConnected();
    void setDict(Dictionary *dict);
    void setSelector(int *selector);

private slots:
    void on_btnDisconnect_clicked();
    void on_btnSend_clicked();
    void writeTextOnTxtBox(QString str);
    void clientConnected();
    void otherGuyDisconnected();
    void sendStartStreamingCommand();
    void on_btnToggleConfig_clicked();
    void stopReceivingVideoStream(bool is_video_ended);
    void streamingEnded();
    void startStreaming();
    void on_btnStartStopStreaming_clicked();
    void updateListConfigurations();

private:
    Ui::FrmConnected *ui;
    Dictionary *dict;
    int *selector;
    TcpClientThread *tcp_client_thread;
    ClientStreamThread *client_stream_thread;
    Connectivity c;

    bool client_connected;
    bool listconfig_active;
    bool is_stream_active;

    void enableListConfiguration();
    void disableListConfiguration();
    void stopThreads();
    void uiStreamingActive();
    void uiStreamingInactive();
};

#endif // FRMCONNECTED_H
