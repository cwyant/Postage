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
