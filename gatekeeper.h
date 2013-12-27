/*New home of all things Postage communication. This means that this class will be taking care of creating and updating the peers list to the user*/

#ifndef GATEKEEPER_H
#define GATEKEEPER_H

#include <QObject>

class GateKeeper : public QObject
{
    Q_OBJECT
public:
    explicit GateKeeper(QObject *parent = 0);
    
signals:
    
public slots:
    
};

#endif // GATEKEEPER_H
