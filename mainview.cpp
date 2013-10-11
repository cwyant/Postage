#include "mainview.h"
#include "ui_mainview.h"
#include <QtNetwork/QUdpSocket>

MainView::MainView(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainView)
{
    ui->setupUi(this);
    socket = new QUdpSocket();
    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(sendBroadcast()));
}

MainView::~MainView()
{
    delete ui;
}

void MainView::sendBroadcast(){ //send a simple broadcast message and show the avaliable clients
    QByteArray datagram = "This is a test :)";
    socket->writeDatagram(datagram.data(),QHostAddress::Broadcast,5922); //send the data
    ui->status->setText("<b>Message has been sent</b>");
}
