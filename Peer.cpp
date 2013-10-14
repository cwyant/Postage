#include "Peer.h"
#include <QString>

Peer::Peer(){
    peerName = "Name not avaliable";
    peerType = "Type not avaliable";
}

QString Peer::getPeerName(){
    return peerName;
}

QString Peer::getPeerType(){
    return peerType;
}

void Peer::setPeerName(QString name){
    if(name.length()>0) //If there is no data, don't bother updating it
        this->peerName = name;
}

void Peer::setPeerType(QString type){
    if (type.length()>0)
        this->peerType = type;
}
