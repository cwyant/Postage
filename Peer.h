/*This class provides storage and functions for the peers being used in Postage*/
#ifndef PEER_H
#define PEER_H
#include <QString>

class Peer {
public:
    QString getPeerName(); //returns the name of the peer
    QString getPeerType(); //returns the type of system that the peer is using i.e Linux, Windows, Mac
    void setPeerName(QString name);
    void setPeerType(QString type);
    Peer(); //Default constructor
private:
    QString peerName;
    QString peerType;
};

#endif // PEER_H
