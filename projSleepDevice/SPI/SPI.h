#ifndef SPI_H_INCLUDE
#define SPI_H_INCLUDE

#include "system.h"
#include "alt_types.h"

#include <cstddef>
#include <new>

typedef volatile alt_u16 SPI_register;

class SPI
   {
   public:
      void *operator new(std::size_t, void *p)
      {
         return p;
      }
      alt_u8 *transfer(alt_u8 *data, alt_u8 length, alt_u8 slave);


   private:
      enum {ROE = 0x08, TOE = 0x10, TMT = 0x20, TRDY = 0x40, RRDY = 0x80, E = 0x100};
      enum {IROE = 0x08, ITOE = 0x10, ITRDY = 0x40, IRRDY = 0x80, IE = 0x100, SSO = 0x400};
      SPI_register rxdata;
      SPI_register txdata;
      SPI_register status;
      SPI_register control;
      SPI_register reversed;
      SPI_register slaveselect;
   };

#endif
