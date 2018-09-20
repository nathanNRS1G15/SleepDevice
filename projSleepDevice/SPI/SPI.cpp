#include "SPI.h"

alt_u8 *SPI::transfer(alt_u8 *data, alt_u8 length, alt_u8 slave)
{
   static alt_u8 rxdataReceived[100];

   slaveselect &= (1 << slave);

   if(length > 1)
   {
      control |= SSO;
   }

   alt_u8 stale = rxdata;
   alt_u8 increment = 0;
   volatile alt_u16 stat = 0;

   do
   {
      do
      {
         stat = status;
      } while( ((stat & TRDY) == 0) && ((stat & RRDY) == 1)  );

      txdata = data[increment];

      if(status & RRDY)
      {
         rxdataReceived[increment] = rxdata;
      }
      increment++;
   } while( (increment != length) );

   while( (status & TMT) == 0);

   control &= ~SSO;
   slaveselect = 0;

   return rxdataReceived;
}


