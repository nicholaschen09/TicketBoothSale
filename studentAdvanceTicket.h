#ifndef STUDENTADVANCETICKET_H
#define STUDENTADVANCETICKET_H
#include "AdvanceTicket.h"
#include "ticket.h"
class StudentAdvanceTicket : public AdvanceTicket {
public:
  StudentAdvanceTicket(int d) : AdvanceTicket(d) {}
  double getPrice() override {
      return AdvanceTicket::getPrice() / 2;
  }
};
#endif