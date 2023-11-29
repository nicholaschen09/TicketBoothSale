#ifndef TICKET_H
#define TICKET_H
class Ticket {
public:
    virtual ~Ticket() {} 
    virtual double getPrice() {
        return 0.0;
    }
};
#endif 