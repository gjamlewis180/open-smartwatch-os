#ifndef OSW_APP_WUMPUS_HUNT_H
#define OSW_APP_WUMOUS_HUNT_H

#include <osw_hal.h>

#include "osw_app.h"

class OswAppWumpusHunt : public OswApp {
 public:
  OswAppWumpusHunt(void){};
  void setup(OswHal* hal);
  void loop(OswHal* hal);
  void stop(OswHal* hal);
  ~OswAppWumpusHunt(){};

 private:
};

#endif