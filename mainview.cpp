#include "mainview.h"
#include "ui_mainview.h"
#include <QtNetwork/QUdpSocket>

MainView::MainView(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainView)
{
    ui->setupUi(this);
    socket = new QUdpSocket();
    socket->bind(5922,QUdpSocket::ShareAddress);
    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(sendBroadcast()));
    connect(socket,SIGNAL(readyRead()),this,SLOT(processPendingDatagrams()));
}

MainView::~MainView()
{
    delete ui;
}

void MainView::sendBroadcast(){ //send a simple broadcast message and show the avaliable clients
    QByteArray datagram;
    if(ui->plainTextEdit->toPlainText().length()>0)
        datagram = ui->plainTextEdit->toPlainText().toUtf8();
    else
        datagram  = "No Message Sent";
    socket->writeDatagram(datagram.data(),QHostAddress::Broadcast,5922); //send the data
    ui->status->setText("<b>Message has been sent</b>");
}

void MainView::processPendingDatagrams(){ //this function will recieve broadcast messages and print the message to the screen
    while(this->socket->hasPendingDatagrams()){
        QByteArray datagram;
        datagram.resize(socket->pendingDatagramSize()); //resize so it has enough space foe the incomming packet
        socket->readDatagram(datagram.data(),datagram.size());
        ui->status->setText(datagram.data());
    }
}
