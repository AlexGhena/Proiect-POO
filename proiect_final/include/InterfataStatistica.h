#ifndef INTERFATASTATISTICA_H
#define INTERFATASTATISTICA_H

class InterfataStatistica {
public:
    virtual int nrbaieti(int grupa) = 0;
    virtual int nrfete(int grupa) = 0;
    virtual ~InterfataStatistica() {}
};

#endif // InterfataSTATISTICA_H
