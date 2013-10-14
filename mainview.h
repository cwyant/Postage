#ifndef MAINVIEW_H
#define MAINVIEW_H

#include <QMainWindow>

class QUdpSocket;

namespace Ui {
class MainView;
}

class MainView : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainView(QWidget *parent = 0);
    ~MainView();
private slots:
    void sendBroadcast();
    void processPendingDatagrams();
private:
    Ui::MainView *ui;
    QUdpSocket *socket;
};

#endif // MAINVIEW_H
