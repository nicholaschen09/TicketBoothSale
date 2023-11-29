#include "ticket.h"
#ifndef WALKUPTICKET_H
#define WALKUPTICKET_H
class WalkupTicket : public Ticket {
public: 
  double getPrice() override {
      return 50.00;
  }
};
#endif 