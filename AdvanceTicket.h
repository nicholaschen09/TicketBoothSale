#ifndef ADVANCETICKET_H
#define ADVANCETICKET_H
#include "ticket.h"
class AdvanceTicket : public Ticket {
private:
    int days;
public:
    AdvanceTicket(int d) : days(d) {}
    double getPrice() override {
      if (days >= 10) {
        return 30.00;
      } else {
        return 40.00;
      }
    }
};
#endif