#ifndef IOBSERVER_H
#define IOBSERVER_H


class IObserver
{
public:
    IObserver();
    virtual ~IObserver();

    virtual void update(float temp, float humidity, float pressure) = 0;
};

#endif // IOBSERVER_H
